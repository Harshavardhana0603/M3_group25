# RKE(Remote Keyless Entry) system 

## Tabel of Content
  1. [Abstract](#abstract)
  
  2. [Introduction](#introduction)
   
  3. [Functions](#functions)
   
  4. [Requirements](#requirements)
   
     * [High Level Requirements](#high-level-requirements)
   
     * [Low Level Requirements](#low-level-requirements)

     * [SWOT Analysis](#swot-analysis)
     
     * [5W's & 1H](#5w-1h)
    
  5. [Block Diagram](#block-diagram)
     
     * [Behavioral Diagram](#behavioral-diagram)
     
     * [Structural Diagram](#structural-diagram)
   
  6. [Testplan](#testplan)
      
      * [High Level Testplan](#high-level-testplan)

      * [Low Level Testplan](#low-level-testplan)
   
   7. [Applications](#applications)

# Abstract
In our modern society comfort became a standard. This comfort, especially in cars can only be achieved by equipping the car with more electronic devices. Some of the electronic devices must cooperate with each other and thus they require a communication channel, which can be wired or wireless. In these days, it would be hard to sell a new car operating with traditional keys. Almost all modern cars can be locked or unlocked with a Remote Keyless System. A Remote Keyless System consists of a key fob that communicates wirelessly with the car transceiver that is responsible for locking and unlocking the car. However there are several threats for wireless communication channels. 
# Introduction
A Remote Keyless Entry System consists of a key fob and a car transceiver that is responsible for locking and unlocking the car. Instead of locking or unlocking the car with a traditional key the user presses a button on the key fob to lock or unlock the car doors,start or stop engines, or turn on and off anti-theft alarms. Unfortunately the keyless cars are increasingly targeted by thieves. Criminals steal vehicles through the re-programming of remote-entry keys. Thus,some insurance companies have denied the insurance for this issue. In addition a Remote Keyless System is vulnerable against a Scan Attack, Playback Attack, Two-Thief Attack,Challenge Forward Prediction Attack and a Dictionary Attack.Another threat for Remote Keyless Entry Systems are On-Board-Diagnose (OBD) key programmers.

# Functions:
Main function of this RKE system are:
* It locks the car doors when the button is pressed once.
* It unlocks the car doors when the button is pressed twice.
* It activates or deactivates alarm when the button is pressed three times.
* It approaches the lights when the button is pressed four times.




 ## Description :

 - Remote Keyless Entry System is a smart entry system and also helps in the security of the vehicle.
 - The system has a transmitter and a receiver.
 - It operates by broadcasting radio waves on a particular frequency unidirectionally.
 - The system has encryption and rolling code algorithms to backup its security.

## Features:

 - It locks the car when the button is pressed once.
 - It unlocks the car when the button is pressed twice.
 - It activates and deactivates the alarm of the car when the button is pressed three times.
 - It approaches light  when the button is pressed four times.

## State of art :

 - The system can control some of the car activities with ease.
 - It can lock, unlock, control alarm and lights of the car remotely without actually touching the car.
 - This system can be called as Remote Keyless entry (RKE) system.
 - It can be also further developed to the standards of a BiCom system.

## Requirements : 
 
## High level Requirements :
|  ID|High Level Requirement  |
|--|--|
|HLR1|The system shall lock the car.  |
|HLR2|The system shall unlock the car. |
|HLR3|The system shall control the alarm.|
|HLR4|The system shall have approach light.|
|HLR5|The system shall have data security.|

## Low Level Requirements :
|ID|Low Level Requirement  |
|--|--|
| LLR1.1 |When the user press the button once, the car shall be locked.|
|LLR1.2|All LED's shall be ON, when the button is pressed once.|
|LLR2.1|When the user press the button twice, the car shall be unlocked.|
|LLR2.2|All LED's shall be OFF, when the button is pressed twice.|
|LLR3.1|When the user press the button three times, the alarm shall be activated or deactivated accordingly.|
|LLR3.2|All LED's shall ON in a clockwise manner, when the button is pressed three times.
|LLR4.1|When the button is pressed four times, the system shall approach light|
|LLR4.2|All LED's shall ON in a anti-clockwise manner, when the button is pressed four times.|
|LLR5|The system shall be provided with data encryption and rolling code algorithms.



## SWOT Analysis

## Strength :

###### Better Access Control.
###### Reduced maual 
###### Advanced Security.
###### User-friendly

## Weakness :

###### Chances of theft
###### Signal range

## Opportunities :
###### It creates some more functions   
###### Worldwide market remuneration

## Threat :

###### Jamming
###### Replay attack



## 5W’s & 1H :
![Screenshot (103)](https://user-images.githubusercontent.com/98948360/157801872-6769e0e2-f3cf-4327-ba11-0a323d103aea.png)

## Architecture :
### Behavioural Diagram
![blk](https://user-images.githubusercontent.com/47130806/157797654-d98bf849-3496-4868-9b67-fad0a2fddf85.PNG)

# Structural diagram
## High level structural diagram
![3](https://user-images.githubusercontent.com/47153476/157861976-147e0bbc-572d-401d-a150-33b72c0a8abc.PNG)

## Low level structural diagram
![4](https://user-images.githubusercontent.com/47153476/157861986-1f62e2ca-9673-419c-8e84-673a49eadb37.PNG)




 







