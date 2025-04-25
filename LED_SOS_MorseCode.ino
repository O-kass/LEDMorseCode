int redLED=8;
int shortPause=100;
int longPause=300;

void setup() {

pinMode(8, OUTPUT);
pinMode(13, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, LOW);


digitalWrite(redLED, HIGH);
delay(shortPause);
digitalWrite(redLED, LOW);
delay(shortPause);

digitalWrite(redLED, HIGH);
delay(shortPause);
digitalWrite(redLED, LOW);
delay(shortPause);

digitalWrite(redLED, HIGH);
delay(shortPause);
digitalWrite(redLED, LOW);
delay(500);

digitalWrite(redLED, HIGH);
delay(longPause);
digitalWrite(redLED, LOW);
delay(longPause);

digitalWrite(redLED, HIGH);
delay(longPause);
digitalWrite(redLED, LOW);
delay(longPause);

digitalWrite(redLED, HIGH);
delay(longPause);
digitalWrite(redLED, LOW);
delay(500);

digitalWrite(redLED, HIGH);
delay(shortPause);
digitalWrite(redLED, LOW);
delay(shortPause);

digitalWrite(redLED, HIGH);
delay(shortPause);
digitalWrite(redLED, LOW);
delay(shortPause);

digitalWrite(redLED, HIGH);
delay(shortPause);
digitalWrite(redLED, LOW);
delay(500);



}
