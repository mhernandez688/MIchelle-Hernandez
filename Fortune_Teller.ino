#include <mpr121.h>
#include "Adafruit_Thermal.h"
#include "SoftwareSerial.h"
#define TX_PIN 6 // Arduino transmit  YELLOW WIRE  labeled RX on printer
#define RX_PIN 5 // Arduino receive   GREEN WIRE   labeled TX on printer
SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&mySerial);     // Pass addr to printer constructor


void setup() {
  // put your setup code here, to run once:
mySerial.begin(19200);
printer.begin();
///////////////////////////////////////////////////////////
printer.feed(5);
printer.justify('C');
printer.println("1234567890123456789012345678901234567890");
printer.feed(8);
//////////////////////////////////////////////////////////
printer.sleep();
delay(3000L);
printer.wake();
printer.setDefault();
}

void loop() {
  // put your main code here, to run repeatedly:

}
