// Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais.
// O programa deve retornar o resultado da operação recebida sobre estes dois números.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int fazSoma(int a, int b)
{
  int soma;
  soma = a + b;
  return soma;
};
int fazSubtracao(int a, int b)
{
  int subtrair;
  subtrair = a - b;
  return subtrair;
};
int fazMultiplicacao(int a, int b)
{
  int multip;
  multip = a * b;
  return multip;
};
int fazDivisao(int a, int b)
{
  int divid;
  divid = a / b;
  return divid;
};

int main()
{

  setlocale(LC_ALL, "Portuguese");
  char opcao;
  int num1, num2;

  printf("1: Soma (+) | 2: Subtracao (-) | 3: Multiplicacao (*) | 4: Divisao (/) | 5: Sair (x) \n");
  printf("Escolha a opcao: \n");
  scanf("%c", &opcao);

  if (opcao == 'x')
  {
    printf("Ate a proxima!!");
    return 0;
  };

  printf("Digite um numero que deseja fazer o calculo:\n");
  scanf("%d", &num1);
  printf("Digite um segundo numero:\n");
  scanf("%d", &num2);

  if (opcao == '+')
  {
    printf("A soma deu: %d", fazSoma(num1, num2));
  }
  if (opcao == '-')
  {
    printf("A subtracao deu: %d", fazSubtracao(num1, num2));
  }
  if (opcao == '*')
  {
    printf("A multiplicacao deu: %d", fazMultiplicacao(num1, num2));
  }
  if (opcao == '/')
  {
    printf("A Divisao deu: %d", fazDivisao(num1, num2));
  }
}