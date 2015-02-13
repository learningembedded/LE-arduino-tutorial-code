/*
 Author: LearningEmbedded.com
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this code and associated documentation files , to use, copy, modify, merge,
 publish, distribute when you agree to the following conditions:
 Attribution — You must give appropriate credit, provide a link to the license, 
               and indicate if changes were made. You may do so in any reasonable
               manner, but not in any way that suggests the licensor endorses you 
               or your use.
 No additional restrictions — You may not apply legal terms or technological 
                               measures that legally restrict others from doing
                               anything the license permits.
*/

// http://learningembedded.com/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   // lcd initialization
int sensorValue;                         // variable to read sensor value
void setup() 
{
  lcd.begin(16, 2);                      // set up the LCD's number of columns and rows: 
  lcd.print("LearningEmbedded.com");     // Print a message to the LCD.
  delay(2000);                           // delay of 2 sec
  lcd.clear();                           // clear the screen
}
void loop()
{
  sensorValue = analogRead(A0);  // read sensor value from A0 pin
  lcd.setCursor(0, 0);           // set cursor position at 0,0
  lcd.print("Value is ");        // print a message
  lcd.setCursor(0, 1);           // set cursor position at 0,1
  lcd.print(sensorValue);        //  prints the analog value
}
