// (Cortesia do Prof. Bogdan Tomoyuki Nassu) Escreva um programa que receba a velocidade
// máxima em uma avenida e a velocidade com que um motorista estava dirigindo nela. Calcule a
// multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada km/h que
// estiver acima da velocidade permitida (considere apenas números inteiros). Se a velocidade
// do motorista estiver dentro do limite, o programa deve informar que não há multa.

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int velAven, velMotor, calcMulta;
  float valorMulta;

  printf("Qual a velocidade maxima da avenida:");
  scanf("%d", &velAven);
  printf("Qual a velocidade que voce estava dirigindo?:");
  scanf("%d", &velMotor);

  if(velAven < velMotor){
    calcMulta =  velMotor - velAven;
    valorMulta = calcMulta * 5;

    printf (" Ta pensando que carro e foguete? tome uma multa %.2f", valorMulta);
  }else{
    printf ("Lindo, sabe dirigir bem, anjinho na estrada");
  }
}