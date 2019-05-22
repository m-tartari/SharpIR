#include <SharpIR.h>

//GLOBAL VARIABLES
SharpIR sharpIR;

//MAIN
void setup()
{
  // Define pins as Inputs and Outputs
  pinMode (A1, INPUT);
}

void loop()
{
  int dist=sharpIR.distance(A1);
  Serial.print("Mean distance: ");  // returns it to the serial monitor
  Serial.println(dist);

  unsigned long pepe2=millis()-pepe1;  // the following gives you the time taken to get the measurement
  Serial.print("Time taken (ms): ");
  Serial.println(pepe2); 
}