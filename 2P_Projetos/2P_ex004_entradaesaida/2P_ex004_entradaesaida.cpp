#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	char ch = '%', ch2 = '"';
	int i;

	printf("========================================\n");
	printf("             ENTRADA E SAIDA            \n");
	printf("========================================\n\n");
	
	printf(" Fun��o de saida: printf();\n");
	printf(" Fun��o de entrada: scanf()\n\n;");
	printf(" Escrevendo vari�veis:\n");
	printf(" printf(%cVariavel %ctipo%c,nome_variavel);\n\n", ch2, ch, ch2);
	printf(" Lendo vari�veis:\n");
	printf(" scanf(%c%ctipo%c,&nome_variavel);\n\n", ch2, ch, ch2);
	printf(" Tipos de vari�veis:\n");
	printf(" %cd : inteiro\n", ch);
	printf(" %cf : float\n", ch);
	printf(" %cc : char\n", ch);
	printf(" %cs : cadeia de caracteres\n\n", ch);

	system("pause");

}
