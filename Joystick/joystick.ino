/*
Arduino script to connect an analog joystick
to an Arduino UNO.
Author: Rodolfo Ferro
Site: https://rodolfoferro.xyz/
*/

// Define ports:
int xPin = A1;
int yPin = A0;

// Declare variables for positions:
int xPosition, yPosition;

void setup() {
  // Initialize serial communications at 9600 bps:
  Serial.begin(9600);

  // Initialize pin modes:
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
}

void loop() {
  // Read values from analogic port:
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);

  // Remap (0, 1023) -> (0, 255):
  xPosition = map(xPosition, 0, 1023, 0, 255);
  yPosition = map(yPosition, 0, 1023, 0, 255);

  // Print (x, y) values:
  Serial.print("x = ");
  Serial.println(xPosition);
  Serial.print("x = ");
  Serial.println(yPosition);
  delay(100);
}
