int motorPin = 3;
int motorPin2 = 5;
int motorPin3 = 6;
int motorPin4 = 9;
int mp = 2;

void setup() 
{ 
     pinMode(motorPin, OUTPUT);
     pinMode(motorPin2, OUTPUT);
     pinMode(motorPin3, OUTPUT);
     pinMode(motorPin4, OUTPUT);
     
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 


void loop() 
{ 
  analogWrite(motorPin,0);
  analogWrite(motorPin2,0);
  analogWrite(motorPin3,0);
  analogWrite(motorPin4,0);

} 
