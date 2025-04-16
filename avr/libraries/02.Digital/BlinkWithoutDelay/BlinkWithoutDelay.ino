/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

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

const int ledPin = LED_BUILTIN; // the number of the LED pin

int ledState = LOW; // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0; // will store last time LED was updated

const long interval = 1000; // interval at which to blink (milliseconds)

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval)
  {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
    {
      ledState = HIGH;
    }
    else
    {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
