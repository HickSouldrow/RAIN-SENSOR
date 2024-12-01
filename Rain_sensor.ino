#define Buzzer 8

void setup() {
	
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
	
  int value = analogRead(A3);
  Serial.print("Value : ");
  Serial.println(value);

  if (value < 300) {
    digitalWrite(4, HIGH);
    digitalWrite(Buzzer,HIGH);
    Serial.print("It's raining");
	
  } else {
    digitalWrite(4, LOW);
    digitalWrite(Buzzer,LOW);
  }
}
