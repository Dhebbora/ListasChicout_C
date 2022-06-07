// Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua
// média (que pode não ser inteira).

#include <stdio.h>
#include <stdlib.h>

int main(){
  float num1, num2, num3, soma, media;

  printf("Digite um numero:");
  scanf("%f", &num1);

  printf("Digite um segundo numero:");
  scanf("%f", &num2);

  printf("Digite um terceiro numero:");
  scanf("%f", &num3);

  soma = num1 + num2 + num3;
  media = soma / 3;

  printf("A media dos numeros digitados e: %2.f", media);
}