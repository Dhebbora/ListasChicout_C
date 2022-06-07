//Fazer um programa que recebe 3 valores não inteiros do usuário e mostra
//o maior deles, o menor deles e o valor intermediário.

#include <stdio.h>
#include <stdlib.h>

int main(){

 float num1, num2, num3, maior, menor, intermedio;

  printf("Digite um valor nao inteiro:");
  scanf("%f", &num1);
  printf("Digite um segundo valor nao inteiro:");
  scanf("%f", &num2);
  printf("Digite um terceiro valor nao inteiro:");
  scanf("%f", &num3);


  if(num1 >= num2){
    if(num2 >= num3){
      maior = num1;
      menor = num3;
      intermedio = num2;
    }else{
      maior = num1;
      menor = num2;
      intermedio = num3;
    }
  };

  if(num2 >= num1){
    if(num1 >= num3){
      maior = num2;
      menor = num3;
      intermedio = num1;
    }else{
      maior = num2;
      menor = num1;
      intermedio = num3;
    } 
  };

  if(num3 >= num1){
    if(num1 >= num2){
      maior = num3;
      menor = num2;
      intermedio = num1;
    }else{
      maior = num3;
      menor = num1;
      intermedio = num2;
    }
  };

  printf("\n\nMaior = %.2f\n\nMenor = %.2f\n\nIntermedio = %.2f", maior, menor, intermedio); 
}