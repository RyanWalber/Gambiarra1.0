#include "Estrategia.h"

void Estrategia::seguirLinha(){

    sensoresLinha.atualizarSensoresRefletancia();
    robo.habilitaTCS34();

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
    else if(sensoresLinha.pppp()){
      motores.parar(100);
      motores.emFrente();
      delay(150);
      motores.parar(1000);
      
      sensorCor.atualizarSensoresCor();
      if(!sensorCor.BrancoEsq()){
        Serial.println("EU TÔ VENDO VERDE");
        motores.direita();
        delay(1000);
    }
    }     
  }

void Estrategia::desviarObstaculo(){
  motores.girar90Dir();
  sensoresLinha.atualizarSensoresRefletancia();
  
  while(!sensoresLinha.pppp()){
      sensoresLinha.atualizarSensoresRefletancia();
      
      if(sensoresLinha.desalinhou_direita()){
         motores.direita();
      }
      else if(sensoresLinha.desalinhou_esquerda()){
         motores.esquerda();
      }
      else{
      motores.paraTras();
      }
  }

  motores.emFrente();
  delay(3000);
  motores.girar90Esq();
  motores.emFrente();
  delay(5000);
  motores.girar90Esq();
  motores.emFrente();
  delay(1250);

   while(!sensoresLinha.pppp()){
      sensoresLinha.atualizarSensoresRefletancia();
      
      if(sensoresLinha.desalinhou_direita()){
         motores.esquerda();
      }
      else if(sensoresLinha.desalinhou_esquerda()){
         motores.direita();
      }
      else{
      motores.paraTras();
      }
  }
  motores.emFrente();
  delay(1000);
  motores.girar90Dir();
}

void Estrategia::executar(){
  
  sonar.atualizarSensorSonar();
  
  if(sonar.getSensorSonar() <= 7){
    desviarObstaculo();
  }
  else{
    seguirLinha();
  }
}
