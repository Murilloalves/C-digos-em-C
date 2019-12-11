#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	char nome[100];
	int idade;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	printf("\n%s", nome);
	printf("\n%d", idade);
	printf("\n");
	system("pause"); 
	return 0;
}
