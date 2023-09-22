#ifndef REFLETANCIA_H
#define REFLETANCIA_H

#include <robo_hardware2.h>

class Refletancia {
    private:
        #define DIVISOR_BRANCO_PRETO 90

        float SensorLinhaEsq;
        float SensorLinhaDir; 
        float SensorLinhaMaisEsq;
        float SensorLinhaMaisDir;


	  public:
        
        inline bool pppp() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && SensorLinhaEsq<DIVISOR_BRANCO_PRETO && SensorLinhaDir<DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool pppb() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && SensorLinhaEsq<DIVISOR_BRANCO_PRETO && SensorLinhaDir<DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool ppbb() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && SensorLinhaEsq<DIVISOR_BRANCO_PRETO && SensorLinhaDir>DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool pbbb() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO && SensorLinhaEsq>DIVISOR_BRANCO_PRETO && SensorLinhaDir>DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bppp() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && SensorLinhaEsq<DIVISOR_BRANCO_PRETO && SensorLinhaDir<DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool bppb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && SensorLinhaEsq<DIVISOR_BRANCO_PRETO && SensorLinhaDir<DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bpbb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && SensorLinhaEsq<DIVISOR_BRANCO_PRETO && SensorLinhaDir>DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bbpp() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && SensorLinhaEsq>DIVISOR_BRANCO_PRETO && SensorLinhaDir<DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool bbpb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && SensorLinhaEsq>DIVISOR_BRANCO_PRETO && SensorLinhaDir<DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}
        inline bool bbbp() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && SensorLinhaEsq>DIVISOR_BRANCO_PRETO && SensorLinhaDir>DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO);}
        inline bool bbbb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO && SensorLinhaEsq>DIVISOR_BRANCO_PRETO && SensorLinhaDir>DIVISOR_BRANCO_PRETO && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO);}

        inline bool   frente(){return (bbbb() || bppb() || pppp());}
        inline bool  direita(){return (pppb() || ppbb() || pbbb() || bpbb());}
        inline bool esquerda(){return (bppp() || bbpp() || bbpb() || bbbp());}
        
        void atualizarSensoresRefletancia();
};
		
#endif
