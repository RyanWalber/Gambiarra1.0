#include "Estrategia.h"
#include <robo_hardware2.h>

Estrategia estrategia;

void setup() {
  robo.configurar(false);

}

void loop() {
  estrategia.executar();

}
