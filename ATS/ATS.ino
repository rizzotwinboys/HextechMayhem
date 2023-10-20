// Simple example application that shows how to read four Arduino
// digital pins and map them to the USB Joystick library.
//
// Ground digital pins 9, 10, 11, and 12 to press the joystick 
// buttons 0, 1, 2, and 3.
//
// NOTE: This sketch file is for use with Arduino Leonardo and
//       Arduino Micro only.
//
// by Matthew Heironimus
// 2015-11-20
//--------------------------------------------------------------------

#include <Joystick.h>

Joystick_ Joystick;

#define ROT1CLK 12
#define ROT1DT 11

int lastStateRot1CLK;

void setup() {
  // Initialize Button Pins
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(ROT1CLK, INPUT_PULLUP);
  pinMode(ROT1DT, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);

  Serial.begin(115200);

  // Read the initial state of CLK
	lastStateRot1CLK = digitalRead(ROT1CLK);

  // Initialize Joystick Library
  Joystick.begin();
}

// Constant that maps the phyical pin to the joystick button.
const int pinToButtonMap = 9;

// Last state of the button
int lastButtonState[4] = {0,0,0,0};

void loop() {

  RotaryEncoder(ROT1CLK, ROT1DT);

  // Read pin values
  for (int index = 0; index < 5; index++)
  {
    int currentButtonState = !digitalRead(index + pinToButtonMap);
    if (currentButtonState != lastButtonState[index])
    {
      Joystick.setButton(index, currentButtonState);
      lastButtonState[index] = currentButtonState;
    }
  }
  delay(1);
}

void RotaryEncoder(int CLK, int DT) {
  String currentDir ="";
  int currentStateCLK = digitalRead(CLK);
  
  if (currentStateCLK != lastStateRot1CLK  && currentStateCLK == 1) {

		// If the DT state is different than the CLK state then
		// the encoder is rotating CCW so decrement
		if (digitalRead(DT) != currentStateCLK) {
			currentDir ="CCW";
		} else {
			// Encoder is rotating CW so increment
			currentDir ="CW";
		}

		Serial.print("Direction: ");
		Serial.println(currentDir);
	}

	// // Remember last CLK state
	lastStateRot1CLK = currentStateCLK;
}

