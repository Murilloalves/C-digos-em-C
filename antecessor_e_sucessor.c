#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)

{
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite o numero:");
	scanf("%d", &n);
	printf("Antecessor: %d e sucessor: %d\n", n-1,n+1);
	system("pause");
	return 0;
}
