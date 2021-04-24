#include <stdlib.h>
#include <stdio.h>
#include <conio2.h>

void func007() {

    float distancia, tempo, velocidade;

	textbackground(WHITE);
    textcolor(BLACK);
    printf("========================================\n");
    printf("             CONSUMO VEÍCULO            \n");
    printf("========================================\n");
    textbackground(LIGHTGRAY);
    for(int i = 1; i < 5; i++){printf("                                        \n");}
    textbackground(WHITE);
    for(int i = 1; i < 7; i++){printf("                                        \n");}
    textbackground(LIGHTGRAY);

    gotoxy(1,5);
    printf("Informe tempo em horas da viagem  : ");
    scanf("%f", &tempo);
    printf("Informe a velocidade média em km/h: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade / 12;

    textbackground(WHITE);
    printf("\n========================================\n");
    printf("\n O consumo desse veiculo nessa viagem\n é de: %.2f litros!\n", distancia);
    printf("\n========================================\n");

    textbackground(BLACK);
    textcolor(WHITE);

	system("pause");

}
