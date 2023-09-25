#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include <robo_hardware2.h>
#include "Motores.h"
#include "Refletancia.h"
#include "Sonar.h"


class Estrategia {
	public:

		void executar();
		
	private:

    	void seguirLinha();

      void desviarObstaculo();
      void alinharObstaculo();

      Refletancia sensoresLinha;
      Motores motores;
      Sonar sonar;
};

#endif
