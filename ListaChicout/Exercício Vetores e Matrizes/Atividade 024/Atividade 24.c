// Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o
// número do aluno e o segundo representando a sua altura em metros. Encontre o
// aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto,
// juntamente com suas alturas.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>


int main() {

    setlocale(LC_ALL, "Portuguese");

    int A[10];
    float B[5];
    float aluno_Baixo =9999, aluno_Alto =0000;
	int i, j, posicao;
    
    printf(" Digite o número do aluno: \n");
    for (i = 0; i < 5; i++) {
    	printf("Aluno %d de 10: ", (i+1));
        scanf("%d", &A[i]);
    }
    
    printf("\n\n Digite a altura do aluno: \n");
     for (i = 0; i < 5; i++) {
    	printf("Altura do aluno %d de 10: ", (i+1));
        scanf("%f", &B[i]);
    }


    printf("\n\n-------------------Resultado---------------\n\n");

    printf("\nProduto escalar: \n");
    for (i = 0; i < 5; i++) {
        if( aluno_Baixo > B[i]){
            aluno_Baixo = B[i];
            posicao = A[i]++;
        }
        if( aluno_Alto < B[i]){
            aluno_Alto = B[i];
            posicao = A[i]++;
        }
    }

    printf("O aluno mais alto é o de número : %d com sua altura de %2.f", posicao, aluno_Alto);

    return 0;
}