// Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos
// que são primos e suas respectivas posições no vetor.
  
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

#define VET 10

int main(){
	
    int n[VET],i;
    int d =2; // divisor
    int verifica =1; // verifica se o numero é primo.
    
    for(i=0; i<10 ;i++){
    	printf("\nDigite um numero:");
    	scanf("%d",&n[i]);
    	
        if(n[i] > 1){
        	verifica = 0;
            while(verifica == 1 && d <= n[i] / 2){
                if (n[i] % d  == 0)
                verifica = 0;
                d = d + 1;
            }
        }
    }
    if (verifica == 1){
        printf("%d eh primo.Sua posicao eh %d.\n", n[i], i);
	}
    return 0;   
    system("pause");
}
