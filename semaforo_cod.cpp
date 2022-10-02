// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  delay(7000); // Wait for 7000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(12, HIGH);
  delay(7000); // Wait for 7000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(4, LOW);
}