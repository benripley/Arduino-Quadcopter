
PID roll_controller(&pid_roll_in,   &pid_roll_out,  &pid_roll_setpoint,  5.0, 0.0, 0.0, REVERSE);
PID pitch_controller(&pid_pitch_in, &pid_pitch_out, &pid_pitch_setpoint, 5.0, 0.0, 0.0, REVERSE);
PID yaw_controller(&pid_yaw_in,     &pid_yaw_out,   &pid_yaw_setpoint,   1.0, 0.0, 0.0, DIRECT); 


void pid_initialize() {
  roll_controller.SetOutputLimits(ROLL_PID_MIN,ROLL_PID_MAX);
  pitch_controller.SetOutputLimits(PITCH_PID_MIN,PITCH_PID_MAX);
  yaw_controller.SetOutputLimits(YAW_PID_MIN,YAW_PID_MAX);
  roll_controller.SetMode(AUTOMATIC);
  pitch_controller.SetMode(AUTOMATIC);
  yaw_controller.SetMode(AUTOMATIC);
  roll_controller.SetSampleTime(10);
  pitch_controller.SetSampleTime(10);
  yaw_controller.SetSampleTime(10);
}

void pid_update(){
  pid_roll_in = angleX;
  pid_pitch_in = angleY;
  pid_yaw_in = angleZ; 
}

void pid_compute() {
   roll_controller.Compute();
   pitch_controller.Compute();
   yaw_controller.Compute();
}
