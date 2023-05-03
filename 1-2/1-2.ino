#include <XInput.h>

#define BLUELED 11
#define GREENLED 12
#define WHITELED 13
#define SKIP 0

#define STARTBUTTON 8

#define BEAT 250
#define NUMBEROFROWS 8 * 41 // beats * measures

unsigned int buttonInputs[NUMBEROFROWS] = {
  // 1
  GREENLED, // 1
  SKIP,
  SKIP, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  SKIP, // 4
  SKIP,
  // 2
  BLUELED, // 1
  SKIP,
  SKIP, // 2
  SKIP,
  GREENLED, // 3
  BLUELED,
  GREENLED, // 4
  SKIP,
  // 3
  WHITELED, // 1
  SKIP,
  SKIP, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  SKIP, // 4
  SKIP,
  // 4
  GREENLED, // 1
  SKIP,
  SKIP, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  SKIP, // 4
  SKIP,
  // 5
  GREENLED, // 1
  BLUELED,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 6
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  WHITELED, // 3
  WHITELED,
  SKIP, // 4
  SKIP,
  // 7
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 8
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 9
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 10
  GREENLED, // 1
  BLUELED,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 11
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 12
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 13
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 14
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 15
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  WHITELED,
  BLUELED, // 4
  SKIP,
  // 16
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  SKIP,
  // 17
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  SKIP,
  // 18
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  SKIP,
  // 19
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  SKIP,
  // 20
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  SKIP,
  // 21
  BLUELED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  GREENLED, // 4
  SKIP,
  // 22
  WHITELED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 23
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 24
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 25
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 26
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 27
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 28
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 29
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 30
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 31
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 32
  WHITELED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 33
  WHITELED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 34
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 35
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 36
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 37
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 38
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 39
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 40
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 41
  WHITELED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
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
    digitalWrite(BLUELED, LOW);
    digitalWrite(GREENLED, LOW);
    digitalWrite(WHITELED, LOW);
    for(int i = 0; i < NUMBEROFROWS; i++) {
      pushButton(buttonInputs[i]);
    }
    digitalWrite(BLUELED, HIGH);
    digitalWrite(GREENLED, HIGH);
    digitalWrite(WHITELED, HIGH);
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