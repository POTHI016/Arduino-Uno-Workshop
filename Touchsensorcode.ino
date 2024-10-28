const int touch = 7;
const int led = 13;

void setup() {
  pinMode(touch,INPUT);//define pin as input sensor
  pinMode(led,OUTPUT);//define pin as output sensor

}

void loop() {
int y =digitalRead(touch);//read the sensor
if (y==1){
  digitalWrite(led,HIGH);//turn on led
}else{digitalWrite(led,LOW);//turn off led
}
delay(500);

}