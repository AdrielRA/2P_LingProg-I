#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	float F, C;
	int i;

	printf("========================================\n");
	printf("        CONVERSOR DE TEMPERATURA        \n");
	printf("========================================\n\n");
	
	printf("Informe a temperatura em ºF: ");
	scanf("%f", &F);

	C = (5 * F - 160) / 9;

	printf("\n========================================\n");
	printf("\n A temperatura em ºC é: %.2f\n", C);
	printf("\n========================================\n");

	system("pause");

}
