// Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são
// o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta
// nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h
// há um bônus de 100% para essas horas.

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int sal;
  int horasSem, diasSem, calcHorasDias, calcHorasSemanais;

  printf("Qual o seu salario:");
  scanf("%d", &sal);
  printf("Quantas horas trabalhadas no dia:");
  scanf("%d", &horasSem);
  printf("Quantos dias na semana voce trabalha:");
  scanf("%d", &diasSem);

  calcHorasDias = sal / horasSem;
  printf("o valor da sua hora e %.d\n", calcHorasDias);

  calcHorasSemanais = diasSem * horasSem;
  printf("Horas trabalhadas durante a semana: %d\n", calcHorasSemanais);

  if (calcHorasSemanais == 40){
    printf("Voce nao tem adicionais:");
  }else if((calcHorasSemanais>=40) &&(calcHorasSemanais<=60)){
    printf("voce recebe um bonus de 50 porcento:");
  }else{
    if(calcHorasSemanais>=60){
    printf("voce recebe um bonus de 100 porcento:");
    }
  }
}