int leds[8]={16,17,25,26,27,5,18,19};



void setup() 
{
  Serial.begin(115200);
  for(int i=0;i<8;i++)
  {
    pinMode(leds[i],OUTPUT);
  }

}

void loop() 
{
  for(int i=0;i<8;i++) //Pattern 1
  {
      digitalWrite(leds[i],HIGH);
      delay(500);
      digitalWrite(leds[i],LOW);
      delay(500);
  }

}
