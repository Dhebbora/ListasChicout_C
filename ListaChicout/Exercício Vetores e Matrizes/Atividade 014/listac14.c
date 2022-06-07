// Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	int A[10];
  	int numIgual=0;
  	int posicao = 0;
  	int i, j;
  	
	for(i = 0; i< 5; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	}
	
	for(i = 0; i < 5; i++){
		for(j = i+1; j < 5; j++)
		if(A[j] == A[i]){
			numIgual = A[i];
			posicao= i+1;
			printf("\n\nExiste números iguais com o valor de:  %d, exclua a posicao %d para não ter números repetidos\n", numIgual, posicao );
		}
    }
 return 0;
}
