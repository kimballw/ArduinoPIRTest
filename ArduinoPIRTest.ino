/*
 * ArduinoPIRTest
 * by Kimball Willard (kimballw@gloininteractive.com)
 * 
 * Used for testing PIR setup, for up to 4 PIR's
 * 
 * Expected to be run on and Android UNO
 * Uses 4 PIR sensors
 */

int PIR1 = 2;
int PIR2 = 3;
int PIR3 = 4;
int PIR4 = 5;

void setup() {
  pinMode(PIR1, INPUT);
  pinMode(PIR2, INPUT);
  pinMode(PIR3, INPUT);
  pinMode(PIR4, INPUT);

  Serial.begin(9600);
}

void loop() {
  val1 = digitalRead(PIR1);
  val2 = digitalRead(PIR2);
  val3 = digitalRead(PIR3);
  val4 = digitalRead(PIR4);
  if (val1 == HIGH) {
    Serial.println("Motion detected on sensor 1");
  } else if (val2 == HIGH) {
    Serial.println("Motion detected on sensor 2");
  } else if (val3 == HIGH) {
    Serial.println("Motion detected on sensor 3");
  } else if (val4 == HIGH) {
    Serial.println("Motion detected on sensor 4");
  }

  delay(500);
}
