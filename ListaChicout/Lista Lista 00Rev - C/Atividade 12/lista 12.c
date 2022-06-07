// (Cortesia do Prof. Bogdan Tomoyuki Nassu) Suponha que você está programando um módulo contador
// de cédulas para caixas eletrônicos. Escreva um programa que informa com quantas cédulas de Real
// podemos representar um dado valor. Exemplo de resposta: R$ 218
// = 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1.
// Procure minimizar o número de cédulas usadas. Desconsidere valores com centavos, e suponha
// que a máquina sempre tem disponíveis as cédulas necessárias.

#include <stdio.h>

int main(){

  int saldo = 0, valor100 = 0, valor10= 0, valor5 = 0, valor2 = 0, valor1 = 0, iCont = 0;

  printf("Digite o valor que deseja: ");
  scanf("%i", &saldo);

  if (saldo >= 100)
  {
    valor100 = saldo / 100;         
    saldo = saldo - 100 * valor100; 
  }

  if (saldo >= 10) 
  {
    valor10 = saldo / 10;         
    saldo = saldo - 10 * valor10; 
  }

  if (saldo >= 5) 
  {
    valor5 = saldo / 5;    
    saldo = saldo - 5 * valor5; 
  }
  if (saldo >= 2) 
  {
    valor2 = saldo / 2;        
    saldo = saldo - 2 * valor2; 
  }
  if (saldo >= 1)
  {
    valor1 = saldo / 1;        
    saldo = saldo - 1 * valor1; 
  }

  if (saldo > 0) // 0
  {
    printf("Impossivel Sacar Esse Valor !");
  }
  else
  {
    printf("Notas de 100 : %i \nNotas de 10 : %i \nNotas de 5 : %i \nNotas de 2 : %i \nNotas de 1 : %i", valor100, valor10, valor5, valor2, valor1);
  }
  return 0;
}
