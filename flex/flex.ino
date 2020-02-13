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
  int flexvalue1,flexvalue2,flexvalue3,flexvalue4;
  flexvalue1 = analogRead(flex1);
  flexvalue2 = analogRead(flex2);
  flexvalue3 = analogRead(flex3);
  flexvalue4 = analogRead(flex4);      
    Serial.print("f1: ");
  Serial.println(flexvalue1);
  Serial.print("f2: ");
  Serial.println(flexvalue2);
  
  Serial.print("f3: ");
  Serial.println(flexvalue3);    
  Serial.print("f4: ");
  Serial.println(flexvalue4); 


   


if((flexvalue1>690) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("A"); }

else if((flexvalue1<580) && (flexvalue2<580) && (flexvalue3<580) && (flexvalue4<690))
{ Serial.write("B"); }


else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>620)&&(flexvalue3<680) && (flexvalue4>620)&&(flexvalue4<680))
{ Serial.write("C"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("D"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>620)&&(flexvalue3<680) && (flexvalue4>620)&&(flexvalue4<680))
{ Serial.write("E"); }

else if((flexvalue1>690) && (flexvalue2>480)&&(flexvalue2<550) && (flexvalue3>480)&&(flexvalue3<550) && (flexvalue4>480)&&(flexvalue4<550))
{ Serial.write("F"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>690) && (flexvalue3>480)&&(flexvalue3<550) && (flexvalue4>690))
{ Serial.write("G"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>480)&&(flexvalue2<550) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("H"); }

else if((flexvalue1>690) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>480)&&(flexvalue4<550))
{ Serial.write("I"); }

else if((flexvalue1>690) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>620)&&(flexvalue4<680))
{ Serial.write("J"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>480)&&(flexvalue2<550) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("k"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>480)&&(flexvalue2<550) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("L"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>620)&&(flexvalue3<680) && (flexvalue4>620)&&(flexvalue4<680))
{ Serial.write("M"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("N"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>620)&&(flexvalue3<680) && (flexvalue4>480)&&(flexvalue4<550))
{ Serial.write("O"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("P"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>480)&&(flexvalue4<550))
{ Serial.write("Q"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("R"); }

if((flexvalue1>690) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("S"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("T"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>480)&&(flexvalue2<550) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("U"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>620)&&(flexvalue2<680) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("V"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>480)&&(flexvalue2<550) && (flexvalue3>480)&&(flexvalue3<550) && (flexvalue4>690))
{ Serial.write("W"); }

else if((flexvalue1>620)&&(flexvalue1<680) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>690))
{ Serial.write("X"); }

else if((flexvalue1>690) && (flexvalue2>690) && (flexvalue3>690) && (flexvalue4>480)&&(flexvalue4<550))
{ Serial.write("Y"); }

else if((flexvalue1>480)&&(flexvalue1<550) && (flexvalue2>480)&&(flexvalue2<550) && (flexvalue3>690) && (flexvalue4>480)&&(flexvalue4<550))
{ Serial.write("Z"); }

/* if(flexvalue1>700 && flexvalue2>700 && flexvalue3>690 && flexvalue4>630)
  {
    Serial.write("All");
  }  
  else 
   Serial.write("ooo");
  */
  delay(1500);
} 
