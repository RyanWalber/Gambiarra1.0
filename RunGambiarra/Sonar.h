 #ifndef SONAR_H
#define SONAR_H

#include <robo_hardware2.h>

class Sonar {
    private:

        float SensorSonar;

	   public:

        void atualizarSensorSonar();

        float getSensorSonar();
 
};
		
#endif