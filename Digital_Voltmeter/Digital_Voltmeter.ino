#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define VinPin A1            // ADC pin for voltage input    

int sample = 100;            // averaging sample
float RawData = 0;
float ConvertedData = 0;
float voltage = 0;
float R1 = 10000;            // Top Resistor of Voltage Divider 
float R2 = 1000;             // Top Resistor of Voltage Divider
float avgRawdata = 0;
long sum = 0;

void setup()
{
  lcd.init();                      
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("Shanns Digital");
  lcd.setCursor(3,1);
  lcd.print("Voltmeter!");
  delay(2000); 
  lcd.clear(); 
}

void loop()
{
  sum = 0;   
  for(int i = 0; i < sample; i++)
  {
    RawData = analogRead(VinPin);    
    sum = sum + RawData;            
  }

  avgRawdata = sum / sample;
  ConvertedData = avgRawdata * (5.0 / 1023.0);
  voltage = ConvertedData * ((R1 + R2) / R2);

  delay(200);
  lcd.setCursor(0,0);
  lcd.print("ADC Value: ");
  lcd.print(RawData);
  lcd.print("   ");

  lcd.setCursor(0,1);
  lcd.print("Voltage: ");
  lcd.print(voltage);
  lcd.print("V   ");
}





























