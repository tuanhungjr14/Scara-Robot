  #include <AccelStepper.h>
  #include <Servo.h>

  Servo servo;

  #define Y_STEP_PIN 3
  #define Y_DIR_PIN 6
  #define Y_ENABLE_PIN 8
  #define Y_LIMIT_SWITCH_PIN 10

  #define X_STEP_PIN 2
  #define X_DIR_PIN 5
  #define X_ENABLE_PIN 8
  #define X_LIMIT_SWITCH_PIN 9

  #define Z_STEP_PIN 4
  #define Z_DIR_PIN 7
  #define Z_ENABLE_PIN 8
  #define Z_LIMIT_SWITCH_PIN 11
  #define PUMP 12

  AccelStepper stepperY(AccelStepper::DRIVER, Y_STEP_PIN, Y_DIR_PIN);
  AccelStepper stepperX(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);
  AccelStepper stepperZ(AccelStepper::DRIVER, Z_STEP_PIN, Z_DIR_PIN);

  // Lưu trữ giá trị speed và acceleration hiện tại
  int currentSpeed = 50;
  int currentAcceleration = 50;

  bool yMotorEnabled = false;  // Flag to track Y motor status
  bool xMotorEnabled = false;  // Flag to track X motor status
  bool zMotorEnabled = false;  // Flag to track Z motor status

  void setup() {
      servo.attach(A3);
      digitalWrite(PUMP, LOW);

      // Set pin modes
      pinMode(Y_STEP_PIN, OUTPUT);
      pinMode(Y_DIR_PIN, OUTPUT);
      pinMode(Y_ENABLE_PIN, OUTPUT);
      pinMode(Y_LIMIT_SWITCH_PIN, INPUT_PULLUP);

      pinMode(X_STEP_PIN, OUTPUT);
      pinMode(X_DIR_PIN, OUTPUT);
      pinMode(X_ENABLE_PIN, OUTPUT);
      pinMode(X_LIMIT_SWITCH_PIN, INPUT_PULLUP);

      pinMode(Z_STEP_PIN, OUTPUT);
      pinMode(Z_DIR_PIN, OUTPUT);
      pinMode(Z_ENABLE_PIN, OUTPUT);
      pinMode(Z_LIMIT_SWITCH_PIN, INPUT_PULLUP);
      
      pinMode(PUMP, OUTPUT);

      // Disable the motors initially
      digitalWrite(Y_ENABLE_PIN, HIGH);
      digitalWrite(X_ENABLE_PIN, HIGH);
      digitalWrite(Z_ENABLE_PIN, HIGH);

      // Set max speed and acceleration
      stepperY.setMaxSpeed(currentSpeed);   // Set max speed (steps per second)
      stepperY.setAcceleration(currentAcceleration); // Set acceleration (steps per second per second)
      stepperX.setMaxSpeed(currentSpeed);   // Set max speed (steps per second)
      stepperX.setAcceleration(currentAcceleration); // Set acceleration (steps per second per second)
      stepperZ.setMaxSpeed(currentSpeed);   // Set max speed (steps per second)
      stepperZ.setAcceleration(currentAcceleration); // Set acceleration (steps per second per second)

      // Start serial communication
      Serial.begin(9600);
  }

  void loop() {
      if (Serial.available() > 0) {
          String command = Serial.readStringUntil('\n');
          command.trim();

          if (command == "HOME") {
              enableAllMotors();
              homeStepper();
              // Serial.println("DONE");
          } else if (command.startsWith("J1:")) {
              int angle = command.substring(3).toInt();
              moveStepperYToAngle(angle);
              Serial.println("DONE");
          } else if (command.startsWith("J2:")) {
              int angle = command.substring(3).toInt();
              moveStepperXToAngle(angle);
              Serial.println("DONE");
          } else if (command.startsWith("J3:")) {
              int angle = command.substring(3).toInt();
              angle = constrain(angle, 0, 180); // Constrain angle between 0 and 180 degrees
              servo.write(angle);
              Serial.println("DONE");
          } else if (command.startsWith("Z:")) {
              int angle = command.substring(2).toInt();
              moveStepperZToAngle(angle);
              Serial.println("DONE");
          } else if (command.startsWith("SPEED:")) {
              int speed = command.substring(6).toInt();
              setSpeedAllMotors(speed);
              currentSpeed = speed; // Cập nhật giá trị speed hiện tại
              Serial.println("Speed set to: " + String(speed));
              Serial.println("DONE");
          } else if (command.startsWith("ACCEL:")) {
              int accel = command.substring(6).toInt();
              setAccelerationAllMotors(accel);
              currentAcceleration = accel; // Cập nhật giá trị acceleration hiện tại
              Serial.println("Acceleration set to: " + String(accel));
              Serial.println("DONE");
          } else if (command.startsWith("RELAY:ON")) {
              digitalWrite(PUMP, HIGH); // Turn the relay ON
              Serial.println("Relay is ON");
              Serial.println("DONE");
          } else if (command.startsWith("RELAY:OFF")) {
              digitalWrite(PUMP, LOW); // Turn the relay OFF
              Serial.println("Relay is OFF");
              Serial.println("DONE");
          }
      }

      // Run motors if there are control commands
      stepperY.run();
      stepperX.run();
      stepperZ.run();
  }

  void homeStepper() {
      // Homing Stepper X
      while (digitalRead(X_LIMIT_SWITCH_PIN) != HIGH) {
          stepperX.setSpeed(-500);
          stepperX.runSpeed();  
      }
      stepperX.setCurrentPosition(0);
      stepperX.moveTo(100);
      while (stepperX.currentPosition() != 100) {
          stepperX.run();
      }

      // Homing Stepper Y
      while (digitalRead(Y_LIMIT_SWITCH_PIN) != HIGH) {
          stepperY.setSpeed(-500);
          stepperY.runSpeed();
      }
      stepperY.setCurrentPosition(0);
      stepperY.moveTo(100);
      while (stepperY.currentPosition() != 100) {
          stepperY.run();
      }

      // Homing Stepper Z
      while (digitalRead(Z_LIMIT_SWITCH_PIN) != HIGH) {
          stepperZ.setSpeed(-4000);
          stepperZ.runSpeed();
      }
      stepperZ.setCurrentPosition(0);
      stepperZ.moveTo(100);
      while (stepperZ.currentPosition() != 100) {
          stepperZ.run();
      }

      // Enable motors after homing
      enableAllMotors();
      setHomePosition();
      Serial.println("Homing complete");
  }

  void setHomePosition() {
      stepperX.setCurrentPosition(0);
      stepperY.setCurrentPosition(0);
      stepperZ.setCurrentPosition(0);
  }

  void moveStepperYToAngle(int angle) {
      if (!yMotorEnabled) {  // Kiểm tra xem động cơ đã được kích hoạt hay chưa
          digitalWrite(Y_ENABLE_PIN, LOW); // Kích hoạt động cơ Y
          yMotorEnabled = true; // Cập nhật trạng thái của động cơ Y
      }
      long targetPosition = angleToStepY(angle);
      stepperY.moveTo(targetPosition);
      stepperY.setMaxSpeed(currentSpeed);   // Đảm bảo cập nhật giá trị speed hiện tại
      stepperY.setAcceleration(currentAcceleration); // Đảm bảo cập nhật giá trị acceleration hiện tại
  }

  void moveStepperXToAngle(int angle) {
      if (!xMotorEnabled) {  // Kiểm tra xem động cơ đã được kích hoạt hay chưa
          digitalWrite(X_ENABLE_PIN, LOW); // Kích hoạt động cơ X
          xMotorEnabled = true; // Cập nhật trạng thái của động cơ X
      }
      long targetPosition = angleToStepX(angle);
      stepperX.moveTo(targetPosition);
      stepperX.setMaxSpeed(currentSpeed);   // Đảm bảo cập nhật giá trị speed hiện tại
      stepperX.setAcceleration(currentAcceleration); // Đảm bảo cập nhật giá trị acceleration hiện tại
  }

  void moveStepperZToAngle(int angle) {
      if (!zMotorEnabled) {  // Kiểm tra xem động cơ đã được kích hoạt hay chưa
          digitalWrite(Z_ENABLE_PIN, LOW); // Kích hoạt động cơ Z
          zMotorEnabled = true; // Cập nhật trạng thái của động cơ Z
      }
      long targetPosition = angleToStepZ(angle);
      stepperZ.moveTo(targetPosition);
      stepperZ.setMaxSpeed(currentSpeed);   // Đảm bảo cập nhật giá trị speed hiện tại
      stepperZ.setAcceleration(currentAcceleration); // Đảm bảo cập nhật giá trị acceleration hiện tại
  }

  void setSpeedAllMotors(int speed) {
      stepperY.setMaxSpeed(speed);
      stepperX.setMaxSpeed(speed);
      stepperZ.setMaxSpeed(speed);
  }

  void setAccelerationAllMotors(int accel) {
      stepperY.setAcceleration(accel);
      stepperX.setAcceleration(accel);
      stepperZ.setAcceleration(accel);
  }

  void enableAllMotors() {
      if (!xMotorEnabled) {
          xMotorEnabled = true;
          digitalWrite(X_ENABLE_PIN, LOW);  // Kích hoạt động cơ X
      }
      if (!yMotorEnabled) {
          yMotorEnabled = true;
          digitalWrite(Y_ENABLE_PIN, LOW);  // Kích hoạt động cơ Y
      }
      if (!zMotorEnabled) {
          zMotorEnabled = true;
          digitalWrite(Z_ENABLE_PIN, LOW);  // Kích hoạt động cơ Z
      }
  }

  long angleToStepY(int angle) {
      const float stepsPerRevolution = 2630;   // Steps for one revolution of the stepper motor
      const float degreesPerRevolution = 360.0; // Degrees in one revolution
      return (long)(angle * (stepsPerRevolution / degreesPerRevolution));
  }

  long angleToStepX(int angle) {
      const float stepsPerRevolution = 3960;   // Steps for one revolution of the stepper motor
      const float degreesPerRevolution = 360.0; // Degrees in one revolution
      return (long)(angle * (stepsPerRevolution / degreesPerRevolution));
  }

  long angleToStepZ(int mm) {
      const float stepsPerMm = 1000; // Steps per millimeter
      return (long)(mm * stepsPerMm);
  }