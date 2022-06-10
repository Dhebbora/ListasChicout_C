// Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as
// posições com valor zero. Para isso, todos os elementos à frente do valor zero, devem
// ser movidos uma posição para trás no vetor.


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>


#define MAX_TAM 15

int main()
{ 
    int vet[MAX_TAM];
    for(int i = 0; i < MAX_TAM; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    int pos_copia = 0;
    for(int pos_leitura = 0; pos_leitura < MAX_TAM; pos_leitura++)
    {
        if(vet[pos_leitura] == 0)
            continue;

        vet[pos_copia] = vet[pos_leitura];
        pos_copia++;
    }

    printf("\n");
    for(int i = 0; i < pos_copia; i++)
        printf("VetorFinal [%d] = %d\n", i + 1, vet[i]);
}