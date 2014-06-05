/*
Copyright (c) 2014 NicoHood
See the readme for credit to other people.

Joystick example
*/

// not needed for Leonardo/Micro
#include <HID.h>

// for Leonardo/Micro: make sure to activate desired USB functions in HID_Reports.h

const int pinLed = 13;
const int pinButton = 8;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT_PULLUP);

  // Starts Serial at baud 115200. end just ends the Serial
  // Make sure to end your special HIDs before, this does not clear them!
  // You need this baud for the HID library but still can use other bauds
  // without HID functions.
  // not needed for Leonardo/Micro, Serial will not be set
  HID.begin();

  // Sends a clean report to the host. This is important because
  // the 16u2 of the Uno/Mega is not turned off while programming
  // so you want to start with a clear report to avoid strange bugs.
  // its exactly the same like the end() function.
  // You can also unplug the device if anything goes wrong.
  // To prevent the 16u2 to send more reports just pull the Serial TX (pin1) low
  // or see readme for turning off HID functions.
  // If you did anything wrong (keyboard is doing weird stuff)
  // just logout (no shutdown needed).
  Joystick1.begin();
}

void loop() {
  // press a button and demonstrate Joystick actions
  if (!digitalRead(pinButton)) {
    digitalWrite(pinLed, HIGH);

    // press button 1-2 and reset
    static uint8_t count = 0;
    if (++count == 3) {
      count = 0;
      Joystick1.releaseAll();
    }
    else
      Joystick1.press(count);

    // move x/y Axis to a new position (10bit)
    Joystick1.xAxis(random(1023));
    Joystick1.yAxis(analogRead(A0));

    // functions before only set the values
    // this writes the report to the host
    Joystick1.write();

    // simple debounce
    delay(300);
    digitalWrite(pinLed, LOW);
  }
}

/*
Prototypes:

void begin(void);
void end(void);
void write(void);
void press(uint8_t b);
void release(uint8_t b);
void releaseAll(void);
void xAxis(uint16_t a);
void yAxis(uint16_t a);

*/
