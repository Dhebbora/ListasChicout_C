// Faça um programa que receba 6 nu ́meros inteiros e mostre:
//      • Os números pares digitados;
//      • A soma dos números pares digitados;
//      • Os números ímpares digitados;
//      • A quantidade de números ímpares digitados;

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include <string.h>
#include<string>



int main() {
int num[6],nump[6],sp=0,numi[6],qti=0,i;
   
for (i=0;i<6;i++){
  printf("%iÂ° numero:",i+1);
  scanf("%d",&num[i]);
}
printf("\nNÃºmeros pares digitados:");
for (i=0;i<6;i++){
  if (num[i] %2==0){
    printf("[%d]",num[i]);
    sp =  sp + num[i];
  }
}
printf("\nSoma dos nÃºmeros pares:%d",sp);
printf("\nNÃºmeros Ã­mpares digitados:");  
for (i=0;i<6;i++){
  if (num[i] %2!=0){  
  printf("[%d]",num[i]);
  qti++;     
  }
}
printf("\nQuantidade de Ã­mpares digitados:%d",qti); 
return 0;
}