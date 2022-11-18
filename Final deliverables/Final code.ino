#include <LiquidCrystal.h>
int gas;
int wait = 100;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
lcd.begin(16, 2);
pinMode(7,OUTPUT);
pinMode(A0,INPUT);
}
void loop() {
gas = analogRead(A0);
  if(gas>650){
digitalWrite(7,HIGH);
lcd.setCursor(0,0);
lcd.print("Gas level = ");
lcd.print(gas);
lcd.setCursor(0,1);
lcd.print("gas leak warning");
delay(wait);
}
  else {
digitalWrite(7,LOW);
lcd.setCursor(0,0);
lcd.print("Gas level = ");
lcd.print(gas);
lcd.setCursor(0,1);
lcd.print("no gas leak ");
delay(wait);
}
}  