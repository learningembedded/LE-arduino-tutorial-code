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

int count;
int  arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67}; // values for each digit stored in an array

void setup()
{
    for( count= 0; count < 7; count ++ )
    {
     pinMode(count, OUTPUT);                                      // initializing all pins till 6 as output
    }
}
void loop()
{
  for(count= 0; count < 10; count++)
    {
      PORTD = arr[count];                                         // put the value of array to the 7 segment using index as count
      delay(300);
    }
 
} 
