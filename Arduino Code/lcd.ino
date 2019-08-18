// Coded by Alestor Aldous/Alestor-Tech-Industries.
//You have the right to change or upgrade the code.
#include <LiquidCrystal.h>
LiquidCrystal x(8, 9, 10, 11, 12, 13);

void setup() {
  x.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  x.setCursor (5, 0);
  x.print("hello world");
  delay(1000);
   x.setCursor (5, 0);
  x.print("              ");
  delay(1000);
}
