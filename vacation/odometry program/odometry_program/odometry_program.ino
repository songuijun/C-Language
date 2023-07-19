#define encoderPinA 2
#define encoderPinB 3

int encoderPos = 0;
int Bphase;
unsigned long previous = 0; // 이전 rising이 발생했던 시간
unsigned long current = 0; // 현재 rising이 발생한 시간
unsigned long period = 0;   // 주기
float distancePerPulse = 0.0004888;
float distance = encoderPos * distancePerPulse;
/*핀 설정*/

void doEncoderInterrupt() {
 current = millis();
 period = current - previous;
 Bphase = digitalRead(encoderPinB);

  if(digitalRead(Bphase) == HIGH) 
  {
    encoderPos--;
  }
  else 
  {
    encoderPos++;
  }

  previous = current;
}

void setup() {
  pinMode(encoderPinA, INPUT);
  pinMode(encoderPinB, INPUT);
  attachInterrupt(digitalPinToInterrupt(encoderPinA), doEncoderInterrupt,RISING);
  Serial.begin(115200);
}
/*함수는 초기 설정을 수행*/
void loop() {
  Serial.print("A　 　　");
  Serial.println(1);
  Serial.print("B　 　　");
  Serial.println(Bphase);
  Serial.print("주기　　");
  Serial.println(period);
  Serial.print("encoderPos  ");
  Serial.println(encoderPos);
  Serial.println(round(distance * 100) / 100); 
}
/*함수는 계속해서 실행되는 루프*/
