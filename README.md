# Cleaning-Robot

## Description
A robot which can clean surfaces using Arduino microcontroller. The robot can be controlled by an app. 

## Hardware Requireed:
Geared motors, Plastic geared motors, Arduino UNO, Bluetooth module, motor driver board, Standard servo motor, Sealed lead acid rechargeable battery, Water pump, NPN power transistors, N-channel MOSFET, resistors. 

## Software Required:
Arduino IDE, MIT App Inventor

## System Block Diagram
![block diagram](https://github.com/haseefathi/Cleaning-Robot/blob/master/pictures/block.png)

## Functionalities:
<ol>
  <li>The 10.5V Power Supply activates the system.</li>
  <li>Through the Bluetooth Module, commands from the user are sent to the Arduino to control the robot. </li>
  <li>Based on the given instruction, the Arduino calls the sent signals from the code. </li>
  <li>The instructions are then sent to the motor driver, which controls the movement of the wheels accordingly. </li>
  <li>Depending on the user’s instructions, the mops and the roller are activated or deactivated. </li>
  <li>If extra water is required, the appropriate signal is sent via Bluetooth module and the water pump sprays the water in front of the mops. </li>
</ol>

## Mobile App
Using MIT App Inventor, we build the app which connects the mobile phone to the Arduino and sends the signals. Each signal is processed by the microcontroller which turns on/off certain components of the robot through switch-case statements in the code. 
#### MIT App Inventor Blocks
![mit blocks](https://github.com/haseefathi/Cleaning-Robot/blob/master/pictures/mitblocks.png)

### Final Mobile App
![final app](https://github.com/haseefathi/Cleaning-Robot/blob/master/pictures/app.png)

## Final Robot
![robot](https://github.com/haseefathi/Cleaning-Robot/blob/master/pictures/final.png)
