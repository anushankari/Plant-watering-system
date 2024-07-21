//AUTOMATIC PLANT WATERING SYSTEM 

const int sensor = A0; 
int val; //This variable stores the value received from Soil moisture sensor. 
void setup() { 
    pinMode(13,OUTPUT); //Set pin 13 as OUTPUT pin, to send signal to relay 
    pinMode(sensor,INPUT); //Set pin 8 as input pin, to receive data from Soil moisture sensor. 
    pinMode(A0,INPUT); 
    Serial.begin(9600); 
}

void loop() { 
  val = digitalRead(8); //Read data from soil moisture sensor val = analog Read(sensor); 
  float moisture = (100 –( (val / 1023.00) * 100 ) ); 
  Serial.print(moisture); 
  if(moisture>92) 
  { 
    Serial.println("if"); 
    digitalWrite(13,HIGH); 
  } 
  else
  { 
    Serial.println("else"); 
    digitalWrite(13,LOW); 
  } 
  delay(1000); 
} 
 



