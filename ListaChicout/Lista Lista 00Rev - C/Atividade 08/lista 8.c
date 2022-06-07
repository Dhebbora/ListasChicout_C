// Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se
// ele está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69)
// ou reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota
// do exame (0 a 100) e informar se o aluno está aprovado (média mais nota do exame maior
// ou igual a 100) ou reprovado (média mais nota do exame menor do que 100).

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  float nota1, nota2, soma, media, exameFinal, mediaExameFinal;
  int opcao;

  printf("Qual a primeira nota do aluno:");
  scanf("%f", &nota1);
  printf("Qual a segunda nota do aluno:");
  scanf("%f", &nota2);

  soma = nota1 + nota2;
  media = soma / 2;

  if(media >= 70){
    printf("Aluno(a) Aprovadissimo(a), parabens! n fez mais que sua obrigacao, nota: %.2f", media);
    return 0;
  }else if(media < 40){
    printf("Aluno(a) reprovado(a), se lascou, mais um semestre estudando, nota: %.2f", media);
    return 0;
  }else if((media>=40)&&(media<=60)){
    printf("Aluno(a) fara exame final, estuda que tu nao e rico(a), nota: %.2f\n", media);
    
    printf("Ja fez o exame final, querido(a)?\n");
    printf("Se fez digite 1 se nao fez ainda digite 2\n");
    scanf("%d", &opcao);

    if(opcao == 2){
      printf("Volte quando fizer o exame final.");
      return 0;
    }

    if(opcao == 1){
      printf("Qual a nota do seu exame final?");
      scanf("%d", &exameFinal);

      mediaExameFinal = media + exameFinal;

        if(mediaExameFinal <= 100){
          printf("Passou querido(a)");
        }
        if(mediaExameFinal >= 100){
          printf("Nao foi dessa vez!");
        }
    }
  }
}