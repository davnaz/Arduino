#define switchPin 8
#define ledPin 11
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean ledOn = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
boolean debounce(boolean last)
{
  boolean current = digitalRead(switchPin);
  if(last != current)
  {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}

void loop() {
  // put your main code here, to run repeatedly:
  currentButton = debounce(lastButton);
  if(currentButton != HIGH && lastButton == LOW)
  {
    ledOn = !ledOn;
    lastButton = HIGH;
    digitalWrite(ledPin, HIGH);
  }

    lastButton = currentButton;

  digitalWrite(ledPin, ledOn );
}
