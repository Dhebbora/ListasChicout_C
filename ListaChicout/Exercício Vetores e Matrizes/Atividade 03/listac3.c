// Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
// das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos
// têm 10 elementos cada. Imprimir todos os conjuntos.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	int i;

  	float A[10], dobro[10];

	for(i = 0; i < 10; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%f",&A[i]);
	}

	for(i = 0; i < 10; i++){
		dobro[i] = A[i] * A[i];
	}


	printf("_________________________________________________________\n\n");
   	printf("--------Primeiro conjunto:---------Segundo Conjunto:-------\n");
    printf("_________________________________________________________\n\n");
	for(i = 0; i < 10; i++){
	 	printf("\t\t %.2f \t\t\t %.2f \n ",A[i],dobro[i]);
	}

 return 0;

}

