#include <stdbool.h>
#include <stdlib.h>
#include <conio2.h>
#include <stdio.h>
#include <math.h>

int soma(int a, int b){
    return a + b;
}

void somar(){

    int num1, num2;

    textbackground(BLUE);
    textcolor(WHITE);
    printf("========================================\n");
    printf("              MENU DA SOMA              \n");
    printf("========================================\n");
    textbackground(LIGHTBLUE);
    for(int i = 0; i < 4; i++){
        printf("                                        \n");
    }
    textbackground(BLUE);
    for(int i = 0; i < 4; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTBLUE);

    gotoxy(2,5);
	printf("Informe o primeiro valor: ");
	scanf("%d", &num1);

	gotoxy(2,6);
	printf("Informe o segundo valor : ");
	scanf("%d", &num2);

    textbackground(BLUE);
	printf("\n========================================\n");
	printf("\n Resultado da soma: %d\n", soma(num1,num2));
	printf("\n========================================\n");

	textbackground(BLACK);
    textcolor(WHITE);

}

void raiz(){

    int raiz1;

    textbackground(BLUE);
    textcolor(WHITE);
    printf("========================================\n");
    printf("              MENU DA RAIZ              \n");
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
	printf("Informe o primeiro valor: ");
	scanf("%d", &raiz1);

    textbackground(BLUE);
	printf("\n========================================\n");
	printf("\n Resultado da raiz: %.2f\n", sqrt(raiz1));
	printf("\n========================================\n");

	textbackground(BLACK);
    textcolor(WHITE);
}


void func012() {

	int menu_op;

	textbackground(BLUE);
    textcolor(WHITE);
    printf("========================================\n");
    printf("              MENU SIMPLES              \n");
    printf("========================================\n");
    textbackground(LIGHTBLUE);
    for(int i = 0; i < 5; i++){
        printf("                                        \n");
    }
    textbackground(BLUE);
    for(int i = 0; i < 7; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTBLUE);

    gotoxy(2,5);

	printf("[ 1 ] Somar Dois Números");
	printf("\n [ 2 ] Raiz Quadrada de um Número");

    gotoxy(2,7);
    textbackground(BLUE);
    printf("\n========================================\n");
	printf("\n Sua opção: ");
	printf("\n\n========================================");
	gotoxy(13,10);
	scanf("%d", &menu_op);

	textbackground(BLACK);
    textcolor(WHITE);

	switch(menu_op){
    case 1:
        clrscr();
        somar();
        break;
    case 2:
        clrscr();
        raiz();
        break;
    default:
        gotoxy(1,14);
        textbackground(RED);
        printf(" Opção inválida!                        ");
        textbackground(BLUE);
        gotoxy(13,10);
        printf("                            ");
        gotoxy(1,16);
        break;
	}

	textbackground(BLACK);
    textcolor(WHITE);

	system("pause");
}
