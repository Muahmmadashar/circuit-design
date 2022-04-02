// C++ code
//
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);

}

void loop()
{
  digitalWrite(0, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(0, LOW);
  delay(10); // Wait for 1000 millisecond(s)

  digitalWrite(1, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  
  digitalWrite(2, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  
  digitalWrite(4, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(2, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(1, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  
  
  
}
