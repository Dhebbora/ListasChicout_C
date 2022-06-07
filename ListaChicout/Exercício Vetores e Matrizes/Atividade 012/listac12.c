// Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a média dos valores.

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
	float mediaGeral=0;
  	int i;
  	
	for(i = 0; i< 5; i++){
		printf("Digite o %d valor: ", (i+1));
	    scanf("%d",&A[i]);
	    
	    mediaGeral+=A[i];
	}
	
	for(i = 0; i < 5; i++){
		if(numMenor > A[i]){
			numMenor = A[i];
		}
        if(numMaior<A[i]){
            numMaior=A[i];
        }
    }
    printf("\n \no número menor foi:  %d\n", numMenor);
    printf("  o número maior foi:  %d\n", numMaior);
    printf("A média  geral é: %f", mediaGeral/5);
    
 return 0;
}
