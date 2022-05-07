#include <Servo.h>                //Servo kütüphanemizi ekliyoruz.

int pirPin = 2;                   //Sensörü takacağımız pin
int servoPin = 6;                 //Servoyu takacağımız pin
int hareket;                      //Sensörden aldığımız veri
Servo motor;                      //Servo motor değişkeni


void setup() {
  motor.attach(servoPin);         //Servomuzu 6. pin ile ilişkilendiriyoruz.
  pinMode(pirPin, INPUT);         //Sensör pinimizi giriş olarak ayarlyoruz.

}

void loop() {
  hareket = digitalRead(pirPin);  //Sensörden okuma yapıyoruz.
  
  if(hareket == HIGH){            //Hareketlilik var ise içerideki komutlar uygulanır.
    motor.write(0);
    delay(3000);
    motor.write(140);
    delay(250);
    
  }
  else{                           //Hareketlilik yok ise içerideki komutlar uygulanır.
    motor.write(140);
    
  }
}
