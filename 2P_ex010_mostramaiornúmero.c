#include <stdbool.h>
#include <stdlib.h>
#include <conio2.h>
#include <stdio.h>


void func010(){

	float n1, n2;

	textbackground(MAGENTA);
    textcolor(WHITE);
    printf("========================================\n");
    printf("             MOSTRA O MAIOR             \n");
    printf("========================================\n");
    textbackground(LIGHTMAGENTA);
    for(int i = 0; i < 4; i++){
        printf("                                        \n");
    }
    textbackground(MAGENTA);
    for(int i = 0; i < 6; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTMAGENTA);

    gotoxy(2,5);

	printf("Informe um n�mero:  ");
	scanf("%f", &n1);

	printf(" Agora Outro n�mero: ");
	scanf("%f", &n2);
	textbackground(MAGENTA);
	printf("\n========================================\n");
	printf("\n O Maior n�mero digitado foi: ");

	if (n1 > n2) {
		printf("%.2f",n1);
	}
	else if (n1 < n2) {
		printf("%.2f", n2);
	}
	else {
        gotoxy(2,9);
		printf("NENHUM, s�o iguais!");
        gotoxy(2,8);
	}

    printf("\n\n========================================\n");
	textbackground(BLACK);
    textcolor(WHITE);
	system("pause");
	}
