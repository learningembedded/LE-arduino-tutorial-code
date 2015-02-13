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

 int in1=5,in2=4,in3=1,in4=0; //input pins of the L293D IC
 int e1=3,e2=2,i;             //enable pins of the L293D IC
 int input1,input2;           //input toggle pins use control the motor
 void setup() 
 {
  for(i=0;i<6;i++)
  {
   pinMode(i, OUTPUT);        //sets all L293D IC pins as output
  } 
    pinMode(13, INPUT);       // sets the input-1 toggle as input
    pinMode(12, INPUT);       // sets the input-2 toggle as input
 }
 void loop()
 {
  input1 = digitalRead(13);   //read the values of input-1 pin
  input2 = digitalRead(12);   //read the values of input-1 pin
  
  if(input1==1 && input2==0)
  {                       // when input1 is 1 and input 2 is low ,we move the motor forward
  digitalWrite(e1,HIGH);  //enable1 is used to switch on the input pins in1 and in2
  digitalWrite(e2,HIGH);  //enable2 is used to switch on the input pins in3 and in4
  digitalWrite(in1,HIGH); //when in1 and in2 are of different polarity then only motor 1 moves
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH); //when in3 and in4 are of different polarity then only motor 2 moves
  digitalWrite(in4,LOW);
  }
  if(input1==0 && input2==1)
  {                       // when input2 is 1 and input 1 is low ,we move the motor backwards
  digitalWrite(e1,HIGH);  //enable1 is used to switch on the input pins in1 and in2
  digitalWrite(e2,HIGH);  //enable2 is used to switch on the input pins in3 and in4
  digitalWrite(in1,LOW);  //when in1 and in2 are of different polarity then only motor 1 moves
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);  //when in3 and in4 are of different polarity then only motor 2 moves
  digitalWrite(in4,HIGH);
  }
  else
  {                       //In all other condition ,the motor shouldnt move
     digitalWrite(e1,LOW);
     digitalWrite(e2,LOW);
  }
 }
