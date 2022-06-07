// Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
//quantidade de números negativos e a soma dos números positivos desse vetor.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	
  	int A[10], soma=0, contador;
  	int i;
  	
	for(i = 0; i<10; i++){
		printf("Digite o valor de %d : ", (i+1));
	    scanf("%d",&A[i]);
	    if(A[i] %2 == 1){
	    contador++;
		}else{
			soma+= A[i];
		}
	}
	
	printf("___________________________________________\n\n");
    printf("----------Mostrando numeros----------\n");
    printf("___________________________________________\n\n");
    
    printf("\n\n A Quantidade de números negativos foi: %d .\n A soma dos números positivos foi: %d.\n", contador, soma);

	
 return 0;
}
