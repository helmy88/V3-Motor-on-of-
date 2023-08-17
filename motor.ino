const int motorPin = 9; // Adjust this to match the motor pin you're using

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Turn the motor ON
  digitalWrite(motorPin, HIGH);
  Serial.println("Motor ON");
  delay(4000); // Delay for 4 seconds

  // Turn the motor OFF
  digitalWrite(motorPin, LOW);
  Serial.println("Motor OFF");
  delay(4000); // Delay for 4 seconds
}
