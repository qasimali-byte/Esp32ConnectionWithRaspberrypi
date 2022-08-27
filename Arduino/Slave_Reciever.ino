
#include <Wire.h>

#define SDA_PIN 21
#define SCL_PIN 22        //Declare SDA Pin on NodeMCU

const int16_t I2C_SLAVE = 0x08;
const int ledPin = 2;
void setup() {
  Wire.begin(I2C_SLAVE,SDA_PIN, SCL_PIN,115200 );  // join i2c bus with address #8
  Wire.onReceive(receiveEvent);             // register event
    pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);                    // start serial for output
}




void loop () {


  delay(100);
}

void receiveEvent(int howMany){

  while (Wire.available()) {
    char c = Wire.read();
    digitalWrite(ledPin, c);
  }
}