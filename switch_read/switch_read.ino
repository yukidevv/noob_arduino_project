int SWITCH_SOCKET = 2;
int interval = 100;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(SWITCH_SOCKET,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(digitalRead(SWITCH_SOCKET));
  if(digitalRead(SWITCH_SOCKET) == 1){
    count = count + 1;
    Serial.println(count);
    while(digitalRead(SWITCH_SOCKET) == 1){
      delay(interval);
    }
  }
}
