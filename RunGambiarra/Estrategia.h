#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "Refletancia.h"
#include "Sonar.h"
#include "MeuSensorCor.h"

class Estrategia {
	public:

		void executar();
		
	private:

    	void seguirLinha();

      void desviarObstaculo();

      Refletancia sensoresLinha;
      Motores motores;
      Sonar sonar;
      MeuSensorCor sensorCor;
};

#endif
