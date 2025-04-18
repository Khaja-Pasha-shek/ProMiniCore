/***
  A CRC is a simple way of checking whether data has changed or become corrupted.
  This example calculates a CRC value directly on the EEPROM values.
  The purpose of this example is to highlight how the EEPROM object can be used just like an array.
***/

#include <Arduino.h>
#include <EEPROM.h>

void setup(){
  
  //Start serial
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

  //Print length of data to run CRC on.
  Serial.print( "EEPROM length: " );
  Serial.println( EEPROM.length() );
  
  //Print the result of calling eeprom_crc()
  Serial.print( "CRC32 of EEPROM data: 0x" );
  Serial.println( eeprom_crc(), HEX );
  Serial.print( "\n\nDone!" );
}

void loop(){ /* Empty loop */ }

unsigned long eeprom_crc( void ){
  
  const unsigned long crc_table[16] = {
      0x00000000, 0x1db71064, 0x3b6e20c8, 0x26d930ac,
      0x76dc4190, 0x6b6b51f4, 0x4db26158, 0x5005713c,
      0xedb88320, 0xf00f9344, 0xd6d6a3e8, 0xcb61b38c,
      0x9b64c2b0, 0x86d3d2d4, 0xa00ae278, 0xbdbdf21c
  };  
  
  unsigned long crc = ~0L;
  
  for( unsigned int index = 0 ; index < EEPROM.length()  ; ++index ){
    crc = crc_table[( crc ^ EEPROM[index] ) & 0x0f] ^ (crc >> 4);
    crc = crc_table[( crc ^ ( EEPROM[index] >> 4 )) & 0x0f] ^ (crc >> 4);    
    crc = ~crc;
  }
  return crc;
}