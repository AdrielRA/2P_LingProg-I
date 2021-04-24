#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void main() {

	int idade = 0, batimentos = 0, i;

	printf("========================================\n");
	printf("         BATIMENTOS CARDÍACOS           \n");
	printf("========================================\n\n");
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);

	batimentos = idade * 365 * 24 * 60 * 60;
	
	printf("\n========================================\n\n");
	printf(" Seu coração bateu aproximadamente\n %d vezes desde que nasceu!\n", batimentos);
	printf("\n========================================\n");

	system("pause");
}
