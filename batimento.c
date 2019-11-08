#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n1, n2, n3, n4, maior, menor, soma;
	printf("Digite o primeiro valor:\n");
	scanf("%d", &n1);
	printf("Digite o segundo valor:\n");
	scanf("%d", &n2);
	printf("Digite o terceiro valor:\n");
	scanf("%d", &n3);
	printf("Digite o quarto valor:\n");
	scanf("%d", &n4);
	maior = n1;
	menor = n1;
	if (n2<n1 && n3<n1 && n4<n1)
	{
		soma = n2 + n3 + n4;
		printf("A soma entre os três primeiros números é: %d",soma);
	}
	if (n2<n1 && n3<n1)
	{
		soma = n1+n2+n3;
		printf("A soma entre os três primeiros números é: %d",soma);
	}
	if (n2<n1 && n4<n1)
	{
		soma = n1+n2+n4;
		printf("A soma entre os três primeiros números é: %d",soma);
	}
	
		
	

	system("PAUSE");
	return 0;
	
	
}
