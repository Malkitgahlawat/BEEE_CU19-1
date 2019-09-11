int i,j;

void setup()
{
for (int i=8;i<=13;i=i+1)
{ pinMode(i,OUTPUT);}
}
void loop()
{
  for(j=8;j<=13;j=j+1)
  {
    digitalWrite(j, HIGH);
    delay(250);
    digitalWrite(j, LOW);
    
  }
  
}
