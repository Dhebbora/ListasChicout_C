// Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	int A[5];
  	int numMaior=0, numMenor = 9999;
  	int posicaoMenor = 0, posicaoMaior = 0;
  	int i;
  	
	for(i = 0; i< 5; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	}
	
	for(i = 0; i < 5; i++){
		if(numMenor > A[i]){
			numMenor = A[i];
			posicaoMenor= i+1;
		}
        if(numMaior<A[i]){
            numMaior=A[i];
            posicaoMaior= i+1;
        }
    }
    printf("\n\nA posição do número menor foi:  %d\n", posicaoMenor);
    printf("A posição do número maior foi:  %d\n", posicaoMaior);
    
 return 0;
}
