int trigpin=2;
int echopin=3;
int distance;
void setup()
{
  Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(8,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(12,OUTPUT);
}
void loop()
{
  int pir=digitalRead(4);
  Serial.println(pir);
  if(pir)
  {
    digitalWrite(13,HIGH);
    Serial.println("motion detected");
  }
  delay(1000);
  
  double val=analogRead(A0);
  double temp=(((val/1024)*5)-0.5)*100;
  Serial.println(temp);
  if(temp>25)
    Serial.println("temperature is great");
  delay(1000);
  
  digitalWrite(trigpin,LOW);
  digitalWrite(trigpin,HIGH);
  delay(100);
  digitalWrite(trigpin,LOW);
  float dur = pulseIn(echopin,HIGH);
  float dis =(dur*0.0343)/2;
  Serial.print("distance:");
  Serial.print(dis);
  Serial.println("cm");
  if(distance<100)
  {
    digitalWrite(8,HIGH);
    Serial.println("turn on light");
  }
  else
    Serial.println("turn off the light");
  if(dis>=100)
  {
    for(int i=0;i<=30000;i+10)
    {
     tone(12,i);
     delay(1000);
     noTone(12);
     delay(1000);
    }
   }
  }
  
 
  
