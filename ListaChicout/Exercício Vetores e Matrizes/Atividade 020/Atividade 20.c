// Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em
// um vetor com 10 posições. Preencha um segundo vetor apenas com os números
// ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int impares = 0;
	int A[10], B[10];
	int i, num;
	
	printf("_______________________________\n");
	printf("Digite 10 números entre 0 e 50.\n");
	printf("_______________________________\n");
	
	for(i=0; i<10; i++){
		while(1){
			printf("%d de 10: ", i+1);
			scanf("%d", &num);
			if(num > 0 && num <= 50){
	   			break; 
	 		}else{
	   			printf("Opssss, você digitou números maiores que 50 né? Tente novamente.\n");
	  		}
	 	}
	 	
	 	A[i] = num;
	 	
	 	if(num % 2 != 0){
	  		B[impares++] = num;
	 	}
	}
	
	printf("\n\n-------------------Resultado---------------\n");
	printf("\n-------GERAL--------------------Ímpares-------\n\n");
	
	for(i=0; i<10; i++){
		if(i < impares){
			printf("\t%d \t\t\t %d\n", A[i], B[i]);
		}else{
	  		printf("\t%d\n", A[i]);
	 	}
	}
return 0;
}