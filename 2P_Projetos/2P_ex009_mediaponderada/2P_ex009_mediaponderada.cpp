#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void main() {

	float trabalho, avaliacao, exame, media;

	printf("========================================\n");
	printf("            CALCULO DE MÉDIAS           \n");
	printf("========================================\n\n");
	
	printf("Trabalho de Laboratório: ");
	scanf("%f", &trabalho);
	printf("Avaliação Semestral:     ");
	scanf("%f", &avaliacao);
	printf("Exame Final:             ");
	scanf("%f", &exame);

	media = ((trabalho * 2) + (avaliacao * 3) + (exame * 5)) / 10;

	printf("========================================\n");
	printf("Média ponderada: %.2f pts.\n", media);
	printf("CONCEITO: ");

	if (media >= 0 && media < 5) {
		printf("E");
	}
	else if (media < 6) {
		printf("D");
	}
	else if (media < 7) {
		printf("C");
	}
	else if (media < 8) {
		printf("B");
	}
	else if (media <= 10) {
		printf("A");
	}
	else {

		printf("INDEFINIDO!");
	}

	printf("\n========================================\n");

	system("pause");
}
