// Faça um programa que leia um vetor de 10 números. Leia um número x.
// Conte os múltiplos de um número inteiro x num vetor e mostre-os na tela.

int main(){

	setlocale(LC_ALL, "Portuguese");

  	
  	int A[10], B=0, calc=0;
  	int i;
  	
  	for(i = 0; i< 10; i++){
    	printf("Digite o %d valor: ",(i+1));
		scanf("%d",&A[i]);
	}
	printf("Digite um valor X qualquer: ");
	scanf("%d", &B);


	printf("\n\n------------Resultado----------\n\n");
	for(i = 0; i< 10; i++){
		calc = A[i] * B;
 		printf("%d * %d = %d \n",B, A[i], calc );
	}
	
	
 return 0;

}