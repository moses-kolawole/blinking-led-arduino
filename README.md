# Blinking LED – Arduino Project

## Overview
This project demonstrates the basic use of digital output pins on an Arduino board by blinking an LED at a fixed interval.

## Objective
- Learn how to configure Arduino digital pins as OUTPUT
- Understand the structure of an Arduino sketch (`setup()` and `loop()`)
- Practice basic timing using the `delay()` function

## Components Used
- Arduino Uno
- LED
- 220Ω resistor
- Breadboard
- Jumper wires
- 9V Battery
- 9V Battery Clip to DC Barrel Jack
  

## Circuit Diagram
![Circuit Diagram](images/blinking_led_photo1.jpg)

## How It Works
1. The LED pin is set as an OUTPUT using `pinMode()`.
2. The LED is turned ON by writing HIGH to the pin.
3. The program waits for a specified delay.
4. The LED is turned OFF by writing LOW to the pin.
5. This process repeats continuously inside the `loop()` function.

## Code
The Arduino sketch for this project is located in the [code/directory](code/project_1_for_led_blinking_project_on_23rd_june_2025.ino).

## Demo Video
A demonstration video showing the working project is included in this repository.

📹 **Project Demonstration:**  
[Click here to watch/download the demo video](video/blinking_led_project_video.mp4)

*(If the video does not preview directly on GitHub, please download it using the link above.)*

## Reflection (What I Learned)
- How digital output pins control physical components
- Importance of correct LED polarity and current-limiting resistors
- How timing functions affect hardware behavior
- Improved understanding of the Arduino development workflow

## Challenges Faced
- Identifying the correct LED orientation
- Ensuring proper wiring on the breadboard
- Understanding the effect of delay timing on LED behavior

## Possible Improvements
- Add a push button to control LED blinking
- Expand the project to include multiple LEDs with different patterns

## Project Status
Completed
