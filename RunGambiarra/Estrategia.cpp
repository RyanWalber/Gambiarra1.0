#include "Estrategia.h"

void Estrategia::seguirLinha(){

    sensoresLinha.atualizarSensoresRefletancia();

    if(sensoresLinha.frente()){
      motores.emFrente();
    }
    
    else if(sensoresLinha.direita()){
      motores.direita();
      delay(100);
    }
    
    else if(sensoresLinha.esquerda()){
      motores.esquerda();
      delay(100);
    }      
  }

void Estrategia::desviarObstaculo(){
    //em andamento...
    
}

void Estrategia::executar(){
  
/*  sonar.atualizarSensorSonar();
  
  if(sonar.getSensorSonar() <= 8){
    desviarObstaculo();
    }
  else{*/
    seguirLinha();
    //}
 
}
