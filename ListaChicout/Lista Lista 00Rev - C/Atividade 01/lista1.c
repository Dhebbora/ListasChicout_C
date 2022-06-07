// Fazer um programa para receber do usuário um tempo em segundos, correspondente à
// duração de um evento qualquer (por ex. jogo de futebol)
// calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos

#include <stdio.h>
#include <stdlib.h>

int main(){

  int tempo, hora, minuto, segundo, resto;

  printf("Digite quantos segundos para calcular o tempo do seu evento:");
  scanf("%d", &tempo);


  hora = tempo / 3600;
  resto = tempo % 3600;

  minuto = resto / 60;
  segundo = resto % 60;

  printf("%d:%d:%d \n", hora, minuto, segundo);

}