#include <Arduino.h>
//sensor 3550 full dry 
//snsor 1490 full water
const int sensorPin = 0;



void setup() {
  pinMode(sensorPin, INPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);

}



void loop() {
  int moistSens=analogRead(sensorPin);
  float waterLevelPercentage = (3550 - moistSens) * 100 / (3550 - 1490);
  Serial.printf("Viz tartalom %.1f%%.\n", waterLevelPercentage);
  delay (3000);
  
}



