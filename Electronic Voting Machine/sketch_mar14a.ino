// Header files for lcd
#include<LiquidCrystal.h>
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);

//initializing led and buzzer
int led=6;

//initializing sw
#define sw1 0
#define sw2 1
#define sw3 2
#define sw4 3
#define sw5 4
#define sw6 5
#define sw7 14
#define sw8 15
#define sw9 16
#define sw10 17
#define sw11 18
#define sw12 19
#define sw13 22 
#define sw14 23 
#define sw15 24 
#define sw16 25 
#define sw17 26 
#define sw18 27 
#define sw19 28 
#define sw20 29 
#define sw21 30 
#define sw22 31 
#define sw23 32
#define sw24 33
#define sw25 34
      
//initializing votes
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
int vote12=0;
int vote13=0;
int vote14=0;
int vote15=0;
int vote16=0;
int vote17=0;
int vote18=0;
int vote19=0;
int vote20=0;
int vote21=0;
int vote22=0;

void setup()
{
  //defining the modes of led
  pinMode(led,OUTPUT);
  
  //defining the modes of sw
  pinMode(sw1,INPUT);
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
  pinMode(sw15,INPUT);
  pinMode(sw16,INPUT);
  pinMode(sw17,INPUT);
  pinMode(sw18,INPUT);
  pinMode(sw19,INPUT);
  pinMode(sw20,INPUT);
  pinMode(sw21,INPUT);
  pinMode(sw22,INPUT);
  pinMode(sw23,INPUT);
  pinMode(sw24,INPUT);
  pinMode(sw25,INPUT);
        
  //defining states of sw
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
  digitalWrite(sw15, HIGH);
  digitalWrite(sw16, HIGH);
  digitalWrite(sw17, HIGH);
  digitalWrite(sw18, HIGH);
  digitalWrite(sw19, HIGH);
  digitalWrite(sw20, HIGH);
  digitalWrite(sw21, HIGH);
  digitalWrite(sw22, HIGH);
  digitalWrite(sw23, HIGH);
  digitalWrite(sw24, HIGH);
  digitalWrite(sw25, HIGH);
                          
                          
//displaying voting machine JNEC,ECE
  lcd.begin(16, 2);
  lcd.print("Voting Machine");
  lcd.setCursor(0,1);
  lcd.print("By JNEC, ECE");
  delay(3000);
  lcd.clear();

  //displaying lists of frist category
  lcd.setCursor(0,0);
  lcd.print("Category 1 list");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("AAA");
  lcd.setCursor(4,1);
  lcd.print("BBB");
  lcd.setCursor(8,1);
  lcd.print("CCC");
  lcd.setCursor(12,1);
  lcd.print("DDD");
  delay(1000);
  lcd.clear ();
  
  lcd.setCursor(0,0);
  lcd.print("Category 1 list");
  lcd.setCursor(0,1);
  lcd.print("EEE");
  delay(1000);
  lcd.clear ();
  
  //displaying lists of second category
  lcd.setCursor(0,0);
  lcd.print("Category 2 list");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("AAA");
  lcd.setCursor(4,1);
  lcd.print("BBB");
  lcd.setCursor(8,1);
  lcd.print("CCC");
  lcd.setCursor(12,1);
  lcd.print("DDD");
  delay(1000);
  lcd.clear ();
  
  lcd.setCursor(0,0);
  lcd.print("Category 2 list");
  lcd.setCursor(0,1);
  lcd.print("EEE");
  delay(1000);
  lcd.clear ();
 
  //displaying lists of third category 
  lcd.setCursor(0,0);
  lcd.print("Category 3 list");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("AAA");
  lcd.setCursor(4,1);
  lcd.print("BBB");
  lcd.setCursor(8,1);
  lcd.print("CCC");
  lcd.setCursor(12,1);
  lcd.print("DDD");
  delay(1000);
  lcd.clear ();
  
  lcd.setCursor(0,0);
  lcd.print("Category 3 list");
  lcd.setCursor(0,1);
  lcd.print("EEE");
  lcd.setCursor(4,1);
  lcd.print("FFF");
  lcd.setCursor(8,1);
  lcd.print("GGG");
  lcd.setCursor(12,1);
  lcd.print("HHH");
  delay(1000);
  lcd.clear ();
  
  lcd.setCursor(0,0);
  lcd.print("Category 3 list");
  lcd.setCursor(0,1);
  lcd.print("III");
  lcd.setCursor(4,1);
  lcd.print("JJJ");
  lcd.setCursor(8,1);
  lcd.print("KKK");
  lcd.setCursor(12,1);
  lcd.print("LLL");
  delay(1000);
  lcd.clear ();
  
  lcd.setCursor(0,0);
  lcd.print("Category 3 list");
  lcd.setCursor(0,1);
  lcd.print("MMM");
  lcd.setCursor(4,1);
  lcd.print("NNN");
  lcd.setCursor(8,1);
  lcd.print("OOO");
  delay(1000);
  lcd.clear ();
}

