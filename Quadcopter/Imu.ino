
void imu_update() 
{
  Wire.requestFrom(ADDR_SLAVE_I2C, PACKET_SIZE);
  byte data[PACKET_SIZE];
  int i = 0;
  while(Wire.available())
  { 
    data[i] = Wire.read(); 
    i++;
  }
  
  // we use a c union to convert between byte[] and float
  union ROL_tag {byte b[4]; float fval;} ROL_Union; 
  union PIT_tag {byte b[4]; float fval;} PIT_Union; 
  union YAW_tag {byte b[4]; float fval;} YAW_Union;
  
  ROL_Union.b[0] = data[0];
  ROL_Union.b[1] = data[1];
  ROL_Union.b[2] = data[2];
  ROL_Union.b[3] = data[3];
  if(isnan(ROL_Union.fval) != 1)
  {
    angleX = ROL_Union.fval;
  }
  
  PIT_Union.b[0] = data[4];
  PIT_Union.b[1] = data[5];
  PIT_Union.b[2] = data[6];
  PIT_Union.b[3] = data[7];
  if(isnan(PIT_Union.fval) != 1)
  {
    angleY = PIT_Union.fval;
  }
  
  YAW_Union.b[0] = data[8];
  YAW_Union.b[1] = data[9];
  YAW_Union.b[2] = data[10];
  YAW_Union.b[3] = data[11];
  if(isnan(YAW_Union.fval) != 1)
  {
    angleZ = YAW_Union.fval;
  }
}

