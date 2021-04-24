#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <conio2.h>

#define METRO 15.5;
#define AUTOR "Adriel Ricardo";

void func001() {

	setlocale(LC_ALL, "Portuguese");
    textbackground(WHITE);
    textcolor(BLACK);
    printf("========================================\n");
    printf("          DECLARANDO VARIÁVEIS          \n");
    printf("========================================\n");
    printf("                                        \n");

	int contador = 10;
	float numero_1 = 0.5, numero_2 = 7.2;
	char sexo[0] = "M";
	char cidade[40] = "Elói Mendes";

	printf(" Escrevendo variáveis:                  \n");
	printf("                                        \n");
	textbackground(LIGHTGRAY);
	printf(" int contador = %d                      \n", contador);
	textbackground(WHITE);
	printf(" float numero_1 = %.2f                  \n", numero_1);
	textbackground(LIGHTGRAY);
	printf(" float numero_2 = %.2f                  \n", numero_2);
	textbackground(WHITE);
	printf(" char sexo[0] = %c                       \n", sexo[0]);
	textbackground(LIGHTGRAY);
	printf(" char cidade[40] = %s          \n", cidade);
	textbackground(WHITE);
	printf("                                        \n");

	textbackground(BLACK);
    textcolor(WHITE);

	system("pause");
}
