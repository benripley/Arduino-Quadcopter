# Quadcopter #

### Arduino Quadcopter Flight Controller ###
I’ve decided to build a QuadCopter and in an effort to really learn, I have decided to design and implement the Flight Controller and IMU myself using an Arduino rather than purchasing an off-the-shelf flight controller.

#### Operation ####
In order to maintain stability, the quadcopter must continuously take measurements from the IMU sensors and make adjustments to the speed of each rotor to keep the aircraft level. Control is achieved by varying the relative thrusts of individual rotors. An equal adjustment of all motors would result in a change in altitude. Yaw (turning left or right) is controlled by increasing the velocity of the motors rotating in one direction and decreasing the others by the same amount. Since the same amount is removed, it produces no extra lift but the angular torque is now unbalanced resulting in a turn to the left or right. Roll and pitch (tilt) are controlled by decreasing the velocity of one motor and increasing the motor opposite it by the same amount. Again this produces no extra lift but causes the craft to tilt in the direction of the motor with the reduced speed.

I am using a [PID](http://en.wikipedia.org/wiki/PID_controller) (proportional-integral-derivative) controller to calculate the output for each of the three axes. This uses the signals from the receiver as setpoints and compares them to the actual angle values measured by the IMU. The difference is fed back into the PID controller to calculate new output values. The calculated roll, pitch, and yaw values are mixed together to generate the relative output of each motor.

#### External libraries ####
Required external libraries have been included in the libraries folder of this repository. However, as with all [Arduino libraries](http://arduino.cc/en/Guide/Libraries), you will need to copy them to the libraries folder of your Arduino installation before opening the sketch.

#### Flight Controller Board ####
I have been testing it on an Arduino Uno but it should work on any Arduino board with sufficient I/O. You will need at least 4 Input pins and 5 Output pins as well as I2C and a Serial output for debugging. Also, this firmware has been tuned for my Motors, ESCs, and frame. If you are using different components, you will need to specify different tuning parameters (especially in the PID section).

#### IMU Board ####
I am using the gyroscope and accelerometer from an ArduImu v3 board with custom firmware to provide orientation information. The data is transferred to the flight controller board over I2C. The IMU project is available  as a separate project on GitHub.

#### More Info ####
For more info and videos, see the following: 
[My Quadcopter Pages](http://www.benripley.com/category/diy/quadcopter/)
