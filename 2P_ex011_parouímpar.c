#include <stdbool.h>
#include <stdlib.h>
#include <conio2.h>
#include <stdio.h>


void func011() {

	int num;

	textbackground(BLUE);
    textcolor(WHITE);
    printf("========================================\n");
    printf("              PAR OU �MPAR              \n");
    printf("========================================\n");
    textbackground(LIGHTBLUE);
    for(int i = 0; i < 3; i++){
        printf("                                        \n");
    }
    textbackground(BLUE);
    for(int i = 0; i < 4; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTBLUE);

    gotoxy(2,5);

	printf("Informe um n�mero inteiro:  ");
	scanf("%d", &num);

    gotoxy(2,6);
    textbackground(BLUE);
    printf("\n========================================\n");
	printf("\n O N�mero %d �: ", num);

	if (num % 2 == 0) {
		printf("PAR");
	}
	else {
		printf("�MPAR");
	}

	printf("\n\n========================================\n");
	textbackground(BLACK);
    textcolor(WHITE);

	system("pause");
}
