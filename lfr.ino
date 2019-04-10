int ena =3;
int in1=37;
int in2=35;
int enb =4;
int in3=31;
int in4=33;
int sr=10;
int sl=8;
int s1=sl;
int s2=sr;
int speed1=45+3;
int speed2=54+3;
int sm=12;
int sensor=11;
int ch1=1;
char ch2=0;

void setup() {
  // put your setup code here, to run once:
 pinMode(ena,OUTPUT);
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);
 pinMode(s1,INPUT);
  pinMode(enb,OUTPUT);
 pinMode(in3,OUTPUT);
 pinMode(in4,OUTPUT);
 pinMode(s2,INPUT);


}
//BLACK is LOW
void loop()
{

    if(digitalRead(sl)==ch1 && digitalRead(sr)==ch1 && digitalRead(sm)==ch1 && digitalRead(sensor)==ch1)
        left1(); // Case 1
        
    else if(digitalRead(sl)==ch2 && digitalRead(sr)==ch1 && digitalRead(sm)==HIGH && digitalRead(sensor)==HIGH)
        left();
        
    else if(digitalRead(sl)==HIGH && digitalRead(sr)==LOW && digitalRead(sm)==HIGH && digitalRead(sensor)==HIGH)
        right(); // Case 3
    else if(digitalRead(sl)==LOW && digitalRead(sr)==LOW && digitalRead(sm)==LOW && digitalRead(sensor)==LOW)
       Pright();
    else if(digitalRead(sl)==LOW && digitalRead(sr)==LOW& digitalRead(sm)==LOW && digitalRead(sensor)==HIGH)
         Pright();
    else if(digitalRead(sl)==LOW && digitalRead(sr)==LOW && digitalRead(sm)==HIGH && digitalRead(sensor)==LOW)
        Pleft();
    else if(digitalRead(sl)==LOW && digitalRead(sr)==HIGH && digitalRead(sm)==HIGH && digitalRead(sensor)==LOW)
        Pleft();
    else if(digitalRead(sl)==HIGH && digitalRead(sr)==LOW && digitalRead(sm)==LOW && digitalRead(sensor)==HIGH)
        Pright();
    else if(digitalRead(sl)==HIGH && digitalRead(sr)==HIGH && digitalRead(sm)==HIGH && digitalRead(sensor)==LOW)
        Pleft();
     else if(digitalRead(sl)==LOW && digitalRead(sr)==LOW && digitalRead(sm)==HIGH && digitalRead(sensor)==HIGH)
        front();
        else if(digitalRead(sl)==HIGH&& digitalRead(sr)==HIGH && digitalRead(sm)==LOW && digitalRead(sensor)==HIGH)
        Pright();
        else if(digitalRead(sl)==LOW&& digitalRead(sr)==HIGH&& digitalRead(sm)==LOW && digitalRead(sensor)==HIGH)
        {Pright();
        
          }
        else if(digitalRead(sl)==HIGH&& digitalRead(sr)==LOW&& digitalRead(sm)==HIGH && digitalRead(sensor)==LOW)
        {Pleft();
         
        }
         else if(digitalRead(sl)==HIGH&& digitalRead(sr)==HIGH&& digitalRead(sm)==LOW && digitalRead(sensor)==LOW)
        Pright();
        else if(digitalRead(sl)==LOW&& digitalRead(sr)==HIGH&& digitalRead(sm)==LOW && digitalRead(sensor)==LOW)
        Pright();
        else if(digitalRead(sl)==HIGH&& digitalRead(sr)==LOW&& digitalRead(sm)==LOW && digitalRead(sensor)==LOW)
        Pleft();
        else if(digitalRead(sl)==LOW&& digitalRead(sr)==HIGH&& digitalRead(sm)==HIGH && digitalRead(sensor)==HIGH)
       right();
       
        else
        stop1();
 

  }
  void left()
{
   digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
analogWrite(ena,speed1-10);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb,speed2+20);
  
  }
void right()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(ena,speed1+15);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  analogWrite(enb,speed2-7);
 
  
  }
void front()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(ena,speed1);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb,speed2);
  
  }
void stop1()
{
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
 
    digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  
  }
void Pleft()
{
   digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(ena,speed1+4);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb,speed2+35);
  
  
  }
void Pright()
{
   digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(ena,speed1+40);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(enb,speed2+5);
  }
  void PPleft()
  {
    
    digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(ena,150);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb,255);  
    
    }
    void PPright()
{
   digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(ena,255);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(enb,150);
  }
  void left1()
  {
    digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
analogWrite(ena,speed1-3);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb,speed2+23);
    }