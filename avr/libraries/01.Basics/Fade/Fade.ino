/*

This is a Fade LED Project code for Arduino Pro Mini/p/A/PB
Feel free to modify the code to your needs.

Author: Sk. Khaja Pasha
Github: https://github.com/Khaja-Pasha-shek/pro-mini-core

Guide:
Tools->Pro Mini Core -> Atmega328
Baud Rate : 57600(Default)
Bootloader: UART 0 -> Atmega 328 P/A
            UART 1 -> Atmega 328PB
Variant: Atmega 328P/A/PB
Clock: 16M (Default)

!!! Happy Hacking !!!

*/

#define LED = LED_BUILTIN    // the PWM pin the Builtin-LED is attached to

int brightness = 0; // how bright the LED is
int fadeAmount = 5; // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()
{
  // declare pin 9 to be an output:
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()
{
  // set the brightness of pin 9:
  analogWrite(LED, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255)
  {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
