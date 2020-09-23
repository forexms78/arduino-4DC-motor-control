int motorPin = 3;
int motorPin2 = 5;
int motorPin3 = 6;
int motorPin4 = 9;
int mp = 50;

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
  int i = 0;
  if(i ==0){
  analogWrite(motorPin,mp);
  analogWrite(motorPin2,mp);
  analogWrite(motorPin3,mp);
  analogWrite(motorPin4,mp);
  delay(10000);
  i = 1;
  }
  if(i ==1){
  analogWrite(motorPin,0);
  analogWrite(motorPin2,0);
  analogWrite(motorPin3,0);
  analogWrite(motorPin4,0);
  delay(10000);
  i = 0;
  }
} 
