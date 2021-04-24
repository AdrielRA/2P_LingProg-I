#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio2.h>

void func003() {

	int idade = 0, batimentos = 0, i;

	textbackground(RED);
    textcolor(YELLOW);
    printf("========================================\n");
    printf("         BATIMENTOS CARDÍACOS           \n");
    printf("========================================\n");
    textbackground(LIGHTRED);
    for(i = 0; i < 3; i++){
        printf("                                        \n");
    }
    textbackground(RED);
    for(i = 0; i < 5; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTRED);

    gotoxy(2,5);
	printf("Informe sua idade: ");
	scanf("%d", &idade);

	batimentos = idade * 365 * 24 * 60 * 60;

	textbackground(RED);
    printf("\n========================================\n\n");
	printf(" Seu coração bateu aproximadamente\n %d vezes desde que nasceu!\n", batimentos);
	printf("\n========================================\n");

	textbackground(BLACK);
    textcolor(WHITE);

	system("pause");
}
