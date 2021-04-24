#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(void) {

	float n1, n2;

	setlocale(LC_ALL, "Portuguese");

	system("cls");

	printf("______________________________\n");
	printf("         MOSTRA O MAIOR       \n");
	printf("______________________________\n\n");

	printf("Informe um número:  ");
	scanf("%f", &n1);

	printf("Agora Outro número: ");
	scanf("%f", &n2);

	printf("O Maior número digitado foi: ");

	if (n1 > n2) {
		printf("%.2f", n1);
	}
	else if (n1 < n2) {
		printf("%.2f", n2);
	}
	else {
		printf("NENHUM, são iguais!");
	}

	printf("\n\n");
	system("pause");
	return EXIT_SUCCESS;
}