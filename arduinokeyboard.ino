#include <Keyboard.h>

#define KEY_UP_ARROW   0xDA
#define KEY_DOWN_ARROW 0xD9
#define KEY_LEFT_ARROW 0xD8
#define KEY_RIGHT_ARROW    0xD7


void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
}

void loop() {
  Keyboard.press(KEY_RIGHT_ARROW);
  delay(100);
  Keyboard.release(KEY_RIGHT_ARROW);
  delay(60000);
}
