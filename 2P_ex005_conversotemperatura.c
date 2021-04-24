#include <stdlib.h>
#include <stdio.h>
#include <conio2.h>

void func005() {

    float F, C;
    int i;

	textbackground(BLUE);
    textcolor(WHITE);
    printf("========================================\n");
    printf("        CONVERSOR DE TEMPERATURA        \n");
    printf("========================================\n");
    textbackground(LIGHTBLUE);
    for(i = 0; i < 3; i++){
        printf("                                        \n");
    }
    textbackground(BLUE);
    for(i = 0; i < 6; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTBLUE);

    gotoxy(2,5);
    printf("Informe a temperatura em ºF: ");
    scanf("%f", &F);

    C = (5*F-160)/9;

    textbackground(BLUE);
    printf("\n========================================\n");
    printf("\n A temperatura em ºC é: %.2f\n", C);
    printf("\n========================================\n");

    textbackground(BLACK);
    textcolor(WHITE);

	system("pause");

}
