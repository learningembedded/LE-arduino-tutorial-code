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
int ledPin[] = { 13,12,11,10 };       // an array of pin numbers to which LEDs are attached
int Count = 4,Pin;  // Count variable is for the number of pins (i.e. the length of the array)
void setup() 
{
  // the array elements are numbered from 0 to (Count - 1).
  for (Pin = 0; Pin < Count; Pin++) // use a for loop to initialize each pin as an output:
  {
    pinMode(ledPin[Pin], OUTPUT);      
  }
}

void loop() 
{
 
  for ( Pin = 0; Pin < Count; Pin++) // loop from the lowest pin to the highest:
  { 
    digitalWrite(ledPin[Pin], HIGH);   // turn the led on
    delay(200);                  
    digitalWrite(ledPin[Pin], LOW);   // turn the led off

  }

  
  for (Pin = Count - 1; Pin >= 0; Pin--) // loop from the highest pin to the lowest
  { 
    digitalWrite(ledPin[Pin], HIGH);// turn the led on
    delay(200);
    digitalWrite(ledPin[Pin], LOW);  // turn the led off
  }
}
