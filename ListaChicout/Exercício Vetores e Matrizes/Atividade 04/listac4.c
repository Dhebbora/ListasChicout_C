// Faca um programa que leia um vetor de 8 posições e, em seguida, leia também dois
// valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final, seu
// programa deverá escrever a soma dos valores encontrados nas respectivas posições
// X e Y .

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	int i;
	int soma;
  	float A[10];
  	int X[4], Y[6];

	for(i = 0; i < 10; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%f",&A[i]);
	}
	
	X[4] = A[4];
	Y[6] = A[6];

	printf("\n\n A soma da posição de \n X[4] = %2.f e Y[6] = %2.f \n dentro de A[10] é: %d", A[4], A[6], X[4]+Y[6]);

 return 0;

}