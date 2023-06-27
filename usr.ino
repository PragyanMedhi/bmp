int duration;
int distance;

void setup(){
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(5,LOW);
  delayMicroseconds(2);
  digitalWrite(5,HIGH);
  delayMicroseconds(10);
  digitalWrite(5,LOW);
  duration = pulseIn(6,HIGH);
  distance = duration * 0.034/2;
  delay(10);
  Serial.println(distance);
}
