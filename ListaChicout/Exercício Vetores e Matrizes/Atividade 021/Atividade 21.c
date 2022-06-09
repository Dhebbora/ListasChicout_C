// Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros
// cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
// do vetor C.


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

    printf("Digite um número: \n");
    for(i=0; i < 10; i++){
        printf("A:");
        scanf("%d",&A[i]);
    }

    for(i=0; i < 10; i++){
        printf("B:");
        scanf("%d",&B[i]);
    }

    printf("\n\n-------------------Resultado---------------\n\n");

    for(i=0; i < 10; i++){
        C[i] = A[i] - B[i]; 
        printf("A[ %d ] - B[ %d ] = C[ %d ] \n",A[i], B[i], C[i]);
    }   
  return 0;
}