
int relay = A1;

void setup(void)
{
  digitalWrite(relay,HIGH);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);

}


void loop(void){ 

  int drek = analogRead(A0);
  Serial.println(drek);
  if(drek > 475){
    digitalWrite(relay,LOW);
    digitalWrite(relay,HIGH);
    delay(1500);
    digitalWrite(relay,LOW);
    delay(1500);
  }else{
    digitalWrite(relay,HIGH);
  }
  
}
