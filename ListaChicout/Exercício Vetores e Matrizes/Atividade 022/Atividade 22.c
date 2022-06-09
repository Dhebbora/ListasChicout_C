// Faça um programa que leia dois vetores de 10 posições e calcule outro vetor
// contendo, nas posições pares os valores do primeiro e nas posições ímpares os
// valores do segundo.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>


int main() {

    setlocale(LC_ALL, "Portuguese");

    int A[10], B[10], C[10];
	int i;
    
    printf("Digite 10 números para o 1º vetor\n");
    for (i = 0; i < 10; i++) {
    	printf("%d de 10: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n\n Digite 10 números para o 2º vetor: \n");
    for (i = 0; i < 10; i++) {
    	printf("%d de 10: ", i+1);
        scanf("%d", &B[i]);
    }


printf("\n\n-------------------Resultado---------------\n\n");


    printf("Pares: \n");
    for (i = 0; i < 10; i++) {
    	if(A[i]%2 == 0){
    		printf("%d ", A[i]);
		}	
    }
    printf("\nImpares: \n");
    for (i = 0; i < 10; i++) {
    	if(B[i]%2 == 1){
    		printf("%d ", B[i]);
		}
    }
    printf("\nSoma vetores: \n");
    for (i = 0; i < 10; i++) {
    	C[i] = A[i] + B[i] ;
        printf("%d ", C[i]);
    }

    return 0;
}