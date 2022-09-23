int t=12;
int e=9;
int led=4;
int buzz=2;

void setup()
{
  Serial.begin(9600);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(buzz,OUTPUT);
}

void loop()
{
  //ultrasonic sensor
  digitalWrite(t,LOW);
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);
  float dur=pulseIn(e,HIGH);
  float dis=(dur*0.0343)/2;
  Serial.print("Distance is: ");
  Serial.println(dis);

    //LED ON
  if(dis>=100)
  {
    digitalWrite(led,HIGH);
  }

  //Buzzer For ultrasonic Sensor
  if(dis>=100)
  {
  for(int i=0; i<=30000; i=i+10)
  {
  tone(buzz,i);
  delay(1000);
  noTone(buzz);
  delay(1000);
  }
  }




    //Temperate Sensor
  double a= analogRead(A0);
  double t=(((a/1024)*5)-0.5)*100;
  Serial.print("Temp Value: ");
  Serial.println(t);
  delay(1000);


  //LED ON
  if(t>=100)
  {
    digitalWrite(led,HIGH);
  }

  //Buzzer for Temperature Sensor
  if(t>=100)
  {
  for(int i=0; i<=30000; i=i+10)
  {
  tone(buzz,i);
  delay(1000);
  noTone(buzz);
  delay(1000);
  }
  }

   //LED OFF
  if(t<100)
  {
    digitalWrite(led,LOW);
  }
}