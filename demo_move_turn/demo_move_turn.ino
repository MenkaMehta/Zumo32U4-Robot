//import zumo libraries
#include <Zumo32U4.h>

//declare variables
Zumo32U4LCD lcd;
Zumo32U4Motors motors;

//Question: where is the lcd screen?
void setup() {
  //clear the lcd screen
  lcd.clear();
  //print hello on line 0
  lcd.gotoXY(0,0);
  lcd.print("Hello!");
  //print Menka on line 1
  lcd.gotoXY(0,1);
  lcd.print("Menka");
}

void loop() {
  // put your main code here, to run repeatedly:
//150 rotations per minute
  //++ move forward
  //--move backward
  //-+turns left
  //+-turns right
motors.setSpeeds(200,200);
delay(5000);
motors.setSpeeds(-60,60);
delay(7000);

  // 1 means ON, 0 means OFF
  //turn all leds ON
  ledRed(1);
  ledYellow(1);
  ledGreen(1);
  //wait for 1 second
  delay(1000);
  
 
}
