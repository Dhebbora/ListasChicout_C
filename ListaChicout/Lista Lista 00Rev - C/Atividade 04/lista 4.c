// Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int entrada, soma, resto;

  printf("Digite um numero:");
  scanf("%d", &entrada);

  if (entrada % 2 == 0){
    printf("numero par:\n %d\n", entrada);
  }
  if (entrada % 2 == 1){
    printf("este numero nao e par e um numero Impar");
  }
}