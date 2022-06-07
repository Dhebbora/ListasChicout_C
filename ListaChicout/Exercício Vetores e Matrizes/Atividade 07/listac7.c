// Escreva um programa que leia 10 nu meros inteiros e os armazene em um vetor.
// Imprima o vetor, o maior elemento e a posição que ele se encontra.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	int A[10];
  	int numMaior= A[0];
  	int i, posicao = 0;
  	
	for(i = 0; i< 10; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	}
	
	for(i = 0; i <10; i++){
        if(numMaior<A[i]){
            numMaior= A[i];
            posicao= i+1;
        }
    }
    printf("  o número maior foi:  %d e a posição dele é %d\n", numMaior, posicao);
    
 return 0;

}