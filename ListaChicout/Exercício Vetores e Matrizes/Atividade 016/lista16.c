// Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
// código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na
// ordem direta; se for 2, mostre o vetor na ordem inversa. Caso o código for diferente de
// 1 e 2 escreva uma mensagem informando que o código é invalido.

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
	}

    printf("Sala secreta, escolha um código 0, 1 ou 2: ");
	    scanf("%d",&B);

    do{
        if(B == 1){
            for(i=0; i < 5; i++){
                printf("%i ", A[i]);
            }
        }
        
        if(B == 2){
            for (i=5; i > 0; i--){
                printf ("%i ", A[i-1]);
            }
        }

    } while(B == 0);
 return 0;

}