
void debug_process(){
#ifdef DEBUG_OUTPUT  

#ifdef DEBUG_ANGLES
  Serial.print(F("X:"));
  Serial.print((float)(angleX));
  Serial.print('\t');
  Serial.print(F("Y:"));
  Serial.print((float)(angleY));
  Serial.print('\t');
  //Serial.print(F("Z:"));
  //Serial.print((float)(angleZ));
  //Serial.print('\t');
#endif

#ifdef DEBUG_RX
  Serial.print('\t');
  Serial.print(F("RX_Roll:"));
  Serial.print(rx_values[0]);
  Serial.print('\t');
  Serial.print(F("RX_Pitch:"));
  Serial.print(rx_values[1]);
  Serial.print('\t');
  Serial.print(F("RX_Throttle:"));
  Serial.print(rx_values[2]);
  Serial.print('\t');
  //Serial.print(F("RX_Yaw:"));
  //Serial.print(rx_values[3]);
  //Serial.print('\t');   
#endif

#ifdef DEBUG_PID
  Serial.print(F("PID_R:"));
  Serial.print(pid_roll_in);Serial.print(',');
  Serial.print(pid_roll_setpoint);Serial.print(',');
  Serial.print(pid_roll_out);
  Serial.print('\t');
  Serial.print(F("PID_P:"));
  Serial.print(pid_pitch_in);Serial.print(',');
  Serial.print(pid_pitch_setpoint);Serial.print(',');
  Serial.print(pid_pitch_out);
  Serial.print('\t');
  //Serial.print(F("PID_Y:"));
  //Serial.print(pid_yaw_in);Serial.print(',');
  //Serial.print(pid_yaw_setpoint);Serial.print(',');
  //Serial.print(pid_yaw_out);
  //Serial.print('\t');
#endif

#ifdef DEBUG_MOTORS
  Serial.print('\t');
  Serial.print(F("M0:"));
  Serial.print(m0);
  Serial.print('\t');
  Serial.print(F("M1:"));
  Serial.print(m1);
  Serial.print('\t');
  Serial.print(F("M2:"));
  Serial.print(m2);
  Serial.print('\t');
  Serial.print(F("M3:"));
  Serial.print(m3);
  Serial.print('\t'); 
#endif

#ifdef DEBUG_LOOP_TIME
  Serial.print('\t');
  unsigned long elapsed_time = micros() - prev_time;
  Serial.print(F("Time:"));
  Serial.print((float)elapsed_time/1000);
  Serial.print(F("ms"));
  Serial.print('\t');
#endif

  Serial.println();
#endif
}

