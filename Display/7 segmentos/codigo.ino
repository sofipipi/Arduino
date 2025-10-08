int a = 7;
int b = 6;
int c = 5;
int d = 11;
int e = 10;
int f = 8;
int g = 9;
int dp = 4;

void display1(void)
{
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void display2(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}

void display3(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
}

void display4(void)
{
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
}

void display5(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void display6(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
}

void display7(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void display8(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}

void display9(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
}

void display0(void)
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}

void clearDisplay(void)
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
}

void setup()
{
  int i;
  for (i = 4; i <= 11; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  while (1)
  {
    clearDisplay();
    display0();
    delay(1000);

    clearDisplay();
    display1();
    delay(1000);

    clearDisplay();
    display2();
    delay(1000);

    clearDisplay();
    display3();
    delay(1000);

    clearDisplay();
    display4();
    delay(1000);

    clearDisplay();
    display5();
    delay(1000);

    clearDisplay();
    display6();
    delay(1000);

    clearDisplay();
    display7();
    delay(1000);

    clearDisplay();
    display8();
    delay(1000);
    
    clearDisplay();
    display9();
    delay(1000);
  }
}