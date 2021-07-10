//Definisi Pin Motor Pada Pin Pwm Mikro A Mega
#define motor1A 8
#define motor1B 9
#define motor2A 6
#define motor2B 7

//Set PWM
int pwm = 255;
void setup() {
pinMode(motor1A  , OUTPUT);pinMode(motor1B  , OUTPUT);pinMode(motor2A  , OUTPUT);pinMode(motor2B  , OUTPUT);
}
void kondisi1(int value_pwm){
  analogWrite(motor1A, LOW)      ;  analogWrite(motor1B, 255);
  analogWrite(motor2A, 255);  analogWrite(motor2B, LOW)      ;
  }
void kondisi2(int value_pwm){
  analogWrite(motor1A, LOW);  analogWrite(motor1B, 150)  ;
  analogWrite(motor2A, LOW);  analogWrite(motor2B, LOW)            ;
  }
void kondisi3(int value_pwm){
  analogWrite(motor1A, value_pwm-255);  analogWrite(motor1B, value_pwm-255)  ;
  analogWrite(motor2A, LOW);  analogWrite(motor2B, LOW)            ;
  }
void kondisi4(int value_pwm){
  analogWrite(motor1A, -255);  analogWrite(motor1B, LOW)  ;
  analogWrite(motor2A, LOW);  analogWrite(motor2B, LOW)            ;
  }
void kondisi5(int value_pwm){
  analogWrite(motor1A, LOW);  analogWrite(motor1B, LOW)  ;
  analogWrite(motor2A, 150);  analogWrite(motor2B, LOW)            ;
  }
void kondisi6(int value_pwm){
  analogWrite(motor1A, LOW);  analogWrite(motor1B, LOW)  ;
  analogWrite(motor2A, value_pwm-255);  analogWrite(motor2B, value_pwm-255)            ;
  }
void kondisi7(int value_pwm){
  analogWrite(motor1A, LOW);  analogWrite(motor1B, LOW)  ;
  analogWrite(motor2A, LOW);  analogWrite(motor2B, -255)            ;
  }
void kondisi8(int value_pwm){
  analogWrite(motor1A, value_pwm-255);  analogWrite(motor1B, value_pwm-255)  ;
  analogWrite(motor2A, value_pwm-255);  analogWrite(motor2B, value_pwm-255)            ;
  }
void kondisi9(int value_pwm){
  analogWrite(motor1A, LOW);  analogWrite(motor1B, LOW)  ;
  analogWrite(motor2A, LOW);  analogWrite(motor2B, LOW)            ;
  }
void loop() {
//kondisi1(pwm);
//  kondisi2(pwm);
//    kondisi3(pwm);
      kondisi4(pwm);
//        kondisi5(pwm);
//          kondisi6(pwm);
//            kondisi8(pwm);
//              kondisi9(pwm);
}
