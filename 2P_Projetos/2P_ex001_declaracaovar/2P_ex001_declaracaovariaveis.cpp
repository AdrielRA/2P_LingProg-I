#define _CRT_SECURE_NO_WARNINGS
#define METRO 15.5
#define AUTOR "Adriel Ricardo"

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

void main() {

	setlocale(LC_ALL, "Portuguese");
	printf("========================================\n");
	printf("          DECLARANDO VARIÁVEIS          \n");
	printf("========================================\n");
	printf("                                        \n");

	int contador = 10;
	float numero_1 = 0.5, numero_2 = 7.2;
	char sexo = 'M';
	char cidade[40] = "Elói Mendes";

	printf(" Escrevendo variáveis:                  \n");
	printf("                                        \n");
	printf(" int contador = %d                      \n", contador);
	printf(" float numero_1 = %.2f                  \n", numero_1);
	printf(" float numero_2 = %.2f                  \n", numero_2);
	printf(" char sexo[0] = %c                       \n", sexo[0]);
	printf(" char cidade[40] = %s          \n", cidade);
	printf("                                        \n");

	system("pause");
}
