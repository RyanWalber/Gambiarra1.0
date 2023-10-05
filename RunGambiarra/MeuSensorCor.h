#ifndef MEUSENSORCOR_H
#define MEUSENSORCOR_H

#include <robo_hardware2.h>

class MeuSensorCor{
  private:
    #define VALOR_BRANCO_ESQ 0.20
    #define VALOR_BRANCO_DIR 0.29

    HSV sensorCorDir;
    HSV SensorCorEsq;
  
	public:

    inline bool  verdeDir(){return(sensorCorDir.h > 53 && sensorCorDir.s > VALOR_BRANCO_DIR && sensorCorDir.v > 700);}
    inline bool  PretoDir(){return(sensorCorDir.h < 53 && sensorCorDir.s > VALOR_BRANCO_DIR && sensorCorDir.v > 700);}
    inline bool BrancoDir(){return(sensorCorDir.s < VALOR_BRANCO_DIR);}

    inline bool  verdeEsq(){return(SensorCorEsq.h > 70 && SensorCorEsq.s > VALOR_BRANCO_ESQ && SensorCorEsq.v > 700);}
    inline bool  PretoEsq(){return(SensorCorEsq.h < 70 && SensorCorEsq.s > VALOR_BRANCO_ESQ && SensorCorEsq.v > 700);}
    inline bool BrancoEsq(){return(SensorCorEsq.s < VALOR_BRANCO_ESQ);}

    inline void atualizarSensoresCor(){sensorCorDir = robo.getHSVDireito(); SensorCorEsq = robo.getHSVEsquerdo();}
		

};

#endif
