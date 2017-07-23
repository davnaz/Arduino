#define ledR 9
#define ledY 10
#define ledG 11 // the PWM pin the LED is attached to
#define scale 3000  //это для мастабирования времени светофора

void setup() {
  
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  analogWrite(ledR, 0);
  analogWrite(ledY, 0);
  analogWrite(ledG, 0);
   
}


void loop() {
    digitalWrite(ledR, HIGH);
    delay(scale * 4);
    digitalWrite(ledY, HIGH);
    delay(scale/4);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledG, HIGH);
    delay(scale*4);
    digitalWrite(ledG, LOW);
    delay(scale/4);
    digitalWrite(ledG, HIGH);
    delay(scale/4);
    digitalWrite(ledG, LOW);
    delay(scale/4);
    digitalWrite(ledG, HIGH);
    delay(scale/4);
    digitalWrite(ledY, HIGH);
    digitalWrite(ledG, LOW);
    delay(scale/4);
    digitalWrite(ledY, LOW);    
}
