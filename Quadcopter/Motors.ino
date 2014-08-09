Servo motor0;
Servo motor1;
Servo motor2;
Servo motor3;

void motors_initialize(){
  motor0.attach(PIN_MOTOR0);
  motor1.attach(PIN_MOTOR1);
  motor2.attach(PIN_MOTOR2);
  motor3.attach(PIN_MOTOR3);
  motor0.writeMicroseconds(MOTOR_ZERO_LEVEL);
  motor1.writeMicroseconds(MOTOR_ZERO_LEVEL);
  motor2.writeMicroseconds(MOTOR_ZERO_LEVEL);
  motor3.writeMicroseconds(MOTOR_ZERO_LEVEL);
}

void motors_arm(){
  motor0.writeMicroseconds(MOTOR_ZERO_LEVEL);
  motor1.writeMicroseconds(MOTOR_ZERO_LEVEL);
  motor2.writeMicroseconds(MOTOR_ZERO_LEVEL);
  motor3.writeMicroseconds(MOTOR_ZERO_LEVEL);
}

void update_motors(int m0, int m1, int m2, int m3)
{
  motor0.writeMicroseconds(m0);
  motor1.writeMicroseconds(m1);
  motor2.writeMicroseconds(m2);
  motor3.writeMicroseconds(m3);
}

