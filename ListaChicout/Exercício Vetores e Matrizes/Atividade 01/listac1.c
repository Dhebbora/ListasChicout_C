// Faça um programa que possua um vetor denominado A que armazene 6 números
// inteiros. O programa deve executar os seguintes passos:
// (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
// (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
// (c) Modifique o vetor na posição 4, atribuindo a esta posição valor 100.
// (d) Mostre na tela cada valor do vetor A, um em cada linha.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;
    int i;

    soma = A[0] + A[1] + A[5];
    printf ("\n A soma  entre as posições A[0], A[1] e A[5] é: %d\n", soma);

    A[4] = 10;
	printf("\n O valor da  posição A[4] recebeu: %d\n\n", A[4]);
	
	for(i=0; i<A[6]; i++){
		printf(" A[%d] = %d\n",i, A[i]);
	}
}
