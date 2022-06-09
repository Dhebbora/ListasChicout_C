// Ler dois conjuntos de nu ́meros reais, armazená-los em vetores e calcular o produto
// escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e
// o produto escalar, sendo que o produto escalar é dado por: x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>


int main() {

    setlocale(LC_ALL, "Portuguese");

    int A[5], B[5], C[10];
	int i;
    
    printf("Digite 10 números para o 1º vetor\n");
    for (i = 0; i < 5; i++) {
    	printf("%d de 10: ", (i+1));
        scanf("%d", &A[i]);
    }
    
    printf("\n\n Digite 10 números para o 2º vetor: \n");
    for (i = 0; i < 5; i++) {
    	printf("%d de 10: ", (i+1));
        scanf("%d", &B[i]);
    }


    printf("\n\n-------------------Resultado---------------\n\n");

    printf("\nProduto escalar: \n");
    for (i = 0; i < 5; i++) {
    	C[i] = A[i] * B[i];
        printf("%d ", C[i] + C[i]);
    }

    return 0;
}