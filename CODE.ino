
char A;
char B;
int in1= 8;
int sensorValueA;
int sensorValueB;
// the setup routine runs once when you press reset:
void setup() 
{  
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);

  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {

  digitalWrite(9,HIGH);
  // read the input on analog pin 0:
   sensorValueA = analogRead(A0);
  if (Serial.available())
  {
    A= Serial.available();
    }
  
  // print out the value you read:
  Serial.println( sensorValueA);
  
  delay(100);        
  
sensorValueB = analogRead(A1);
if (Serial.available())
{
  A= Serial.available();
  }
  Serial.println(sensorValueB);

  delay(100);

 
if(sensorValueA<="300" && sensorValueB<= "300")
{
digitalWrite(in1,LOW);

}
 else if (sensorValueA>"300" && sensorValueB<= "300")
{
digitalWrite(in1,HIGH);

 }
 }


