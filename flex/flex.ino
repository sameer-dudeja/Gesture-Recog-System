const int flex1 = A0;
const int flex2 = A1;
const int flex3 = A2;
const int flex4 = A3;

void setup() 
{ 
  Serial.begin(9600);
} 

void loop() 
{ 
  int flexValue1,flexValue2,flexValue3,flexValue4;
  flexValue1 = analogRead(flex1);
  flexValue2 = analogRead(flex2);
  flexValue3 = analogRead(flex3);
  flexValue4 = analogRead(flex4);      
/*  Serial.print("f1: ");
  Serial.println(flexValue1);
  */Serial.print("f2: ");
  Serial.println(flexValue2);
  
  Serial.print("f3: ");
  Serial.println(flexValue3);    
  Serial.print("f4: ");
  Serial.println(flexValue4); 
   
/* if(flexValue1>700 && flexValue2>700 && flexValue3>780 && flexValue4>630)
  {
    Serial.write("All");
  }  
  else 
   Serial.write("ooo");
  */
  delay(1500);
} 
