#include <stdlib.h>
#include <stdio.h>
#include <conio2.h>

void func004() {

    char ch = '%', ch2 = '"';
    int i;

	textbackground(WHITE);
    textcolor(BLACK);
    printf("========================================\n");
    printf("             ENTRADA E SAIDA            \n");
    printf("========================================\n");
    for (i = 0; i < 19; i++){
        printf("                                        \n");
    }

    gotoxy(1,5);
    printf(" Fun��o de saida: printf();\n");
    printf(" Fun��o de entrada: scanf();");
    gotoxy(1,8);
    printf(" Escrevendo vari�veis:");
    gotoxy(1,10);
    printf(" printf(%cVariavel %ctipo%c,nome_variavel);",ch2, ch, ch2);
    gotoxy(1,12);
    printf(" Lendo vari�veis:");
    gotoxy(1,14);
    printf(" scanf(%c%ctipo%c,&nome_variavel);",ch2, ch, ch2);
    gotoxy(1,16);
    printf(" Tipos de vari�veis:");
    gotoxy(1,18);
    printf(" %cd : inteiro\n",ch);
    printf(" %cf : float\n",ch);
    printf(" %cc : char\n",ch);
    printf(" %cs : cadeia de caracteres\n\n",ch);

    textbackground(BLACK);
    textcolor(WHITE);

	system("pause");

}
