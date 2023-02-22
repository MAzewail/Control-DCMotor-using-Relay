// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
}

void loop()
{
  digitalWrite(7,digitalRead(6));
}