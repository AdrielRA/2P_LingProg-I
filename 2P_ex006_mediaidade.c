#include <stdlib.h>
#include <stdio.h>
#include <conio2.h>

void func006() {

    char nome1[15], nome2[15], nome3[15];
    int idade1, idade2, idade3;
    float peso1, peso2, peso3;

	textbackground(WHITE);
    textcolor(BLACK);
    printf("========================================\n");
    printf("               MÉDIA PESOS              \n");
    printf("========================================\n");
    textbackground(LIGHTGRAY);
    for(int i = 1; i < 8; i++){
        printf("                                        \n");
    }
    textbackground(WHITE);
    for(int i = 1; i < 13; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTGRAY);

    gotoxy(1,5);
    printf(" DADOS DA 1ª PESSOA:\n");
    printf("==================\n");
    printf(" Informe seu nome: ");
    scanf(" %s", &nome1);
    printf(" Informe sua idade: ");
    scanf("%d", &idade1);
    printf(" Informe seu peso: ");
    scanf("%f", &peso1);

    gotoxy(1,5);
    for(int i = 1; i < 6; i++){
        printf("                                        \n");
    }
    gotoxy(1,5);
    printf(" DADOS DA 2ª PESSOA:\n");
    printf("==================\n");
    printf(" Informe seu nome: ");
    scanf(" %s", &nome2);
    printf(" Informe sua idade: ");
    scanf("%d", &idade2);
    printf(" Informe seu peso: ");
    scanf("%f", &peso2);

    gotoxy(1,5);
    for(int i = 1; i < 6; i++){
        printf("                                        \n");
    }
    gotoxy(1,5);
    printf(" DADOS DA 3ª PESSOA\n");
    printf("==================\n");
    printf(" Informe seu nome: ");
    scanf(" %s", &nome3);
    printf(" Informe sua idade: ");
    scanf("%d", &idade3);
    printf(" Informe seu peso: ");
    scanf("%f", &peso3);

    textbackground(WHITE);
    printf("\n========================================\n");
    printf("\n Nome: %s, idade: %d, peso: %.2f", nome1, idade1, peso1);
    printf("\n Nome: %s, idade: %d, peso: %.2f", nome2, idade2, peso2);
    printf("\n Nome: %s, idade: %d, peso: %.2f\n", nome3, idade3, peso3);
    printf("\n========================================\n");
    printf("\n Média de pesos: %.2f\n",(peso1+peso2+peso3)/3);
    printf("\n========================================\n");

    textbackground(BLACK);
    textcolor(WHITE);

	system("pause");

}
