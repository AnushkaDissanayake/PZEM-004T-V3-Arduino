#include <PZEM004Tv30.h>
PZEM004Tv30 pzem(6, 7); //6-Rx, 7-Tx Arduino pin D6 should be connected to Tx pin of pzem_v3 


void setup() {
  Serial.begin(115200);
}

void loop() {
  float voltage = pzem.voltage(); // Read voltage
  if(voltage != NAN){
    Serial.print("Voltage: "); Serial.print(voltage); Serial.println("V");
  } else {
    Serial.println("Error reading voltage");
  }
  float current = pzem.current(); //Read currrent
  if(current != NAN){
    Serial.print("Current: "); Serial.print(current); Serial.println("A");
    } else {
    Serial.println("Error reading current");
  }
  float power = pzem.power(); //Read active power
  if(current != NAN){
    Serial.print("Power: "); Serial.print(power); Serial.println("W");
  } else {
    Serial.println("Error reading power");
  }
  float energy = pzem.energy(); //read Energy
  if(current != NAN){
    Serial.print("Energy: "); Serial.print(energy,3); Serial.println("kWh");
  } else {
    Serial.println("Error reading energy");
  }
  float frequency = pzem.frequency(); //Read frequency
  if(current != NAN){
    Serial.print("Frequency: "); Serial.print(frequency, 1); Serial.println("Hz");
  } else {
    Serial.println("Error reading frequency");
  }
  float pf = pzem.pf(); //rea power factor
  if(current != NAN){
    Serial.print("PF: "); Serial.println(pf);
  } else {
    Serial.println("Error reading power factor");
  }
  Serial.println();
  delay(1000);
}
