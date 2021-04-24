#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

void func008() {

	char nome[30];
	int idade;
	float peso, altura, imc;

	bool condicao = true;

	printf("========================================\n");
	printf("              CÁLCULO IMC               \n");
	printf("========================================\n\n");
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	nome[strlen(nome)] = '\0';

	printf(" Informe sua idade: ");
	scanf("%d", &idade);

	printf(" Informe seu peso: ");
	scanf("%f", &peso);

	printf(" Informe sua altura: ");
	scanf("%f", &altura);

	imc = peso / pow(altura, 2);

	printf("\n========================================\n");
	printf("\n %s, com %d anos e IMC = %.2f\n Você está: ", nome, idade, imc);

	if (imc < 17) { printf("Muito Abaixo do Peso!"); }
	else if (imc >= 17 && imc <= 18.49) { printf("Abaixo do Peso!"); }
	else if (imc >= 18.5&&imc <= 24.99) { printf("Com o Peso Normal!"); }
	else { printf("Acima do Peso!"); }

	printf("\n\n========================================\n");

	system("pause");

}
