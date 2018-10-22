Servo myservo;


int startPosition = 2;
int gotmail = 50;
int first = 1;

//SETUP
void setup() {
  myservo.attach(D0);
  myservo.write(startPosition);
}

//LOOP
void loop() {
  System.sleep(A4, FALLING);
  myservo.write(gotmail);
  Particle.publish("twilio_sms", "\nYou got mail", PRIVATE);
  delay(60000);
}
