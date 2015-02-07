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

int count,i,j,k,l;
int  arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67}; # values for each digit stored in an array

void setup()
{
    for( count= 0; count < 12; count ++ )
    {
     pinMode(count, OUTPUT);                                      # initializing all pins till 11 as output
    }
     digitalWrite(11, HIGH);  # Switch off  7 segments connected to this pin as high is off and low is on
     digitalWrite(10, HIGH);  # Switch off  7 segments connected to this pin as high is off and low is on
     digitalWrite(9, HIGH);   # Switch off  7 segments connected to this pin as high is off and low is on
     digitalWrite(8, HIGH);   # Switch off  7 segments connected to this pin as high is off and low is on
        
}
void loop()
{
  for(i= 0; i < 10; i++)
  {
    for(j=0;j < 10; j++)
    {
      for(k=0;k<10;k++)
      {
        for(l=0;l<10;l++)
        {
         digitalWrite(11, HIGH);
         digitalWrite(10, HIGH);
         digitalWrite(9, HIGH);
         digitalWrite(8, LOW);                     # switch on segment 4
         PORTD = arr[i];                           # put the value of array to the 7 segment using index as i
          delay(20);
         digitalWrite(11, HIGH);
         digitalWrite(10, HIGH);
         digitalWrite(8, HIGH);
         digitalWrite(9, LOW);                    # switch on segment 3
         PORTD = arr[j];                          # put the value of array to the 7 segment using index as j
          delay(20);
         digitalWrite(11, HIGH); 
         digitalWrite(8, HIGH);
         digitalWrite(9, HIGH);
         digitalWrite(10, LOW);                   # switch on segment 2
         PORTD = arr[k];                          # put the value of array to the 7 segment using index as k
          delay(20);
         digitalWrite(8, HIGH);
         digitalWrite(10, HIGH);
         digitalWrite(9, HIGH);
         digitalWrite(11, LOW);                   # switch on segment 1
         PORTD = arr[l];                          # put the value of array to the 7 segment using index as l
          delay(20);
        }
      }
    }
  } } 
 
 
 
 
 
 
 
