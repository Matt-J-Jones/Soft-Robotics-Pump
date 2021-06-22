
const int BUTTON_PIN = 7; // Arduino pin connected to button's pin

int lastButtonState;    // the previous state of button
int currentButtonState; // the current state of button
int motorPin = 3;

void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  currentButtonState = digitalRead(BUTTON_PIN);
}

void loop() 
{
  lastButtonState    = currentButtonState;      // save the last state
  currentButtonState = digitalRead(BUTTON_PIN); // read new state
  if(lastButtonState == HIGH && currentButtonState == LOW) 
  {
    analogWrite(motorPin, 255);
  }
  else if(lastButtonState == LOW && currentButtonState == HIGH) 
  {
    analogWrite(motorPin, 0);
  }

}
