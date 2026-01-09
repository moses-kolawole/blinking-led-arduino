# Blinking LED – Arduino Project

## Overview
This project is about blinking an LED using an Arduino Uno.
It helped me understand how Arduino digital pins work and how a microcontroller can control simple electronic components using timing.

## Project Description
This is a simple project that blinks an LED at equal time intervals.
It is one of my beginner Arduino projects, and it focuses on digital output, delays, and proper component connection.

## Components Used
- Arduino Uno
- Yellow LED
- 220Ω resistor
- Breadboard
- Jumper wires (2)
- 9V battery
- Battery clip

## Connections
- Arduino Digital Pin 13 is connected to a resistor
- The resistor is connected to the long leg of the LED
- The short leg of the LED is connected to Ground (GND) using a jumper wire

### Note
- Resistors are very important in this connection because they help limit the current going into the LED.
- The position of the LED matters. If the LED is connected the wrong way, it will not turn ON.

## Alternative Connection
Another way to connect the LED is by connecting a jumper wire with a resistor directly to Arduino Digital Pin 13.

⚠️ Important:
The resistor must always be in the circuit. If it is removed, the LED can burn out.

In this setup, the Arduino is no longer controlling the blinking. The LED will stay ON continuously.

## How It Works
- The LED pin is set as OUTPUT.
- The Arduino turns the LED ON by setting the pin to HIGH.
- A delay is added to keep the LED ON for some time.
- The LED is then turned OFF by setting the pin to LOW.
- Anoother delay is added.
- This process repeats again and again, which causes the LED to blink.

## Code Structure
- In the setup() function, I only set the LED pin as OUTPUT.
- In the loop() function, the code:
   - Turns the LED HIGH
   - Delays
   - Turns the LED LOW
   - Delays again

## Challenges Faced
One challenge I faced during this project was during the connection.
Some of my LEDs burned out because I didn’t connect the resistor properly at first. I later understood this after watching a YouTube video and correcting my wiring.

## Results & Behaviour
Below is the image showing the circuit connection:
[Here](images/blinking_led_photo1.jpg)

Below is a demo video of the blinking LED:
[Click Here For the Video](video/blinking_led_project_video.mp4)

## What This Project Taught Me
This project helped me understand that a microcontroller can be used to control how electronic systems work.

For example, something like a washing machine works by running for a fixed time and stopping for another fixed time. This project helped me understand how timing and delays are used in real-life systems.

## Code
The Arduino code for this project is located [Here](code/project_1_for_led_blinking_project_on_23rd_june_2025.ino).

## Project Status
Completed ✅
