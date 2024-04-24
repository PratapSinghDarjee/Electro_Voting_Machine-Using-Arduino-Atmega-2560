#include<LiquidCrystal.h>
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
//initializing sw
#define sw1 0
#define sw2 1
#define sw3 2
#define sw4 3
#define sw5 4
#define sw6 5
#define sw7 6
#define sw8 7
#define sw9 8
#define sw10 9
#define sw11 10
#define sw12 11
#define sw13 12 
#define sw14 13       
//votes 
int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
int vote5=0;
int vote6=0;
int vote7=0;
int vote8=0;
int vote9=0;
int vote10=0;
int vote11=0;

void setup()
{
  pinMode(sw1, INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(sw5,INPUT);
  pinMode(sw6,INPUT);
  pinMode(sw7,INPUT);
  pinMode(sw8,INPUT);
  pinMode(sw9,INPUT);
  pinMode(sw10,INPUT);
  pinMode(sw11,INPUT);
  pinMode(sw12,INPUT);
  pinMode(sw13,INPUT);
  pinMode(sw14,INPUT);
  lcd.begin(16, 2);
  lcd.print("Voting Machine");
  lcd.setCursor(0,1);
  lcd.print("Nice Voting");
  delay(3000);
  digitalWrite(sw1, HIGH);
  digitalWrite(sw2, HIGH);
  digitalWrite(sw3, HIGH);
  digitalWrite(sw4, HIGH);
  digitalWrite(sw5, HIGH);
  digitalWrite(sw6, HIGH);
  digitalWrite(sw7, HIGH);
  digitalWrite(sw8, HIGH);
  digitalWrite(sw9, HIGH);
  digitalWrite(sw10, HIGH);
  digitalWrite(sw11, HIGH);
  digitalWrite(sw12, HIGH);
  digitalWrite(sw13, HIGH);
  digitalWrite(sw14, HIGH);
 
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("BJP");
   lcd.setCursor(4,0);
  lcd.print("INC");
  lcd.setCursor(8,0);
  lcd.print("AAP");
  delay(10000);
  lcd.clear ();
  
  lcd.setCursor(0,0);
  lcd.print("DPT");
  lcd.setCursor(4,0);
  lcd.print("PDP");
  lcd.setCursor(8,0);
  lcd.print("DNT");
  lcd.setCursor(12,0);
  lcd.print("DKT");
  delay(10000);
  lcd.clear ();
 
  
 lcd.setCursor(0,0);
  lcd.print("AAA");
   lcd.setCursor(4,0);
  lcd.print("BBB");
  lcd.setCursor(8,0);
  lcd.print("CCC");
  lcd.setCursor(12,0);
  lcd.print("DDD");
  delay(10000);
  lcd.clear ();

  
}

void loop()
{

  if(digitalRead(sw1)==0)
  {
    vote1++;
   lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
    while(digitalRead(sw1)==0);
  if(digitalRead(sw2)==0)
  {
    vote2++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
    while(digitalRead(sw2)==0);
  if(digitalRead(sw3)==0)
  {
    vote3++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
    while(digitalRead(sw3)==0);
   if(digitalRead(sw4)==0)
   {
   
      lcd.setCursor(0,0);
  lcd.print("BJP");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  lcd.setCursor(4,0);
  lcd.print("INC");
  lcd.setCursor(5,1);
  lcd.print(vote2);
  lcd.setCursor(8,0);
  lcd.print("AAP");
   lcd.setCursor(9,1);
  lcd.print(vote3);
  
  delay(10000);
  lcd.clear();
     int voteA=vote1+vote2+vote3;
     if(voteA)
     {
      if((vote1 > vote2 && vote1 > vote3))
      {
       lcd.clear();
       lcd.print("BJP Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote2 > vote1 && vote2 > vote3))
      {
       lcd.clear();
       lcd.print("INC Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote3 > vote1 && vote3 > vote2))
      {
       lcd.clear();
       lcd.print("AAP Wins");
       delay(2000);
       lcd.clear();
      }
    
     else
     {
       lcd.clear();
       lcd.print("   Tie Up Or   ");
       lcd.setCursor(0,1);
       lcd.print("   No Result   ");
       delay(1000);
       lcd.clear();
     }
     
    }      
     else 
     {
       lcd.clear();
       lcd.print("No Voting....");
       delay(1000);
       lcd.clear();
     }
     vote1=0;vote2=0;vote3=0,voteA=0;
     lcd.clear();
   }

 // next categories
   
    while(digitalRead(sw4)==0);
  if(digitalRead(sw5)==0)
  {
    vote4++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }

  while(digitalRead(sw5)==0);
  if(digitalRead(sw6)==0)
  {
    vote5++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
  while(digitalRead(sw6)==0);
  if(digitalRead(sw7)==0)
  {
    vote6++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
  while(digitalRead(sw7)==0);
  if(digitalRead(sw8)==0)
  {
    vote7++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
  while(digitalRead(sw8)==0);
   if(digitalRead(sw9)==0)
   {
   
  lcd.setCursor(0,0);
  lcd.print("DPT");
  lcd.setCursor(1,1);
  lcd.print(vote4);
  lcd.setCursor(4,0);
  lcd.print("PDP");
  lcd.setCursor(5,1);
  lcd.print(vote5);
  lcd.setCursor(8,0);
  lcd.print("DNT");
   lcd.setCursor(9,1);
  lcd.print(vote6);
  lcd.setCursor(12,0);
  lcd.print("DKT"); 
  lcd.setCursor(13,1);
  lcd.print(vote7);
  delay(10000);
  lcd.clear();

     int voteB=vote4+vote5+vote6+vote7;
     if(voteB)
     {
      if((vote4 > vote5 && vote4 > vote6 && vote4 > vote7))
      {
       lcd.clear();
       lcd.print("DPT Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote5 > vote4 && vote5 > vote6 && vote5 > vote7))
      {
       lcd.clear();
       lcd.print("PDP Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote6 > vote4 && vote6 > vote5 && vote6 > vote7))
      {
       lcd.clear();
       lcd.print("DNT Wins");
       delay(2000);
       lcd.clear();
      }
     else if((vote7 > vote4 && vote7 > vote5 && vote7 > vote6))
     {
       lcd.setCursor(0,0);
       lcd.clear();
       lcd.print("DKT Wins");
       delay(2000);
       lcd.clear();
     }
     
      
     
     else
     {
       lcd.clear();
       lcd.print("   Tie Up Or   ");
       lcd.setCursor(0,1);
       lcd.print("   No Result   ");
       delay(1000);
       lcd.clear();
     }
     
    }      
     else 
     {
       lcd.clear();
       lcd.print("No Voting....");
       delay(1000);
       lcd.clear();
     }
     vote4=0;vote5=0;vote6=0;vote7=0,voteB=0;
     lcd.clear();
   } 
   
   // last categories
    while(digitalRead(sw9)==0);
  if(digitalRead(sw10)==0)
  {
    vote8++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }

  while(digitalRead(sw10)==0);
  if(digitalRead(sw11)==0)
  {
    vote9++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
  while(digitalRead(sw11)==0);
  if(digitalRead(sw12)==0)
  {
    vote10++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
  while(digitalRead(sw12)==0);
  if(digitalRead(sw13)==0)
  {
    vote11++;
    lcd.setCursor(0,0);
  lcd.print("Thank You");
  delay (1000);
  lcd.clear(); 
  }
  while(digitalRead(sw13)==0);
   if(digitalRead(sw14)==0)
   {
   
  lcd.setCursor(0,0);
  lcd.print("AAA");
  lcd.setCursor(1,1);
  lcd.print(vote8);
  lcd.setCursor(4,0);
  lcd.print("BBB");
  lcd.setCursor(5,1);
  lcd.print(vote9);
  lcd.setCursor(8,0);
  lcd.print("CCC");
   lcd.setCursor(9,1);
  lcd.print(vote10);
  lcd.setCursor(12,0);
  lcd.print("DDD"); 
  lcd.setCursor(13,1);
  lcd.print(vote11);
  delay(10000);
  lcd.clear();

     int voteC=vote8+vote9+vote10+vote11;
     if(voteC)
     {
      if((vote8 > vote9 && vote8 > vote10 && vote8 > vote11))
      {
       lcd.clear();
       lcd.print("AAA Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote9 > vote8 && vote9 > vote10 && vote9 > vote11))
      {
       lcd.clear();
       lcd.print("BBB Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote10 > vote8 && vote10 > vote9 && vote10 > vote11))
      {
       lcd.clear();
       lcd.print("CCC Wins");
       delay(2000);
       lcd.clear();
      }
     else if((vote11 > vote8 && vote11 > vote9 && vote11 > vote10))
      {
       lcd.clear();
       lcd.print("DDD Wins");
       delay(2000);
       lcd.clear();
      }
     
     else
     {
       lcd.clear();
       lcd.print("   Tie Up Or   ");
       lcd.setCursor(0,1);
       lcd.print("   No Result   ");
       delay(1000);
       lcd.clear();
     }
     
    }      
     else 
     {
       lcd.clear();
       lcd.print("No Voting....");
       delay(1000);
       lcd.clear();
     }
     vote8=0;vote9=0;vote10=0;vote11=0,voteC=0;
     lcd.clear();
   } 
}
