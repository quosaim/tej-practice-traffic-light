// C++ code
//

int redPin=9;
int yellowPin=10;
int greenPin=11;
int lighttime =500;


void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  digitalWrite(redPin, HIGH);
  delay(3*lighttime); // Wait for 1000 millisecond(s)
  digitalWrite(redPin, LOW);
  //delay(3*lighttime); // Wait for 1000 millisecond(s)
  digitalWrite(greenPin, HIGH);
  delay(2*lighttime); // Wait for 1000 millisecond(s)
  digitalWrite(greenPin, LOW);
  //delay(2*lighttime); // Wait for 1000 millisecond(s)
  digitalWrite(yellowPin, HIGH);
  delay(lighttime); // Wait for 1000 millisecond(s)
  digitalWrite(yellowPin, LOW);
  //delay(lighttime); // Wait for 1000 millisecond(s)
}