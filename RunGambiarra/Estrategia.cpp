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
    
    
}

void Estrategia::alinharObstaculo(){
  sensoresLinha.atualizarSensoresRefletancia();
  
  if(sensoresLinha.desalinhou_direita()){
     robo.acionarMotores(-80, 80); 
  }
  else if(sensoresLinha.desalinhou_esquerda()){
     robo.acionarMotores(80, -80); 
  }
  else if(sensoresLinha.pppp()){
    robo.acionarMotores(0, 0);
  }
  else{
    robo.acionarMotores(-80, -80); 
  }
       
}

void Estrategia::executar(){
  
  sonar.atualizarSensorSonar();
  
  if(sonar.getSensorSonar() <= 8){
    desviarObstaculo();
  }
  else{
    alinharObstaculo();
  }
 
}
