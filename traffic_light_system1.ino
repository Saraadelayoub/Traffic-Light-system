# define red 8
# define yellow 9
# define green 10
int ON = 1000;
int OFF = 1000;
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  digitalWrite(8,HIGH);
  delay(ON);
    digitalWrite(9,HIGH);
    delay(ON);
    digitalWrite(9,LOW);
    delay(OFF);
    digitalWrite(9,HIGH);
    delay(ON);
    digitalWrite(9,LOW);
    delay(OFF);
    digitalWrite(9,HIGH);
    delay(ON);
    digitalWrite(9,LOW);
  digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(10,LOW);
    delay(OFF);
}

void loop()
{

}
