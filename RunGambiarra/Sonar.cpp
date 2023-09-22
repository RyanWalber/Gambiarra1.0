#include "Sonar.h"

void Sonar::atualizarSensorSonar(){
  SensorSonar = robo.lerSensorSonarFrontal();
}

float Sonar::getSensorSonar(){
   return SensorSonar;
    
}
