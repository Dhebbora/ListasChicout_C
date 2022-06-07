// Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.

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
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(A[i] % 2 == 0){
			B += 1;
		}
	}
		printf("a quantidade de números pares são: %d\n", B);
	
 return 0;

}