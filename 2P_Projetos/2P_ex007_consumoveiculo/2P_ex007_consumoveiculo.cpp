#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	float distancia, tempo, velocidade;

	printf("========================================\n");
	printf("             CONSUMO VEÍCULO            \n");
	printf("========================================\n\n");

	printf("Informe tempo em horas da viagem  : ");
	scanf("%f", &tempo);
	printf("Informe a velocidade média em km/h: ");
	scanf("%f", &velocidade);

	distancia = tempo * velocidade / 12;

	printf("\n========================================\n");
	printf("\n O consumo desse veiculo nessa viagem\n é de: %.2f litros!\n", distancia);
	printf("\n========================================\n");

	system("pause");

}
