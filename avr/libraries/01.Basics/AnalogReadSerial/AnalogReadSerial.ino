/*

This is a analog Read to Serial in Arduino Pro Mini/p/A/PB
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

#define ANALOG_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(ANALOG_PIN);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
}
