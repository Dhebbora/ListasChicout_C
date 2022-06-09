// Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
// naturais que não são múltiplos de 7 ou que terminam com 7.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main() {

    setlocale(LC_ALL, "Portuguese");

	int A[100]; 
    int i, calc=0;
    
    for(i=0; i < 100; i++){    
        printf("\n %d : ", i);
        if(A[i] % 7 == 0){
        	calc = A[i];
		}
		if(A[i] % 7 == 1){
        printf("\n O numero %d não é  multiplos de sete:", calc);
		}        
    }
    
    printf("\n Os numeros %d sao multiplos de sete:", calc);
}