void loop()
{
//voting process for first category
  if(digitalRead(sw1)=0)
  {
  vote1++;
  lcd.setCursor(0,0);
  lcd.print("Thank You");
  lcd.setCursor(0,1);
  lcd.print("Vote noted");
  digitalWrite(6,HIGH);
  delay (1000);
  digitalWrite(6,LOW);
  
  lcd.clear(); 
  }
    
  while(digitalRead(sw1)=0);
  if(digitalRead(sw2)=0)
  {
  vote2++;
  lcd.setCursor(0,0);
  lcd.print("Thank You");
  lcd.setCursor(0,1);
  lcd.print("Vote noted");
  digitalWrite(6,HIGH);
  delay (1000);
  digitalWrite(6,LOW);
  lcd.clear(); 
  }
    
  while(digitalRead(sw2)=0);
  if(digitalRead(sw3)=0)
  {
  vote3++;
  lcd.setCursor(0,0);
  lcd.print("Thank You");
  lcd.setCursor(0,1);
  lcd.print("Vote noted");
  digitalWrite(6,HIGH);
  delay (1000);
  digitalWrite(6,LOW);
  lcd.clear(); 
  }

  while(digitalRead(sw3)=0);
  if(digitalRead(sw4)=0)
  {
  vote4++;
  lcd.setCursor(0,0);
  lcd.print("Thank You");
  lcd.setCursor(0,1);
  lcd.print("Vote noted");
  digitalWrite(6,HIGH);
  delay (1000);
  digitalWrite(6,LOW);
  lcd.clear(); 
  }

  while(digitalRead(sw4)=0);
  if(digitalRead(sw5)=0)
  {
  vote5++;
  lcd.setCursor(0,0);
  lcd.print("Thank You");
  lcd.setCursor(0,1);
  lcd.print("Vote noted");
  digitalWrite(6,HIGH);
  delay (1000);
  digitalWrite(6,LOW);
  lcd.clear(); 
  }
  
  //displaying result of first category
  while(digitalRead(sw5)=0);
  if(digitalRead(sw6)=0)
  {
   
  lcd.setCursor(0,0);
  lcd.print("AAA");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  lcd.setCursor(4,0);
  lcd.print("BBB");
  lcd.setCursor(5,1);
  lcd.print(vote2);
  lcd.setCursor(8,0);
  lcd.print("CCC");
  lcd.setCursor(9,1);
  lcd.print(vote3);
  lcd.setCursor(12,0);
  lcd.print("DDD");
  lcd.setCursor(13,1);
  lcd.print(vote4);
  delay(2000);
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("EEE");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  delay(2000);
  lcd.clear();
  
  
  //comparing votes for first category
    int voteA=vote1+vote2+vote3+vote4+vote5;
    if(voteA)
    {
    if((vote1 > vote2 && vote1 > vote3 && vote1 > vote4 && vote1 > vote5))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("AAA Wins");
    delay(2000);
    lcd.clear();
    }
    else if((vote2 > vote1 && vote2 > vote3 && vote2 > vote4 && vote2 > vote5))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("BBB Wins");
    delay(2000);
    lcd.clear();
    }
    else if((vote3 > vote1 && vote3 > vote2 && vote3 > vote4 && vote3> vote5))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("CCC Wins");
    delay(2000);
    lcd.clear();
    }

    else if((vote4 > vote1 && vote4 > vote2 && vote4 > vote3 && vote4 > vote5))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("DDD Wins");
    delay(2000);
    lcd.clear();
    }

    else if((vote5 > vote1 && vote5 > vote2 && vote5 > vote3 && vote5 > vote4))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("EEE Wins");
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
    vote1=0;vote2=0;vote3=0;vote4=0;vote5=0,voteA=0;
    lcd.clear();
    }

 // voting process for second category
    while(digitalRead(sw6)=0);
    if(digitalRead(sw7)=0)
    {
    vote6++;
    lcd.setCursor(0,0);
    lcd.print("Thank You");
    lcd.setCursor(0,1);
    lcd.print("Vote noted");
    digitalWrite(6,HIGH);
    delay (1000);
    digitalWrite(6,LOW);
    lcd.clear(); 
    }

    while(digitalRead(sw7)=0);
    if(digitalRead(sw8)=0)
    {
    vote7++;
    lcd.setCursor(0,0);
    lcd.print("Thank You");
    lcd.setCursor(0,1);
    lcd.print("Vote noted");
    digitalWrite(6,HIGH);
    delay (1000);
    digitalWrite(6,LOW);
    lcd.clear(); 
    }
    while(digitalRead(sw8)=0);
    if(digitalRead(sw9)=0)
    {
    vote8++;
    lcd.setCursor(0,0);
    lcd.print("Thank You");
    lcd.setCursor(0,1);
    lcd.print("Vote noted");
    digitalWrite(6,HIGH);
    delay (1000);
    digitalWrite(6,LOW);
    lcd.clear(); 
    }
    while(digitalRead(sw9)=0);
    if(digitalRead(sw10)=0)
    {
    vote9++;
    lcd.setCursor(0,0);
    lcd.print("Thank You");
    lcd.setCursor(0,1);
    lcd.print("Vote noted");
    digitalWrite(6,HIGH);
    delay (1000);
    digitalWrite(6,LOW);
    lcd.clear(); 
    }

    while(digitalRead(sw10)=0);
    if(digitalRead(sw11)=0)
    {
    vote10++;
    lcd.setCursor(0,0);
    lcd.print("Thank You");
    lcd.setCursor(0,1);
    lcd.print("Vote noted");
    digitalWrite(6,HIGH);
    delay (1000);
    digitalWrite(6,LOW);
    lcd.clear(); 
    }
  
  
    //displaying result for second category
    while(digitalRead(sw11)=0);
    if(digitalRead(sw12)=0)
    {
   
    lcd.setCursor(0,0);
    lcd.print("AAA");
    lcd.setCursor(1,1);
    lcd.print(vote6);
    lcd.setCursor(4,0);
    lcd.print("BBB");
    lcd.setCursor(5,1);
    lcd.print(vote7);
    lcd.setCursor(8,0);
    lcd.print("CCC");
    lcd.setCursor(9,1);
    lcd.print(vote8);
    lcd.setCursor(12,0);
    lcd.print("DDD"); 
    lcd.setCursor(13,1);
    lcd.print(vote9);
    delay(3000);
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("EEE");
    lcd.setCursor(1,1);
    lcd.print(vote10);
    delay(3000);
    lcd.clear();
  
    // comparing votes for second category
    int voteB=vote6+vote7+vote8+vote9+vote10;
    if(voteB)
    {
    if((vote6 > vote7 && vote6 > vote8 && vote6 > vote9 && vote6 > vote10))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("AAA Wins");
    delay(2000);
    lcd.clear();
    }
    if((vote7 > vote6 && vote7 > vote8 && vote7 > vote9 && vote7 > vote10))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("BBB Wins");
    delay(2000);
    lcd.clear();
    }
   if((vote8 > vote6 && vote8 > vote7 && vote8 > vote9 && vote8 > vote10))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("CCC Wins");
    delay(2000);
    lcd.clear();
    }
    if((vote9 > vote6 && vote9 > vote7 && vote9 > vote8 && vote9 > vote10))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("EEE Wins");
    delay(2000);
    lcd.clear();
    }
    if((vote10 > vote6 && vote10 > vote7 && vote10 > vote8 && vote10 > vote9))
    {
    lcd.clear();
    lcd.print("Calculating....");
    delay(2000);
    lcd.clear();
    lcd.print("FFF Wins");
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
    vote6=0;vote7=0;vote8=0;vote9=0;vote11=0,voteB=0;
    lcd.clear();
    } 
   
    // voting process for third category
    while(digitalRead(sw12)=0);
    if(digitalRead(sw13)=0)
    {
    vote11++;
    lcd.setCursor(0,0);
    lcd.print("Thank You");
    lcd.setCursor(0,1);
    lcd.print("Vote noted");
    digitalWrite(6,HIGH);
    delay (1000);
    digitalWrite(6,LOW);
    lcd.clear(); 
    }

     while(digitalRead(sw13)=0);
     if(digitalRead(sw14)=0)
     {
     vote12++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw14)=0);
     if(digitalRead(sw15)=0)
     {
     vote13++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw15)=0);
     if(digitalRead(sw16)=0)
     {
     vote14++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw16)=0);
     if(digitalRead(sw17)=0)
     {
     vote15++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw17)=0);
     if(digitalRead(sw18)=0)
     {
     vote16++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw18)=0);
     if(digitalRead(sw19)=0)
     {
     vote17++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw19)=0);
     if(digitalRead(sw20)=0)
     {
     vote18++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw20)=0);
     if(digitalRead(sw21)=0)
     {
     vote19++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw21)=0);
     if(digitalRead(sw22)=0)
     {
     vote20++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw22)=0);
     if(digitalRead(sw23)=0)
     {
     vote21++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     while(digitalRead(sw23)=0);
     if(digitalRead(sw24)=0)
     {
     vote22++;
     lcd.setCursor(0,0);
     lcd.print("Thank You");
     lcd.setCursor(0,1);
     lcd.print("Vote noted");
     digitalWrite(6,HIGH);
     delay (1000);
     digitalWrite(6,LOW);
     lcd.clear(); 
     }
     //displaying result for third category
     while(digitalRead(sw24)=0);
     if(digitalRead(sw25)=0)
     {
     lcd.setCursor(0,0);
     lcd.print("AAA");
     lcd.setCursor(1,1);
     lcd.print(vote11);
     lcd.setCursor(4,0);
     lcd.print("BBB");
     lcd.setCursor(5,1);
     lcd.print(vote12);
     lcd.setCursor(8,0);
     lcd.print("CCC");
     lcd.setCursor(9,1);
     lcd.print(vote13);
     lcd.setCursor(12,0);
     lcd.print("DDD"); 
     lcd.setCursor(13,1);
     lcd.print(vote14);
     delay(2000);
     lcd.clear();

     lcd.setCursor(0,0);
     lcd.print("EEE");
     lcd.setCursor(1,1);
     lcd.print(vote15);
     lcd.setCursor(4,0);
     lcd.print("FFF");
     lcd.setCursor(5,1);
     lcd.print(vote16);
     lcd.setCursor(8,0);
     lcd.print("GGG");
     lcd.setCursor(9,1);
     lcd.print(vote17);
     lcd.setCursor(12,0);
     lcd.print("HHH"); 
     lcd.setCursor(13,1);
     lcd.print(vote18);
     delay(2000);
     lcd.clear();

     lcd.setCursor(0,0);
     lcd.print("III");
     lcd.setCursor(1,1);
     lcd.print(vote19);
     lcd.setCursor(4,0);
     lcd.print("JJJ");
     lcd.setCursor(5,1);
     lcd.print(vote20);
     lcd.setCursor(8,0);
     lcd.print("KKK");
     lcd.setCursor(9,1);
     lcd.print(vote21);
     lcd.setCursor(12,0);
     lcd.print("LLL"); 
     lcd.setCursor(13,1);
     lcd.print(vote22);
     delay(2000);
     lcd.clear();



     //comparing votes for third category
     int voteC=vote11+vote12+vote13+vote14+vote15+vote16+vote17+vote18+vote19+vote20+vote21+vote22;
     if(voteC)
     {
     if((vote11 > vote12 && vote11 > vote13 && vote11 > vote14 && vote11 > vote15 && vote11 > vote16 && vote11 > vote17 && vote11 > vote18 && vote11 > vote19 && vote11 > vote20 && vote11 > vote21 && vote11 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("AAA Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote12 > vote11 && vote12 > vote13 && vote12 > vote14 && vote12 > vote15 && vote12 > vote16 && vote12 > vote17 && vote12 > vote18 && vote12 > vote19 && vote12 > vote20 && vote12 > vote21 && vote12 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("BBB Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote13 > vote11 && vote13 > vote12 && vote13 > vote14 && vote13 > vote15 && vote13 > vote16 && vote13 > vote17 && vote13 > vote18 && vote13 > vote19 && vote13 > vote20 && vote13 > vote21 && vote13 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("CCC Wins");
     delay(2000);
     lcd.clear();
     }
    else if((vote14 > vote11 && vote14 > vote12 && vote14 > vote13 && vote14 > vote15 && vote14 > vote16 && vote14 > vote17 && vote14 > vote18 && vote14 > vote19 && vote14 > vote20 && vote14 > vote21 && vote14 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("DDD Wins");
     delay(2000);
     lcd.clear();
     }
      else if((vote15 > vote11 && vote15 > vote12 && vote15 > vote13 && vote15 > vote14 && vote15 > vote16 && vote15 > vote17 && vote15 > vote18 && vote15 > vote19 && vote15 > vote20 && vote15 > vote21 && vote15 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("EEE Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote16 > vote11 && vote16 > vote12 && vote16 > vote13 && vote16 > vote14 && vote16 > vote15 && vote16 > vote17 && vote16 > vote18 && vote16 > vote19 && vote16 > vote20 && vote16 > vote21 && vote16 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("FFF Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote17 > vote11 && vote17 > vote12 && vote17 > vote13 && vote17 > vote14 && vote17 > vote15 && vote17 > vote16 && vote16 > vote18 && vote17 > vote19 && vote17 > vote20 && vote17 > vote21 && vote17 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("GGG Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote18 > vote11 && vote18 > vote12 && vote18 > vote13 && vote18 > vote14 && vote18 > vote15 && vote18 > vote16 && vote18 > vote17 && vote18 > vote19 && vote18 > vote20 && vote18 > vote21 && vote18 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("HHH Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote19 > vote11 && vote19 > vote12 && vote19 > vote13 && vote19 > vote14 && vote19 > vote15 && vote19 > vote16 && vote19 > vote17 && vote19 > vote18 && vote19 > vote20 && vote19 > vote21 && vote19 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("III Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote20 > vote11 && vote20 > vote12 && vote20 > vote13 && vote20 > vote14 && vote20 > vote15 && vote20 > vote16 && vote20 > vote17 && vote20 > vote18 && vote20 > vote19 && vote20 > vote21 && vote20 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("JJJ Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote21 > vote11 && vote21 > vote12 && vote21 > vote13 && vote21 > vote14 && vote21 > vote15 && vote21 > vote16 && vote21 > vote17 && vote21 > vote18 && vote21 > vote19 && vote21 > vote20 && vote21 >vote22))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("KKK Wins");
     delay(2000);
     lcd.clear();
     }
     else if((vote22 > vote11 && vote22 > vote12 && vote22 > vote13 && vote22 > vote14 && vote22 > vote15 && vote22 > vote16 && vote22 > vote17 && vote22 > vote18 && vote22 > vote19 && vote22 > vote20 && vote22 >vote21))
     {
     lcd.clear();
     lcd.print("Calculating....");
     delay(2000);
     lcd.clear();
     lcd.print("LLL Wins");
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
     vote11=0;vote12=0;vote13=0;vote14=0;vote15=0;vote16=0;vote17=0;vote18=0;vote19=0;vote20=0;vote21=0;vote22=0,voteC=0;
     lcd.clear();
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("congratulation!!");
     lcd.setCursor(0,1);
     lcd.print("to the WINNERS");
     delay(3000);
     lcd.clear();
     } 
    
     
}
 



