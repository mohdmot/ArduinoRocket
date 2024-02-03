# Arduino Rocket System
A missile system programmed with Arduino that can take off and land. It can be programmed and developed for a specific mission. The missile contains two parts:
- **Control compartment**
- **Fuel compartment**

This is how the missile and its division are supposed to look like :

![](https://github.com/mohdmot/ArduinoRocket/blob/main/parts.png?raw=true)

### **> Control compartment**
As we mentioned, it contains the Arduino and all the pieces related to it, which are:
- Temperature sensor: It is located in a convex chamber connected to the bottom (the fuel compartment) to measure its temperature continuously, so that when the fuel runs out, the temperature will reach the head of the chamber and the sensor will notice a change in temperature, so it will send a command to disconnect the fuel chamber and open the parachute.
- The first DC motor: It takes care of separating the fuel chamber when it is running
- The second DC motor: opens the parachute when it is turned on
### **> Fuel compartment**
This chamber is completely filled with fuel. 
The fuel consists of:
- **Potassium nitrate**
- **Sugar**
These components are capable of creating sufficient forces to propel the missile to a good range.

## Arduino Circuit

First, you start it using a remote control. The first thing that starts is to monitor the temperature of the initial fuel chamber (it is supposed to be a normal temperature, not hot), then wait for any change in temperature (meaning that the fuel has begun to penetrate and is about to run out). If it finds a clear difference in temperature, it starts two engines. The first provides a place to throw the parachute, and the second separates the control part from the fuel part, the fuel chamber will be finished, finished and collapsed, and the control room will be shot down

![](https://github.com/mohdmot/ArduinoRocket/blob/main/arduino.png?raw=true)

# 3D Model
I designed a 3D model of the rocket's shape, which I used in the presentation of my project, designed in sketchup , in [Rocket.skp](https://github.com/mohdmot/ArduinoRocket/blob/main/Rocket.skp).


## Code
You can see the code in [main.cpp](https://github.com/mohdmot/ArduinoRocket/blob/main/main.cpp)
