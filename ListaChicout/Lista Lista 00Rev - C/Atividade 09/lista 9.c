// Fazer um programa para solicitar ao usuário um número entre 0 e 99 e mostrar este
// número por extenso. Se o usuário introduzir um número que não está neste intervalo,
// mostre: "número inválido". Fonte:http://www.bernhard.pro.br/disciplinas/java/ensino/java-L01.pdf

#include<stdio.h>
#include<stdlib.h>

void dezena(int m){
	switch (m)
    {
        case 2 : printf("vinte"); break;
        case 3 : printf("trinta"); break;
        case 4 : printf("quarenta"); break;
        case 5 : printf("cinquenta"); break;
        case 6 : printf("sessenta"); break;
        case 7 : printf("setenta"); break;
        case 8 : printf("oitenta"); break;
        case 9 : printf("noventa"); break;
        break;
    }
}
// Imprime o valor da unidade por extenso (nove, oito...)
void unidade(int m){
	switch (m)
	{
		case 1 : printf("um"); break;
		case 2 : printf("dois"); break;
		case 3 : printf("tres"); break;
		case 4 : printf("quatro"); break;
		case 5 : printf("cinco"); break;
		case 6 : printf("seis"); break;
		case 7 : printf("sete"); break;
		case 8 : printf("oito"); break;
		case 9 : printf("nove"); break;
	}
}

void dezena_complementar(int m){
	switch (m)
	{
		case 0 : printf("Dez"); break;
		case 1 : printf("onze"); break;
		case 2 : printf("doze"); break;
		case 3 : printf("treze"); break;
		case 4 : printf("quartoze"); break;
		case 5 : printf("quinze"); break;
		case 6 : printf("dezesseis"); break;
		case 7 : printf("dezessete"); break;
		case 8 : printf("dezoito"); break;
		case 9 : printf("dezenove"); break;
	}
}

int main(){

     int n, m;
     printf("Digite um numero:\n");

     scanf("%d", &n);
        
     if(n >21){
          m = n/10;
          dezena(m);
          printf(" e ");
          n = n % 10;
          unidade(n);
          return 0;
     }else if((n >10) && (n <20)){
          m = n / 10;
          n = n % 1;
          dezena_complementar(m); 
     }
      unidade(n);
}