#include <XInput.h>

#define BLUE 11
#define GREEN 12
#define WHITE 13
#define SKIP 0

#define STARTBUTTON 8

#define BEAT 250
#define BEAT2 125
#define NUMBEROFROWS 8 * 38 // beats * measures
#define NUMBEROFROWS2 16 * 4 // beats * measures

unsigned int buttonInputs[NUMBEROFROWS] = {
  // 1
  GREEN, // 1
  SKIP,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  GREEN,
  // 2
  BLUE, // 1
  SKIP,
  WHITE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 3
  GREEN, // 1
  SKIP,
  WHITE, // 2
  GREEN,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  GREEN,
  // 4
  BLUE, // 1
  SKIP,
  WHITE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 5
  GREEN, // 1
  BLUE,
  WHITE, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 6
  GREEN, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 7
  GREEN, // 1
  BLUE,
  WHITE, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 8
  GREEN, // 1
  WHITE,
  WHITE, // 2
  WHITE,
  WHITE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 9
  GREEN, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 10
  BLUE, // 1
  GREEN,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 11
  SKIP, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 12
  BLUE, // 1
  GREEN,
  WHITE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 13
  GREEN, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 14
  GREEN, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 15
  GREEN, // 1
  BLUE,
  WHITE, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 16
  GREEN, // 1
  WHITE,
  WHITE, // 2
  WHITE,
  WHITE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 17
  GREEN, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  SKIP,
  // 18
  BLUE, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  BLUE,
  // 19
  GREEN, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  SKIP,
  // 20
  BLUE, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  BLUE,
  // 21
  GREEN, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  SKIP,
  // 22
  BLUE, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  BLUE,
  // 23
  GREEN, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  BLUE,
  WHITE, // 4
  SKIP,
  // 24
  BLUE, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  WHITE, // 3
  BLUE,
  WHITE, // 4
  BLUE,
  // 25
  WHITE, // 1
  SKIP,
  SKIP, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  SKIP, // 4
  GREEN,
  // 26
  WHITE, // 1
  SKIP,
  SKIP, // 2
  SKIP,
  SKIP, // 3
  SKIP,
  SKIP, // 4
  GREEN,
  // 27
  GREEN, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  BLUE, // 3
  SKIP,
  SKIP, // 4
  SKIP,
  // 28
  GREEN, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  BLUE, // 3
  SKIP,
  SKIP, // 4
  SKIP,
  // 29
  GREEN, // 1
  SKIP,
  WHITE, // 2
  SKIP,
  BLUE, // 3
  SKIP,
  SKIP, // 4
  SKIP,
  // 30
  GREEN, // 1
  SKIP,
  GREEN, // 2
  SKIP,
  WHITE, // 3
  SKIP,
  BLUE, // 4
  SKIP,
  // 31
  GREEN, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 32
  BLUE, // 1
  GREEN,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 33
  SKIP, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 34
  BLUE, // 1
  GREEN,
  WHITE, // 2
  GREEN,
  BLUE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 35
  GREEN, // 1
  BLUE,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 36
  GREEN, // 1
  SKIP,
  WHITE, // 2
  BLUE,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 37
  GREEN, // 1
  BLUE,
  WHITE, // 2
  SKIP,
  GREEN, // 3
  SKIP,
  WHITE, // 4
  SKIP,
  // 38
  GREEN, // 1
  BLUE,
  WHITE, // 2
  GREEN,
  WHITE, // 3
  SKIP,
  WHITE, // 4
  SKIP,
};

unsigned int buttonInputs2[NUMBEROFROWS2] = {
  // 39
  GREEN, // 1
  SKIP,
  BLUE,
  SKIP,
  SKIP, // 2
  GREEN,
  SKIP,
  SKIP,
  WHITE, // 3
  SKIP,
  SKIP,
  SKIP,
  WHITE, // 4
  SKIP,
  SKIP,
  SKIP,
  // 40
  GREEN, // 1
  SKIP,
  BLUE,
  SKIP,
  SKIP, // 2
  GREEN,
  SKIP,
  SKIP,
  WHITE, // 3
  SKIP,
  SKIP,
  SKIP,
  WHITE, // 4
  SKIP,
  SKIP,
  SKIP,
  // 41
  GREEN, // 1
  SKIP,
  BLUE,
  SKIP,
  SKIP, // 2
  GREEN,
  SKIP,
  SKIP,
  WHITE, // 3
  SKIP,
  SKIP,
  SKIP,
  WHITE, // 4
  SKIP,
  SKIP,
  SKIP,
  // 42
  GREEN, // 1
  SKIP,
  WHITE,
  SKIP,
  WHITE, // 2
  SKIP,
  WHITE,
  SKIP,
  WHITE, // 3
  SKIP,
  BLUE,
  SKIP,
  WHITE, // 4
  SKIP,
  SKIP,
  SKIP,
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
      pushButton(buttonInputs2[i], BEAT2);
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