#include <XInput.h>

#define BLUELED 11
#define GREENLED 12
#define WHITELED 13
#define SKIP 0

#define STARTBUTTON 8

#define BEAT 250
#define NUMBEROFROWS 8 * 11 // beats * measures

unsigned int buttonInputs[NUMBEROFROWS] = { 
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  BLUELED, // 4
  SKIP
  , 
  SKIP, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP
  ,
  GREENLED, // 1
  SKIP,
  SKIP, // 2
  GREENLED,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP
  ,
  GREENLED, // 1
  SKIP,
  SKIP, // 2
  GREENLED,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP
  ,
  GREENLED, // 1
  SKIP,
  SKIP, // 2
  GREENLED,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP
};

void setup() {
	XInput.begin();
  pinMode(BLUELED, OUTPUT);
  pinMode(GREENLED, OUTPUT);
  pinMode(WHITELED, OUTPUT);
  pinMode(STARTBUTTON, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(STARTBUTTON) == LOW) {
    for(int i = 0; i < NUMBEROFROWS; i++) {
      pushButton(buttonInputs[i]);
    }
  }
}

void pushButton(int buttonNumber) {
  int buttonCode = BUTTON_A;
  int ledCode = GREENLED;
  switch(buttonNumber) {
    case GREENLED: // jump
      buttonCode = BUTTON_A;
      ledCode = GREENLED;
      break;
    case WHITELED: // fall
      buttonCode = DPAD_DOWN;
      ledCode = WHITELED;
      break;
    case BLUELED: // bomb
      buttonCode = BUTTON_X;
      ledCode = BLUELED;
      break;
    default:
	    delay(BEAT);
      return;
      break;
  }
  XInput.release(buttonCode);
	XInput.press(buttonCode);
  digitalWrite(ledCode, HIGH);
	delay(BEAT / 2);
	XInput.release(buttonCode);
  digitalWrite(ledCode, LOW);
	delay(BEAT / 2);
}