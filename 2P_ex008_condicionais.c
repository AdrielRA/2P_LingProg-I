#include <stdbool.h>
#include <stdlib.h>
#include <conio2.h>
#include <stdio.h>
#include <math.h>

void func008() {

    char nome[30];
    int idade;
    float peso, altura, imc;

    bool condicao = true;

	textbackground(RED);
    textcolor(YELLOW);
    printf("========================================\n");
    printf("              CÁLCULO IMC               \n");
    printf("========================================\n");
    textbackground(YELLOW);
    for(int i = 1; i < 7; i++){printf("                                        \n");}
    textbackground(RED);
    for(int i = 1; i < 7; i++){printf("                                        \n");}
    textbackground(YELLOW);
    textcolor(BLACK);

    gotoxy(2,5);
    printf("Informe seu nome: ");
    scanf("%s", &nome);
    nome[strlen(nome)]='\0';

    printf(" Informe sua idade: ");
    scanf("%d", &idade);

    printf(" Informe seu peso: ");
    scanf("%f", &peso);

    printf(" Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura,2);

    textbackground(RED);
    textcolor(YELLOW);
    printf("\n========================================\n");
    printf("\n %s, com %d anos e IMC = %.2f\n Você está: ", nome, idade, imc);

    if(imc<17){printf("Muito Abaixo do Peso!");}
    else if(imc>=17&&imc<=18.49){printf("Abaixo do Peso!");}
    else if(imc>=18.5&&imc<=24.99){printf("Com o Peso Normal!");}
    else {printf("Acima do Peso!");}

    printf("\n\n========================================\n");

    textbackground(BLACK);
    textcolor(WHITE);

	system("pause");

}
