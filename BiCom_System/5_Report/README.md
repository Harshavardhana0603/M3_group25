# BiCom System

 ### Table of contents:
 1.[Description](#description)
 
 2.[Features](#features)
 
 3.[State of art](#state-of-art)
 
  4.[Requirements](#requirements)
  
  - [High Level Requirement](#high-level-requirement)
  
  - [Low level requiements](#low-level-requirement)
  
  5.[Behavioural Diagram](#behavioural-diagram)
  
  6.[Low Level Flow Chart Behavioral Diagram](#low-level-flow-chart-behavioral-diagram)
  
  7.[Structural Diagrams](#structural-diagrams)
  
  8.[Test plan and output](#test-plan-and-output)
  
  
## Description:
* BiCom System is a bidirectional Remote Keyless Entry system.
* Along with providing the security to the car it also provide the status of various features of the car.
* It transmits information from key fob to the car and also from the car to the key fob hence known as bidirectional.

## Features:
* It provides the status of the window when button is pressed once.
* Provides the alarm status when the button is pressed twice.
* Gives the details of the battery when button is pressed thrice.
* Status of the door is given when the button is pressed four times.

## State of art:
* This system facilitates various features to provide the status of the parts of the car and also provide security.
* In BiCom System the radio waves are transmitted in both the direction.
* Waves are transmitted from key fob to car to lock and unlock the car remotely.
* Waves transmitted from car to keyfob for displaying the information of the car status.

## Requirements
### High Level Requirement
|ID|Description|
|:-|:-|
|HLR 1|The system shall provide the staus of the window.|
|HLR 2|The system shall provide the alarm status.|
|HLR 3|The system shall provide the car battery information.|
|HLR 4|The system shall provide the status of the car door.| 

### Low Level Requirement
|ID|Description|
|:-|:-|
|LLR 1.1|When user press the button once,it provide the window status.|
|LLR 1.2|All the LED's are turned ON simultaneously.|
|LLR 2.1|When user press the button twice,it provide the status of the alarm.|
|LLR 2.2|All the LED's are turned OFF simultaneously.|
|LLR 3.1|When user press the button three times,system provide the information about the car battery.|
|LLR 3.2|All the LED's are turned ON in clockwise direction.|
|LLR 4.1|When user press the button four times,it provide the door status.|
|LLR 4.2|All the LED's are turned ON in anti-clockwise direction.|





## Behavioural Diagram

![bbk](https://user-images.githubusercontent.com/47130806/157829642-6824da8b-5ba1-4b1f-b0e9-614c0bac0390.PNG)

#### Low Level Flow Chart Behavioral Diagram

<img width="457" alt="10" src="https://user-images.githubusercontent.com/99073372/157882587-2ef7280b-e095-4554-a317-1b28066f3c32.PNG">


##  Structural Diagrams

#### High Level Use Case Structural Diagram

#### Low Level Use Case Structural Diagram

<img width="657" alt="110" src="https://user-images.githubusercontent.com/99073372/157882842-66b3541b-ae00-4534-a52a-bd14bc51ddfd.PNG">


## Test plan and output


## Low Level Test plan :
 
|ID| Description | Input | Expected Output | Actual output | Status | 
|--|--|--|--|--|--|
| 01 |  Window Indication | press the button once | All LED's should be turned ON | LED's are ON|✔|
| 02|  alram indication | press the button twice | All LED's should be turned off | LED's are OFF |✔|
| 03 | car battery Info  | press the button three times | LED's should be turned ON in a clockwise manner | LED's are ON in clockwise manner |✔|
| 04 |  Door indication | press the button four times | LED's should be turned ON in a anti-clockwise manner |LED's are ON in anti-clockwise manner |✔|


 ## High Level Test plan :
|ID| Description  | Input| Expected Output | Actual Output| Status |
|--|--|--|--|--|--|
| 01 | windows  | Button is pressed once| Windows status| Windows status |✔|
| 02 | Alram | Button is pressed twice | Alram status | Alram status |✔|
| 03 |  Car battery | Button is pressed three times | Battery info | Battery info |✔|
| 04 | Door   | Button is pressed four times | Door status |Door status |✔|



 

