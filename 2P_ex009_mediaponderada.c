#include <stdbool.h>
#include <conio2.h>
#include <stdlib.h>
#include <stdio.h>

void func009(){

	float trabalho, avaliacao, exame, media;

	textbackground(GREEN);
    textcolor(WHITE);
    printf("========================================\n");
    printf("            CALCULO DE MÉDIAS           \n");
    printf("========================================\n");
    textbackground(LIGHTGREEN);
    for(int i = 0; i < 5; i++){
        printf("                                        \n");
    }
    textbackground(GREEN);
    for(int i = 0; i < 3; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTGREEN);

    gotoxy(2,5);
	printf("Trabalho de Laboratório: ");
	scanf("%f", &trabalho);

	gotoxy(2,6);
	printf("Avaliação Semestral:     ");
	scanf("%f", &avaliacao);

	gotoxy(2,7);
	printf("Exame Final:             ");
	scanf("%f", &exame);

	media = ((trabalho * 2) + (avaliacao * 3) + (exame * 5)) / 10;

	gotoxy(1,9);
	textbackground(GREEN);
	printf("========================================");
	gotoxy(2,10);
	printf("Média ponderada: %.2f pts.", media);
	gotoxy(2,11);
	printf("CONCEITO: ");

	if (media >= 0 && media < 5) {
		printf("E");
	}
	else if (media < 6) {
		printf("D");
	}
	else if (media < 7) {
		printf("C");
	}
	else if (media < 8) {
		printf("B");
	}
	else if (media <= 10) {
		printf("A");
	}
	else {

		printf("INDEFINIDO!");
	}


	gotoxy(1,12);
	printf("========================================\n");
	textbackground(BLACK);
    textcolor(WHITE);

	system("pause");
}
