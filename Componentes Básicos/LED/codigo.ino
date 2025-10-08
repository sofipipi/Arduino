//recordar conectar la led a una resistencia de 220 ohm

void setup()
{
pinMode(LED_BUILTIN, OUTPUT); 

} 

void loop()
{
  
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  
}