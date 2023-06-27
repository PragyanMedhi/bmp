void setup(){
   pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int a = analogRead(A0);
  Serial.println(a);
  if(a>400){
    digitalWrite(8,HIGH);
  } else{
    digitalWrite(8,LOW);
  }
}
