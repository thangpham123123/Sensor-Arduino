#define sensor 9
#define red 5
#define green 4
#define yellow 6

void setup() {
pinMode(sensor, INPUT);
Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
}

void loop() {
  int flag = 0;
  digitalWrite(green, 0);
  digitalWrite(red, 1);
  digitalWrite(yellow, 1);
  //Serial.println(digitalRead(sensor));
  if (digitalRead(sensor) == 0) flag = 1; 
  if (flag == 1) 
  {
      digitalWrite(green, 1);
      delay(100);
      digitalWrite(yellow, 0);
      delay(2000);
      digitalWrite(yellow, 1);
      digitalWrite(red, 0);
      delay(4000); 
  }
}
