#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


void main() {

	int num;

	printf("========================================\n");
	printf("              PAR OU �MPAR              \n");
	printf("========================================\n\n");
	
	printf("Informe um n�mero inteiro:  ");
	scanf("%d", &num);

	printf("\n========================================\n");
	printf("\n O N�mero %d �: ", num);

	if (num % 2 == 0) {
		printf("PAR");
	}
	else {
		printf("�MPAR");
	}

	printf("\n\n========================================\n");

	system("pause");
}
