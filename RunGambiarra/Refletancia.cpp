#include "Refletancia.h"

void Refletancia::atualizarSensoresRefletancia(){
    SensorLinhaEsq = robo.lerSensorLinhaEsq();
    SensorLinhaDir = robo.lerSensorLinhaDir(); 
    SensorLinhaMaisEsq = robo.lerSensorLinhaMaisEsq();
    SensorLinhaMaisDir = robo.lerSensorLinhaMaisDir();
}
