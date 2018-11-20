Servo flagServo;

int flagStart = 0;
int flagGotmail = 90;
  

void setup() {

  flagServo.attach(D0);
  flagServo.write(flagStart);
  Particle.publish("twilio_sms", "Mailbox Notifier is ready!", PRIVATE);
}

//LOOP
void loop() {
  delay(60000); // 60 sec
  System.sleep(A4, FALLING); //Put to sleep, wake up if contact moves
  flagServo.write(flagGotmail); // Set flag
  Particle.publish("twilio_sms", "You got mail!", PRIVATE); // Send SMS
}



