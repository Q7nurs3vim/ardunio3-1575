// C++ code
//
void setup()
{
  for(int i=2; i<=6; i++)
  {
    pinMode(i ,OUTPUT);
  }
}

void loop(){
  for(int i=2; i<=6; i++)
  {  
  digitalWrite(i,1);
  delay(1000); 
  digitalWrite(i,0);
  delay(1000); 
  }
}