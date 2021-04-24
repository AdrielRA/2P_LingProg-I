#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	char nome1[15], nome2[15], nome3[15];
	int idade1, idade2, idade3;
	float peso1, peso2, peso3;

	printf("========================================\n");
	printf("               MÉDIA PESOS              \n");
	printf("========================================\n\n");
	
	printf(" DADOS DA 1ª PESSOA:\n");
	printf("==================\n");
	printf(" Informe seu nome: ");
	scanf(" %s", &nome1);
	printf(" Informe sua idade: ");
	scanf("%d", &idade1);
	printf(" Informe seu peso: ");
	scanf("%f", &peso1);

	printf("\n DADOS DA 2ª PESSOA:\n");
	printf("==================\n");
	printf(" Informe seu nome: ");
	scanf(" %s", &nome2);
	printf(" Informe sua idade: ");
	scanf("%d", &idade2);
	printf(" Informe seu peso: ");
	scanf("%f", &peso2);

	printf("\n DADOS DA 3ª PESSOA\n");
	printf("==================\n");
	printf(" Informe seu nome: ");
	scanf(" %s", &nome3);
	printf(" Informe sua idade: ");
	scanf("%d", &idade3);
	printf(" Informe seu peso: ");
	scanf("%f", &peso3);

	printf("\n========================================\n");
	printf("\n Nome: %s, idade: %d, peso: %.2f", nome1, idade1, peso1);
	printf("\n Nome: %s, idade: %d, peso: %.2f", nome2, idade2, peso2);
	printf("\n Nome: %s, idade: %d, peso: %.2f\n", nome3, idade3, peso3);
	printf("\n========================================\n");
	printf("\n Média de pesos: %.2f\n", (peso1 + peso2 + peso3) / 3);
	printf("\n========================================\n");

	system("pause");

}
