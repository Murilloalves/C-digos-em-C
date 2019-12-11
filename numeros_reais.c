#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main (void)
 
 {
 	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
    printf("Programa dos números reais\n");
 	printf("Digite o primeiro numero :");
 	scanf("%f", &n1);
 	printf("Digite o segundo numero :");
 	scanf("%f", &n2);
 	printf("Numero reais: %.2f e %.2f\n", n1, n2);
 	
 	system("pause");
 	return 0;
} 
