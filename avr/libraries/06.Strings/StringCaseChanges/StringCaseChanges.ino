/*
  String Case changes

  Examples of how to change the case of a String

*/

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

  // send an intro:
  Serial.println("\n\nString case changes:");
  Serial.println();
}

void loop() {
  // toUpperCase() changes all letters to upper case:
  String stringOne = "<html><head><body>";
  Serial.println(stringOne);
  stringOne.toUpperCase();
  Serial.println(stringOne);

  // toLowerCase() changes all letters to lower case:
  String stringTwo = "</BODY></HTML>";
  Serial.println(stringTwo);
  stringTwo.toLowerCase();
  Serial.println(stringTwo);


  // do nothing while true:
  while (true)
    ;
}
