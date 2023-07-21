/////////imu//////
#include <Wire.h>
#include <LSM303.h>
#define THRESHOLD_ANGLE 10

LSM303 compass;
float heading_angle 　　　　= 0.0
float init_heading_angle 　= 0.0;   // 초기 방향
float target_heading_angle = 90 ;
float heading_angle_error　= 0.0;   
////////////////////////////////////////////////
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
  Wire.begin();
  compass.init();
  compass.enableDefault();
  init_heading_angle = compass.heading();
  Serial.begin(115200);
  Wire.begin();
}
void imu_Calculation()
{
  float heading_angle = compass.heading() - init_heading_angle;
  float heading_angle_error = (prev_heading_angle - heading_angle + 180) % 360 - 180;
}
/*함수는 초기 설정을 수행*/
void loop() {
  Serial.print("================");
  Serial.print("A　 　　");
  Serial.println(1);
  Serial.print("B　 　　");
  Serial.println(Bphase);
  Serial.print("주기　　");
  Serial.println(period);
  Serial.print("encoderPos  ");
  Serial.println(encoderPos);
  Serial.print("현재 회전한 거리: ");
  Serial.println(round(distance * 100) / 100); 
  imu_Calculation()
  Serial.print("Current Heading Angle: ");
  Serial.println(heading_angle);
  Serial.print("Heading Angle Error: ");
  Serial.println(heading_angle_error);
  prev_heading_angle = heading_angle;
  Serial.println("================");
  
}
/*함수는 계속해서 실행되는 루프*/
