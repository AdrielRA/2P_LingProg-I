#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void main() {

	int i;
	float N1 = 0.0, N2 = 0.0, H = 0.0;

	printf("========================================\n");
	printf("          CALCULO DA HIPOTENUSA         \n");
	printf("========================================\n\n");

	printf("Informe o lado maior: ");
	scanf("%f", &N1);
	printf("Informe o lado menor: ");
	scanf("%f", &N2);

	while (N2 > N1) {
		printf("Informe o lado menor: ");
		scanf("%f", &N2);
	}

	H = sqrt(pow(N1, 2) + pow(N2, 2));

	printf("========================================\n");
	printf(" A Hipotenusa de %.2f e %.2f é %.2f\n", N1, N2, H);
	printf("========================================\n");

	system("pause");
}
