#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


void main() {

	float n1, n2;

	printf("========================================\n");
	printf("             MOSTRA O MAIOR             \n");
	printf("========================================\n\n");
	
	printf("Informe um número:  ");
	scanf("%f", &n1);

	printf(" Agora Outro número: ");
	scanf("%f", &n2);
	printf("\n========================================\n");
	printf("\n O Maior número digitado foi: ");

	if (n1 > n2) {
		printf("%.2f", n1);
	}
	else if (n1 < n2) {
		printf("%.2f", n2);
	}
	else {
		printf("NENHUM, são iguais!");
	}
	printf("\n\n========================================\n");
	system("pause");
}
