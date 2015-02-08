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

// http://learningembedded.com / 

#include <LiquidCrystal.h>                //header file for lcd crystal library
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);      // initialize the library with the numbers of the interface pins
void setup() 
{
  
  lcd.begin(16, 2);                       //initialize the interface of the screen
  
  lcd.print("LearningEmbedded.com");      // Print a message to the LCD.
  delay(1000);                            //delay of 1 sec
}

void loop() 
{
 
  lcd.scrollDisplayRight();               //scroll  the cursor to the right
  delay(150);                             // delay of 150 
}
