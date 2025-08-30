const int flexPin = A0;
const int ledPin=13;
int threshold = 170;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(flexPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  int flexVal = analogRead(flexPin);
  bool ledState = flexVal < threshold;
  digitalWrite(ledPin, ledState ? HIGH : LOW);
  Serial.print("Sensor: "); Serial.println(flexVal);
  Serial.print(" | LED: "); Serial.println(ledState ? "ON" : "OFF");

  delay(200);
}