#include <Servo.h>

Servo servoMotor;

void ajuste_inicial(){
  servoMotor.write(0);
  delay(1000);
  
}


void setup() {
  Serial.begin(9600);
  servoMotor.attach(9);
  ajuste_inicial();

}

void tres_angulos(){
  servoMotor.write(0);
  delay(1000);

  servoMotor.write(90);
  delay(4000);

  servoMotor.write(180);
  delay(5000);
}

void vigilancia(){
  for (int i = 0; i <=180; i++){
    servoMotor.write(i);
    delay(5);
  }
  for (int i = 179; i > 0; i--){
    servoMotor.write(i);
    delay(5);
  }
}

void loop() {
  tres_angulos();
  //vigilancia();
  

}
