int flexSensorPin = A0; //Input is from Analog Pin 0 (Flex Sensor)

void setup(){
  Serial.begin(9600);  //Call Serial Monitor
}

void loop(){
  int flexSensorReading = analogRead(flexSensorPin); 

  Serial.println(flexSensorReading);
 
  //Using map(), you can convert that to a larger range like 0-100.
  int flex0to100 = map(flexSensorReading, 150, 400, 100, 0);
  Serial.println(flex0to100);  //Print all the data in the Serial monitor

  delay(250); // Slow down the code for easy reading on the Serial Monitor.
}
