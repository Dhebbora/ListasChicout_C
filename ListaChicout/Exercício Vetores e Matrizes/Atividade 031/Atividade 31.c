// Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
// união entre os 2 vetores anteriores, ou seja, que contém os números dos dois vetores.
// Não deve conter nu ́meros repetidos.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

#define FLUSHBUFFER while(getchar()!='\n');
int numero_de_linhas(void){
    int linhas=0;
    printf("Insira o numero de linhas: ");
    scanf("%d", &linhas);
    FLUSHBUFFER;
    if(linhas<1) return numero_de_linhas();
    return linhas;
  }

int fatorial(int aux, int n, int limit){
    if(n>limit) return fatorial(aux*n, n-1, limit);
    return aux;
  }
int binomio_de_newton(int n, int p){
    int bnewton;
    bnewton = fatorial(1, n, p)/fatorial(1, n-p, 1);
    return bnewton;
  }
int triangulo_de_pascal(int n, int i, int j){
    if(i<n){
        if(j<=i){
            printf("%d ", binomio_de_newton(i, j));
            return triangulo_de_pascal(n, i, j+1); }
        printf("\n");
        return triangulo_de_pascal(n, i+1, j=0); }
    return 0;
  }
int main(void){
    int linhas;
    linhas = numero_de_linhas();
    triangulo_de_pascal(linhas, 0, 0);
    printf("\n");
    getchar();
    return 0; 
  }
