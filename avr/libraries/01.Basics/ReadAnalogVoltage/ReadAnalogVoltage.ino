
/*

This is a ReadAnalogVoltage Project code for Arduino Pro Mini/p/A/PB

 Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
 Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
 Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

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

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // read the input on analog pin 0:
  int sensorValue = analogRead(ANALOG_PIN);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
}
