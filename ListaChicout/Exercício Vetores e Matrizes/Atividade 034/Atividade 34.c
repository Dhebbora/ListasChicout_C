// Faça um programa para ler 10 nu ́meros DIFERENTES a serem armazenados em um
// vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,
// sendo que caso o usuário digite um nu ́mero que já foi digitado anteriormente, o
// programa deverá pedir para ele digitar outro nu ́mero. Note que cada valor digitado
// pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números
// que já foram fornecidos. Exibir na tela o vetor final que foi digitado.


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>


int main(){
int n,i,z;
int vetor [10];

for (i=1;i<10;i++){
    printf("Numero:");
    scanf("%d",&vetor[i]);
    for (z=0;z<i;z++){
        if (vetor[z]==vetor[i]){
            printf("Ja tem\nNumero:");
            scanf("%d",&vetor[z]);
        }
        }
    }
 
    system("cls");
    for (i=0;i<10;i++){
        printf("[%d]",vetor[i]-1);
    }
    return 0;
}