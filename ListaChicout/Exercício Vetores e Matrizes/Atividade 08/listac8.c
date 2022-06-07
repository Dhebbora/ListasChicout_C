// Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>


int main(){

	setlocale(LC_ALL, "Portuguese");
	
   int i;
   int A[6];
   
   printf("___________________________________________\n\n");
   printf("--------Salvando 6 numeros inteiros--------\n");
    printf("___________________________________________\n\n");
   
   for(i=0; i<6; i++) {
    printf("Digite o %d valor: ", (i+1));
    scanf("%d", &A[i]);
   }

	printf("___________________________________________\n\n");
    printf("--------Mostrando 6 numeros inteiros--------\n");
    printf("___________________________________________\n\n");
   
   for(i=5; i>=0; i--) {
    printf("%d = %d\n",i, A[i]);
   }
   return 0;
}