/*
  String indexOf() and lastIndexOf() functions

  Examples of how to evaluate, look for, and replace characters in a String

*/

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

  // send an intro:
  Serial.println("\n\nString indexOf() and lastIndexOf()  functions:");
  Serial.println();
}

void loop() {
  // indexOf() returns the position (i.e. index) of a particular character in a
  // String. For example, if you were parsing HTML tags, you could use it:
  String stringOne = "<HTML><HEAD><BODY>";
  int firstClosingBracket = stringOne.indexOf('>');
  Serial.println("The index of > in the string " + stringOne + " is " + firstClosingBracket);

  stringOne = "<HTML><HEAD><BODY>";
  int secondOpeningBracket = firstClosingBracket + 1;
  int secondClosingBracket = stringOne.indexOf('>', secondOpeningBracket);
  Serial.println("The index of  the second > in the string " + stringOne + " is " + secondClosingBracket);

  // you can also use indexOf() to search for Strings:
  stringOne = "<HTML><HEAD><BODY>";
  int bodyTag = stringOne.indexOf("<BODY>");
  Serial.println("The index of the body tag in the string " + stringOne + " is " + bodyTag);

  stringOne = "<UL><LI>item<LI>item<LI>item</UL>";
  int firstListItem = stringOne.indexOf("<LI>");
  int secondListItem = stringOne.indexOf("<LI>", firstListItem + 1);
  Serial.println("The index of the second list tag in the string " + stringOne + " is " + secondListItem);

  // lastIndexOf() gives you the last occurrence of a character or string:
  int lastOpeningBracket = stringOne.lastIndexOf('<');
  Serial.println("The index of the last < in the string " + stringOne + " is " + lastOpeningBracket);

  int lastListItem = stringOne.lastIndexOf("<LI>");
  Serial.println("The index of the last list tag in the string " + stringOne + " is " + lastListItem);


  // lastIndexOf() can also search for a string:
  stringOne = "<p>Lorem ipsum dolor sit amet</p><p>Ipsem</p><p>Quod</p>";
  int lastParagraph = stringOne.lastIndexOf("<p");
  int secondLastGraf = stringOne.lastIndexOf("<p", lastParagraph - 1);
  Serial.println("The index of the second to last paragraph tag " + stringOne + " is " + secondLastGraf);

  // do nothing while true:
  while (true)
    ;
}
