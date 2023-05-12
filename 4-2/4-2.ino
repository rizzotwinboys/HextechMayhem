#include <XInput.h>

#define B 11
#define G 12
#define W 13
#define S 0

#define STARTBUTTON 8

#define BEAT 500 / 2
#define NUMBEROFROWS 8 * 43 + 1 // beats * measures
#define NUMBEROFROWS2 16 * 0 // beats * measures

unsigned int buttonInputs[NUMBEROFROWS] = {
  // 1
  G, // 1
  S,
  B, // 2
  S,
  W, // 3
  S,
  G, // 4
  S,
  // 2
  G, // 1
  B,
  W, // 2
  S,
  G, // 3
  S,
  B, // 4
  S,
  // 3
  W, // 1
  S,
  G, // 2
  S,
  G, // 3
  S,
  W, // 4
  S,
  // 4
  G, // 1
  S,
  B, // 2
  S,
  W, // 3
  S,
  G, // 4
  S,
  // 5
  G, // 1
  B,
  W, // 2
  S,
  G, // 3
  S,
  B, // 4
  S,
  // 6
  W, // 1
  S,
  G, // 2
  S,
  G, // 3
  S,
  W, // 4
  S,
  // 7
  G, // 1
  S,
  B, // 2
  S,
  W, // 3
  S,
  G, // 4
  S,
  // 8
  G, // 1
  B,
  W, // 2
  S,
  G, // 3
  S,
  B, // 4
  S,
  // 9
  W, // 1
  S,
  G, // 2
  S,
  G, // 3
  S,
  W, // 4
  S,
  // 10
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 11
  G, // 1
  B,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 12
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 13
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 14
  G, // 1
  B,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 15
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 16
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 17
  G, // 1
  B,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 18
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  W, // 4
  S,
  // 19
  G, // 1
  B,
  W, // 2
  S,
  G, // 3
  B,
  W, // 4
  S,
  // 20
  G, // 1
  B,
  W, // 2
  S,
  B, // 3
  S,
  G, // 4
  S,
  // 21
  G, // 1
  B,
  W, // 2
  S,
  G, // 3
  B,
  W, // 4
  S,
  // 22
  G, // 1
  B,
  W, // 2
  S,
  B, // 3
  S,
  G, // 4
  S,
  // 23
  G, // 1
  S,
  W, // 2
  S,
  W, // 3
  S,
  G, // 4
  S,
  // 24
  G, // 1
  S,
  W, // 2
  S,
  W, // 3
  S,
  G, // 4
  S,
  // 25
  G, // 1
  B,
  W, // 2
  B,
  G, // 3
  B,
  W, // 4
  B,
  // 26
  G, // 1
  B,
  W, // 2
  B,
  W, // 3
  W,
  W, // 4
  W,
  // 27
  G, // 1
  B,
  W, // 2
  S,
  G, // 3
  B,
  W, // 4
  S,
  // 28
  G, // 1
  S,
  B, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 29
  G, // 1
  B,
  W, // 2
  S,
  G, // 3
  B,
  W, // 4
  S,
  // 30
  G, // 1
  S,
  B, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 31
  G, // 1
  S,
  W, // 2
  S,
  W, // 3
  S,
  G, // 4
  S,
  // 32
  G, // 1
  S,
  W, // 2
  S,
  W, // 3
  S,
  G, // 4
  S,
  // 33
  G, // 1
  B,
  W, // 2
  B,
  G, // 3
  B,
  W, // 4
  B,
  // 34
  G, // 1
  B,
  W, // 2
  B,
  W, // 3
  W,
  W, // 4
  W,
  // 35
  G, // 1
  B,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 36
  G, // 1
  G,
  B, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 37
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 38
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 39
  G, // 1
  G,
  B, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 40
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 41
  G, // 1
  S,
  G, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 42
  W, // 1
  S,
  B, // 2
  S,
  W, // 3
  S,
  B, // 4
  S,
  // 43
  W, // 1
  S,
  B, // 2
  S,
  W, // 3
  S,
  W, // 4
  S,
  // 44
  W, // 1
};

unsigned int buttonInputs2[NUMBEROFROWS2] = {
  // 39
  // S, // 1
  // S,
  // S,
  // S,
  // S, // 2
  // S,
  // S,
  // S,
  // S, // 3
  // S,
  // S,
  // S,
  // S, // 4
  // S,
  // S,
  // S,
};

void setup() {
	XInput.begin();
  pinMode(B, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(W, OUTPUT);
  pinMode(STARTBUTTON, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(STARTBUTTON) == LOW) {
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    digitalWrite(W, LOW);
    for(int i = 0; i < NUMBEROFROWS; i++) {
      pushButton(buttonInputs[i], BEAT);
    }
    for(int i = 0; i < NUMBEROFROWS2; i++) {
      pushButton(buttonInputs2[i], BEAT / 2);
    }
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(W, HIGH);
  }
}

void pushButton(int buttonNumber, int timedelay) {
  int buttonCode = BUTTON_A;
  int ledCode = G;
  switch(buttonNumber) {
    case G: // jump
      buttonCode = BUTTON_A;
      ledCode = G;
      break;
    case W: // fall
      buttonCode = DPAD_DOWN;
      ledCode = W;
      break;
    case B: // bomb
      buttonCode = BUTTON_X;
      ledCode = B;
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