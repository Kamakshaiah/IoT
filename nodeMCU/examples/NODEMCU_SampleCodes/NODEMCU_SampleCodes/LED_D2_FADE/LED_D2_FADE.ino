#define LED D2
int val;
void setup() 
{
  pinMode(LED,OUTPUT);
}
void loop() 
{
  for(val=0;val<1000;val+=50)
  {
    analogWrite(LED,val);
    delay(100);
  }
  for(val=1000;val>1;val-=50)
  {
    analogWrite(LED,val);
    delay(100);
  }
}
