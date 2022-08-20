#define echoPin 7
#define trigPin 4
unsigned int duracao = 0;
unsigned int distancia = 0;

void setup()
{ 
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
	digitalWrite(trigPin, HIGH);
  	delayMicroseconds(10);
  	digitalWrite(trigPin, LOW);
  	duracao = pulseIn(echoPin, HIGH);
  	distancia = duracao*0.017;
  	if (distancia >= 20 && distancia <= 40)
    {
    	Serial.print(distancia);
   		 Serial.println("cm");
      	delay(100);
    }
    
}
