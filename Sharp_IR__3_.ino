#include <SharpIR.h>

#define IR1 A0 //forward
#define IR2 A1 //left
#define IR3 A2 //right

#define model1 430
#define model2 430
#define model3 430

SharpIR SharpIR1(IR1, model1);
SharpIR SharpIR2(IR2, model2);
SharpIR SharpIR3(IR3, model3);

void setup() {
  Serial.begin(9600);

}

void loop() {
  delay(100);
  //unsigned long startTime=millis();  // takes the time before the loop on the library begins

  int dis1=SharpIR1.distance();
  int dis2=SharpIR2.distance();
  int dis3=SharpIR3.distance();

  Serial.print("F : ");
  Serial.print(dis1);
  
  Serial.print("\t L : ");
  Serial.print(dis2);

  Serial.print("\t R : ");
  Serial.println(dis3);

}
