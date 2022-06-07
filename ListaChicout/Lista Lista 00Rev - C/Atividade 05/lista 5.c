// Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar
// se estes valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o
// triângulo é equilátero, isósceles ou escaleno.

#include <stdio.h>
#include <stdlib.h>

int main(){

  int lado1, lado2, lado3;

  printf("Digite um valor inteiro:");
  scanf("%d", &lado1);

  printf("Digite um segundo valor inteiro:");
  scanf("%d", &lado2);

  printf("Digite um terceiro valor inteiro:");
  scanf("%d", &lado3);
 
 if((lado1 == lado2) && (lado2 == lado3)){
   printf("Olha que massa voce criou um triangulo EQUILATERO, os tres lados iguais");
 }
 if((lado1 == lado2)&&(lado1!=lado3)||(lado1!=lado2)&& (lado1 == lado3)){
   printf("Olha que legal voce criou um triangulo ISOSCELES, dois lados iguais e um diferente");
 }
 if((lado1 != lado2) && (lado1 != lado3)){
   printf("Eita que TOP voce criou um triangulo ESCALENO, os tres lados diferentes");
 }
}