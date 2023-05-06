#include <XInput.h>

#define BLUE 11
#define GREEN 12
#define WHITE 13
#define SKIP 0

#define STARTBUTTON 8

#define BEAT 250
#define NUMBEROFROWS 8 * 44 // beats * measures
#define NUMBEROFROWS2 16 * 0 // beats * measures

unsigned int buttonInputs[NUMBEROFROWS] = {
  // 1
  GREEN, // 1
  SKIP,
  BLUE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 2
  GREEN, // 1
  SKIP,
  BLUE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 3
  GREEN, // 1
  SKIP,
  BLUE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 4
  GREEN, // 1
  SKIP,
  BLUE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 5
  BLUE, // 1
  SKIP,
  GREEN, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 6
  GREEN, // 1
  BLUE,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  GREEN, // 4
  BLUE,
  // 7
  GREEN, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  BLUE, // 3
  SKIP,
  SKIP, // 4
  SKIP,
  // 8
  GREEN, // 1
  BLUE,
  SKIP, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 9
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 10
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 11
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 12
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 13
  GREEN, // 1
  BLUE,
  WHITE, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  GREEN, // 4
  BLUE,
  // 14
  WHITE, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  SKIP,
  // 15
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 16
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 17
  GREEN, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  BLUE,
  SKIP, // 4
  GREEN,
  // 18
  SKIP, // 1
  SKIP,
  BLUE, // 2
  SKIP,
  WHITE, // 3
  WHITE,
  WHITE, // 4
  SKIP,
  // 19
  GREEN, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  BLUE,
  SKIP, // 4
  GREEN,
  // 20
  SKIP, // 1
  SKIP,
  BLUE, // 2
  SKIP,
  WHITE, // 3
  WHITE,
  WHITE, // 4
  SKIP,
  // 21
  GREEN, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  BLUE,
  SKIP, // 4
  GREEN,
  // 22
  SKIP, // 1
  SKIP,
  BLUE, // 2
  SKIP,
  WHITE, // 3
  WHITE,
  WHITE, // 4
  SKIP,
  // 23
  GREEN, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  BLUE,
  SKIP, // 4
  GREEN,
  // 24
  SKIP, // 1
  SKIP,
  BLUE, // 2
  SKIP,
  WHITE, // 3
  WHITE,
  WHITE, // 4
  SKIP,
  // 25
  WHITE, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 26
  WHITE, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  BLUE,
  // 27
  GREEN, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  SKIP,
  // 28
  GREEN, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  SKIP,
  // 29
  WHITE, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 30
  WHITE, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  BLUE,
  // 31
  WHITE, // 1
  SKIP,
  BLUE, // 2
  SKIP,
  BLUE, // 3
  SKIP,
  BLUE, // 4
  SKIP,
  // 32
  WHITE, // 1
  WHITE,
  WHITE, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  GREEN, // 4
  SKIP,
  // 33
  WHITE, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 34
  GREEN, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  GREEN, // 4
  WHITE,
  // 35
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  BLUE,
  // 36
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 37
  WHITE, // 1
  WHITE,
  GREEN, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  WHITE,
  // 38
  GREEN, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  WHITE,
  GREEN, // 4
  SKIP,
  // 39
  GREEN, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  GREEN, // 4
  SKIP,
  // 40
  GREEN, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  GREEN, // 4
  SKIP,
  // 41
  BLUE, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  GREEN, // 4
  SKIP,
  // 42
  GREEN, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  GREEN, // 4
  SKIP,
  // 43
  WHITE, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  WHITE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 44
  WHITE, // 1
  BLUE,
  WHITE, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  WHITE, // 4
  BLUE,
};

unsigned int buttonInputs2[NUMBEROFROWS2] = {
  // 39
  // SKIP, // 1
  // SKIP,
  // SKIP,
  // SKIP,
  // SKIP, // 2
  // SKIP,
  // SKIP,
  // SKIP,
  // SKIP, // 3
  // SKIP,
  // SKIP,
  // SKIP,
  // SKIP, // 4
  // SKIP,
  // SKIP,
  // SKIP,
};

void setup() {
	XInput.begin();
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(STARTBUTTON, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(STARTBUTTON) == LOW) {
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(WHITE, LOW);
    for(int i = 0; i < NUMBEROFROWS; i++) {
      pushButton(buttonInputs[i], BEAT);
    }
    for(int i = 0; i < NUMBEROFROWS2; i++) {
      pushButton(buttonInputs2[i], BEAT / 2);
    }
    digitalWrite(BLUE, HIGH);
    digitalWrite(GREEN, HIGH);
    digitalWrite(WHITE, HIGH);
  }
}

void pushButton(int buttonNumber, int timedelay) {
  int buttonCode = BUTTON_A;
  int ledCode = GREEN;
  switch(buttonNumber) {
    case GREEN: // jump
      buttonCode = BUTTON_A;
      ledCode = GREEN;
      break;
    case WHITE: // fall
      buttonCode = DPAD_DOWN;
      ledCode = WHITE;
      break;
    case BLUE: // bomb
      buttonCode = BUTTON_X;
      ledCode = BLUE;
      break;
    default:
	    delay(timedelay);
      return;
      break;
  }
  XInput.release(buttonCode);
	XInput.press(buttonCode);
  digitalWrite(ledCode, HIGH);
	delay(timedelay / 2);
	XInput.release(buttonCode);
  digitalWrite(ledCode, LOW);
	delay(timedelay / 2);
}