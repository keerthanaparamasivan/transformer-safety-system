# transformer-safety-system
An embedded system that monitors transformer temperature and gas levels in real time to detect early fire or explosion risks, automatically triggering alarms and protective actions to ensure safety and reliability.
#  Smart Power Transformer Fire & Explosion Prevention System

## Overview
This project uses embedded intelligence to detect abnormal conditions in transformers and prevent fire or explosion.

## Features
- Temperature monitoring (LM35)
- Gas leakage detection (MQ-2)
- Automatic alarm system
- Relay-based cooling activation
- Real-time serial monitoring

## Working Principle
The system continuously monitors transformer conditions:
- If temperature > 60°C OR gas exceeds threshold:
  - Buzzer turns ON
  - Relay activates cooling system
  - Warning LED glows

## Components
- Arduino UNO
- LM35 Sensor
- MQ-2 Gas Sensor
- Buzzer
- Relay Module
- LED

## How to Run
1. Open Arduino IDE
2. Upload `transformer_safety_system.ino`
3. Connect components
4. Open Serial Monitor

## Output
- Displays temperature & gas values
- Alerts when unsafe conditions detected

## Future Improvements
- IoT integration (WiFi alerts)
- Mobile notification system
- Data logging

