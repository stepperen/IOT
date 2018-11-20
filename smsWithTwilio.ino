String body = "You got mail";

void setup() {
  Particle.publish("twilio_sms", body, PRIVATE);
  Serial.begin(115200);
}

void loop() {
    Serial.println("That's all!  You can restart or edit the code now.");
    delay(60000);
}
