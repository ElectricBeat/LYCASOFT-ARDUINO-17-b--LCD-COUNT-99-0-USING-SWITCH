#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int count=99;
const int SW=8;

int val=0;
int once=0;

void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("SRIELECTRONIC & EMBEDDED SOIUTION");
  lcd.setCursor(0,1);
  lcd.print("Count:");
  
  pinMode(SW,INPUT);
}
void loop()
{
  val=digitalRead(SW);
  delay(120);
  
  if(val==LOW)
  {
    if(once==0)
    {
      lcd.setCursor(6,1); 
      lcd.print(count);
      count--;
      if(count<0)
      {
        count=99;
      }
      once=1;
    }
  }
  else
  {
    once=0;
  }  
}
