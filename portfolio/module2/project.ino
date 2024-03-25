const int buttonPin = 37;

void setup() {
  Serial.begin(115200); // Start serial communication at 115200 baud rate
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int potValue = analogRead(25); // Read the analog value from pin 34
 // Print the read value to the serial monitor
  int buttonState = digitalRead(buttonPin); // Read the state of the button
  // Check if the button is pressed
  Serial.println(String(potValue) + "," + String(buttonState));

  delay(200); // Wait for 100 milliseconds
}
