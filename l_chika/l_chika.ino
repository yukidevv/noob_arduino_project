int count = 0;
int interval = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(count < 100){
    count++;
    led_blink(count,interval);
    delay(interval);
  }
}

void led_blink(int count,int interval){
  int i;
  for(i=0; i<count; i++){
    digitalWrite(13,HIGH);
    delay(interval);
    digitalWrite(13,LOW);
    delay(interval);
  }
}
