#define SAFE

//-------PID Config----------
#define ROLL_PID_KP  0.250
#define ROLL_PID_KI  0.950
#define ROLL_PID_KD  0.011
#define ROLL_PID_MIN  -200.0
#define ROLL_PID_MAX  200.0

#define PITCH_PID_KP  0.250
#define PITCH_PID_KI  0.950
#define PITCH_PID_KD  0.011
#define PITCH_PID_MIN  -200.0
#define PITCH_PID_MAX  200.0

#define YAW_PID_KP  0.680
#define YAW_PID_KI  0.500
#define YAW_PID_KD  0.0001
#define YAW_PID_MIN  100.0
#define YAW_PID_MAX  100.0

//-------------------------



//-------RX Config----------
#define THROTTLE_RMIN  1000
#define THROTTLE_SAFE_SHUTOFF 1120
#define THROTTLE_RMAX  1900
#define THROTTLE_RMID  1470

#define ROLL_RMIN  THROTTLE_RMIN
#define ROLL_RMAX  THROTTLE_RMAX
#define ROLL_WMIN  -30
#define ROLL_WMAX  30

#define PITCH_RMIN  THROTTLE_RMIN
#define PITCH_RMAX  THROTTLE_RMAX
#define PITCH_WMIN  -30
#define PITCH_WMAX  30

#define YAW_RMIN  THROTTLE_RMIN
#define YAW_RMAX  THROTTLE_RMAX
#define YAW_WMIN  -30
#define YAW_WMAX  30

//-------IMU Config-----------
#define ADDR_SLAVE_I2C 2
#define PACKET_SIZE 12

//-------Debug Config---------
#define DEBUG_OUTPUT
#define DEBUG_ANGLES
#define DEBUG_PID
#define DEBUG_RX
#define DEBUG_MOTORS
#define DEBUG_LOOP_TIME
//----------------------------

//-------Motor PWM Levels
#define MOTOR_ZERO_LEVEL  1000
#define MOTOR_ARM_START  1500
#define MOTOR_MAX_LEVEL  2000


//-------RX PINS-------------
#define RX_PINS_OFFSET 2
#define PIN_RX_ROLL 2
#define PIN_RX_PITCH 3
#define PIN_RX_THROTTLE 4
#define PIN_RX_YAW 5

//-------MOTOR PINS-----------
#define PIN_MOTOR0  6
#define PIN_MOTOR1  9
#define PIN_MOTOR2  10
#define PIN_MOTOR3  11

//-------LED PINS-------------
#define PIN_LED 13

