#ifndef MOTORES_H
#define MOTORES_H

#include <robo_hardware2.h>

class Motores {
	private:
    
		#define VEL_FRENTE -80
   
		#define VEL_TRAS  80

	public:

		inline void emFrente(){robo.acionarMotores(80, 80);}
		inline void direita() {robo.acionarMotores(VEL_TRAS, VEL_FRENTE);} 
		inline void esquerda(){robo.acionarMotores(VEL_FRENTE, VEL_TRAS);}  
		inline void paraTras(){robo.acionarMotores(-80, -80);}

		inline void parar(int tempo){robo.acionarMotores(0, 0); delay(tempo);}

    inline void girar90Dir(){robo.acionarMotores(80, -80); delay(2200);}
    inline void girar90Esq(){robo.acionarMotores(-80, 80); delay(2200);}
    
};

#endif
