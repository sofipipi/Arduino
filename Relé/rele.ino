
//byte rele = D1; // Si utilizas un ESP8266 NodeMCU Wemos D1 mini
byte rele = 2; // Si utilizas un Arduino UNO Arduino MEGA

// the setup routine runs once when you press reset:
void setup() {
  // initialize el pin del rele como salida
  pinMode(rele, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(rele, HIGH);   // activar el rele'
  delay(1000);               // esperar un segundo
  digitalWrite(rele, LOW);    // apagar el rele'
  delay(1000);               // esperar un segundo
}
