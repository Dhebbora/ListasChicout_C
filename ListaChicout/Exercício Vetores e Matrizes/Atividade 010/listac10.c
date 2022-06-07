//Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>

int main(){

	setlocale(LC_ALL, "Portuguese");

  	
  	float A[15], mediaGeral=0;
  	int i;
  	
	for(i = 0; i< 15; i++){
		printf("Digite a nota do aluno %d : ", (i+1));
	    scanf("%f",&A[i]);
	    
	    mediaGeral += A[i];
	}
	
	printf("___________________________________________\n\n");
    printf("----------Mostrando A média geral----------\n");
    printf("___________________________________________\n\n");
    
    printf("A média  geral é: %f", mediaGeral/15);

	
 return 0;
}