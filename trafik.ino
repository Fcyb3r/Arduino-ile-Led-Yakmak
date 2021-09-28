//trafik lambasi

int kled=2;
int sled=3;
int yled=4;



void setup() {

pinMode(kled,OUTPUT);
pinMode(yled,OUTPUT);
pinMode(sled,OUTPUT);

}

void loop() {

digitalWrite(kled,HIGH);
 delay(3000);
  digitalWrite(kled,LOW);

digitalWrite(sled,HIGH);
 delay(2000);
  digitalWrite(sled,LOW);

digitalWrite(yled,HIGH);
 delay(1000);
  digitalWrite(yled,LOW);




}
