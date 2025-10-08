
const int LDRPin = A2;

void setup()
{

pinMode(LDRPin, INPUT);
Serial.begin(9600);
} 

void loop()
{
  int value = analogRead(LDRPin);
  Serial.println(value);
  
}