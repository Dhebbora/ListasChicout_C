// Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * i)%(i + 1), sendo
// i, a posição do elemento no vetor. Em seguida imprima o vetor na tela.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	int A[50], B=0, calc=0;
  	int i;
  	
  	for(i = 0; i < 10; i++){
    	printf("Digite o %d valor: ", (i+1));
		scanf("%d", &A[i]);

		calc = (A[i] + 5 * A[i])%(A[i] + 1);
	}
	
    printf("-------------------------------\n");
	printf("------------Resultado----------\n");
    printf("-------------------------------\n");

	printf(" %d \n", calc);

    return 0;

}