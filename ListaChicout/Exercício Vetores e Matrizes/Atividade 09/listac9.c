//Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	
  	int A[10], B=0;
  	int i;
  	
	for(i = 0; i< 10; i++){
		printf("*************** Digite apenas número PAR ***************\n\n");
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(A[i] % 2 == 0){
			B += 1;
		}else{
			printf("Não podemos continuar você digitou um número impar... sinto muito baby!");
			return 0;
		}
	}
	printf("___________________________________________\n\n");
    printf("--------Mostrando 6 numeros inteiros--------\n");
    printf("___________________________________________\n\n");
   
   for(i=9; i>=0; i--) {
    printf("%d = %d\n",i, A[i]);
   }
	
 return 0;
}