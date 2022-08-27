/***
 *
 * Code Written by TechMartian
 *
 */

const int ledPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (ledPin, HIGH);

  delay(2000);

  digitalWrite (ledPin, LOW);

  delay(2000);
}

Initialized empty Git repository in C:/Users/Qasim Ali/PycharmProjects/Esp32ConnectionWithRPI4/.git/
