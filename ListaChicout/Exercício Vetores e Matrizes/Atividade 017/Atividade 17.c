// Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
// possuírem valores negativos.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	
  	int A[5], B=0;
  	int i;
  	
	for(i = 0; i< 5; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	    
	    if( A[i] % 2 == 1){
	    	A[i] = B;
		}
	}
	printf("\n\n-------------------Resultado---------------\n\n");
	
	for(i = 0; i< 5; i++){
		printf("\t%i", A[i]);
	}
	
 return 0;

}