#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


void main() {

	float n1, n2;

	printf("========================================\n");
	printf("             MOSTRA O MAIOR             \n");
	printf("========================================\n\n");
	
	printf("Informe um n�mero:  ");
	scanf("%f", &n1);

	printf(" Agora Outro n�mero: ");
	scanf("%f", &n2);
	printf("\n========================================\n");
	printf("\n O Maior n�mero digitado foi: ");

	if (n1 > n2) {
		printf("%.2f", n1);
	}
	else if (n1 < n2) {
		printf("%.2f", n2);
	}
	else {
		printf("NENHUM, s�o iguais!");
	}
	printf("\n\n========================================\n");
	system("pause");
}
