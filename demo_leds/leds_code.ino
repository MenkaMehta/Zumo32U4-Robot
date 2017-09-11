#include <Zumo32U4.h>


Zumo32U4LCD lcd;

void setup() {
  // put your setup code here, to run once:
  //clear the led screen
  lcd.clear();

  //put "LED Example" on the display
  //Line 0 
  lcd.gotoXY(0,0);
  lcd.print(" Hi!");

  //Line 1
  lcd.gotoXY(0,1);
  lcd.print("Menka");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Turn on the red Led and turn off the others
  //1 means turn on
  //0 means turn off
  ledRed(1);
  ledYellow(0);
  ledGreen(0);

  //wait for 1 second = 1000 ms
  delay(1000);

  //turn on the yellow led, and turn off the others
  ledRed(0);
  ledYellow(1);
  ledGreen(0);

  //wait for 1 second
  delay(1000);

  
  //turn on the yellow led, and turn off the others
  ledRed(0);
  ledYellow(0);
  ledGreen(1);

    //wait for 1 second
  delay(1000);
}
