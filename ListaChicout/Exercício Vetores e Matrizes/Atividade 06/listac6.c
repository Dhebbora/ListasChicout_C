// Faça um programa que receba do usuário um vetor com 10 posições. Em seguida,
//deverá ser impresso o maior e o menor elemento do vetor.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	int A[10];
  	int numMaior=0, numMenor = 9999;
  	int i;
  	
	for(i = 0; i< 10; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(numMenor > A[i]){
			numMenor = A[i];
		}
        if(numMaior<A[i]){
            numMaior=A[i];
        }
    }
    printf(" o número menor foi:  %d\n", numMenor);
    printf("  o número maior foi:  %d\n", numMaior);
    
 return 0;

}