#include <XInput.h>

#define BLUELED 11
#define GREENLED 12
#define WHITELED 13
#define SKIP 0

#define STARTBUTTON 8

#define BEAT 250
#define NUMBEROFROWS 8 * 44 // beats * measures

unsigned int buttonInputs[NUMBEROFROWS] = {
  // 1
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 2
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 3
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 4
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 5
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 6
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 7
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 8
  WHITELED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 9
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 10
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 11
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 12
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  GREENLED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  GREENLED,
  // 13
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 14
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  GREENLED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  GREENLED,
  // 15
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 16
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  GREENLED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  GREENLED,
  // 17
  GREENLED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 18
  BLUELED, // 1
  SKIP,
  BLUELED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  BLUELED, // 4
  SKIP,
  // 19
  GREENLED, // 1
  SKIP,
  GREENLED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  GREENLED, // 4
  SKIP,
  // 20
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  BLUELED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 21
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  SKIP,
  // 22
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 23
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  SKIP,
  // 24
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 25
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 26
  GREENLED, // 1
  BLUELED,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 27
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 28
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 29
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 30
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  BLUELED,
  WHITELED, // 4
  BLUELED,
  // 31
  WHITELED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  GREENLED, // 4
  SKIP,
  // 32
  BLUELED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  GREENLED, // 4
  SKIP,
  // 33
  BLUELED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  GREENLED, // 4
  SKIP,
  // 34
  BLUELED, // 1
  WHITELED,
  SKIP, // 2
  WHITELED,
  SKIP, // 3
  WHITELED,
  WHITELED, // 4
  WHITELED,
  // 35
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 36
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
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
  SKIP,
  // 38
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  BLUELED,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  BLUELED,
  // 39
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 40
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 41
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 42
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 43
  GREENLED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  GREENLED, // 3
  SKIP,
  WHITELED, // 4
  SKIP,
  // 44
  WHITELED, // 1
  SKIP,
  WHITELED, // 2
  SKIP,
  WHITELED, // 3
  SKIP,
  WHITELED, // 4
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