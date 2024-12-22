const int leftMotorPin = 3;
const int rightMotorPin = 5;
const int ledPin = 13;

unsigned long previousMillis = 0;
const long interval = 500;

bool ledState = LOW;

void setup() {
  pinMode(leftMotorPin, OUTPUT);
  pinMode(rightMotorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  analogWrite(leftMotorPin, 0);
  analogWrite(rightMotorPin, 0);
  digitalWrite(ledPin, LOW);
}

void loop() {
  analogWrite(leftMotorPin, 128);
  analogWrite(rightMotorPin, 128);
  delay(2000);

  analogWrite(leftMotorPin, 0);
  analogWrite(rightMotorPin, 0);
  delay(1000);

  analogWrite(leftMotorPin, 255);
  analogWrite(rightMotorPin, 0);
  delay(1000);

  analogWrite(leftMotorPin, 0);
  analogWrite(rightMotorPin, 0);
  delay(1000);

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}
