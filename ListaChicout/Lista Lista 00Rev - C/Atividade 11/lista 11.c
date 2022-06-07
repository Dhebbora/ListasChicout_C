// Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em diante)
// e mostrar o número de dias daquele mês daquele ano. Utilizar switch e levar em consideração anos
// bissextos para o cálculo.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int mes, ano, calc, dias=31;

  printf("Digite o mes (de 1 a 12):\n");
  scanf("%d", &mes);
  printf("Digite o ano de 0 D.C. em diante:\n");
  scanf("%d", &ano);

  switch (mes)
  {
  case 2:
    dias -=2;
    break;
  case 4: case 6: case 9: case 11:
    dias--;
    break;
  }

  if(ano % 4 == 0 ){
   printf("%d e um Ano Bissexto\n", ano);
 }else{
   printf("E um ano lindo\n", ano);
 }

   printf("O mes %d possui %d dias", mes, dias);

}