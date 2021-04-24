#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(void) {

	float trabalho, avaliacao, exame, media;

	setlocale(LC_ALL, "Portuguese");

	system("cls");
	printf("______________________________\n");
	printf("      CALCULO DE MÉDIAS:      \n");
	printf("______________________________\n");

	printf("Trabalho de Laboratório: ");
	scanf("%f", &trabalho);

	printf("Avaliação Semestral: ");
	scanf("%f", &avaliacao);

	printf("Exame Final: ");
	scanf("%f", &exame);

	media = ((trabalho * 2) + (avaliacao * 3) + (exame * 5)) / 10;

	system("cls");
	printf("Média ponderada: %.2f\n\n", media);

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


	printf("\n\n");

	system("pause");
	return EXIT_SUCCESS;
}
