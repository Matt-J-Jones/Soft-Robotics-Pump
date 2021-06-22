int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ 
  if (Serial.available())
  {
    //int speed = Serial.parseInt();
    int speed = 1;
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(motorPin, speed);
      
    }
  }
} 
