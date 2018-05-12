#include <Stepper.h> 

const int stepsPerRevolution = 500; 
 
//Inicializa a biblioteca utilizando as portas de 8 a 11 para 
//ligacao ao motor 
Stepper myStepper(stepsPerRevolution, 8,10,9,11); 
 
void setup() 
{ 
 //Determina a velocidade inicial do motor 
 myStepper.setSpeed(70);
} 
 
void loop() 
{ 
 //Gira o motor no sentido horario a 90 graus
 for (int i = 0; i<=360; i++)
 {
 myStepper.step(-1*i);
 delay(100);
}
}

