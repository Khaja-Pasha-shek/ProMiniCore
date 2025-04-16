/*

This is a Console/Serial Monitor Program to check whether your UART works in both directions in Arduino Pro Mini/p/A/PB
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

/*
**************************
* Trap for young players *
**************************
*Baud Rate from Tools Menu is considered Upload Speed and should not be changed unless you're an expert.
*Serial Monitor speed can be adjusted.
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello World!");
  Serial.println("Serial communication is Alive!..");
  delay(1000);
}
