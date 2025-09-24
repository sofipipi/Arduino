int boton=2;
int estadoBoton=0;
void setup() {
  pinMode(boton,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  estadoBoton=digitalRead(boton);
  if (estadoBoton==HIGH){
    Serial.println("El boton fue presionado");
    delay(500);
  }
  else{
    Serial.println("El boton no esta presionado");
    delay(500);
  }
 }