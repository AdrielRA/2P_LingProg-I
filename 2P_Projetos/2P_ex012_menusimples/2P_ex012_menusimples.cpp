#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int soma(int a, int b) {
	return a + b;
}

void somar() {

	int num1, num2;

	printf("========================================\n");
	printf("              MENU DA SOMA              \n");
	printf("========================================\n\n");
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &num1);

	printf("Informe o segundo valor : ");
	scanf("%d", &num2);

	printf("\n========================================\n");
	printf("\n Resultado da soma: %d\n", soma(num1, num2));
	printf("\n========================================\n");
}

void raiz() {

	int raiz1;

	printf("========================================\n");
	printf("              MENU DA RAIZ              \n");
	printf("========================================\n\n");

	printf("Informe o primeiro valor: ");
	scanf("%d", &raiz1);

	printf("\n========================================\n");
	printf("\n Resultado da raiz: %.2f\n", sqrt(raiz1));
	printf("\n========================================\n");
}


void main() {

	int menu_op;

	printf("========================================\n");
	printf("              MENU SIMPLES              \n");
	printf("========================================\n\n");
	
	printf("[ 1 ] Somar Dois Números");
	printf("\n [ 2 ] Raiz Quadrada de um Número");

	printf("\n========================================\n");
	printf("\n Sua opção: ");
	scanf("%d", &menu_op);
	printf("\n========================================\n");


	switch (menu_op) {
	case 1:
		system("cls");
		somar();
		break;
	case 2:
		system("cls");
		raiz();
		break;
	default:
		printf(" Opção inválida!\n\n");
		break;
	}

	system("pause");
}
