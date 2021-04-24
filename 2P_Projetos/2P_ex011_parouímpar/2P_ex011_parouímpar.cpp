#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


void main() {

	int num;

	printf("========================================\n");
	printf("              PAR OU ÍMPAR              \n");
	printf("========================================\n\n");
	
	printf("Informe um número inteiro:  ");
	scanf("%d", &num);

	printf("\n========================================\n");
	printf("\n O Número %d é: ", num);

	if (num % 2 == 0) {
		printf("PAR");
	}
	else {
		printf("ÍMPAR");
	}

	printf("\n\n========================================\n");

	system("pause");
}
