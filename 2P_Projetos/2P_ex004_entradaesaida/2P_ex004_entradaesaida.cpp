#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	char ch = '%', ch2 = '"';
	int i;

	printf("========================================\n");
	printf("             ENTRADA E SAIDA            \n");
	printf("========================================\n\n");
	
	printf(" Função de saida: printf();\n");
	printf(" Função de entrada: scanf()\n\n;");
	printf(" Escrevendo variáveis:\n");
	printf(" printf(%cVariavel %ctipo%c,nome_variavel);\n\n", ch2, ch, ch2);
	printf(" Lendo variáveis:\n");
	printf(" scanf(%c%ctipo%c,&nome_variavel);\n\n", ch2, ch, ch2);
	printf(" Tipos de variáveis:\n");
	printf(" %cd : inteiro\n", ch);
	printf(" %cf : float\n", ch);
	printf(" %cc : char\n", ch);
	printf(" %cs : cadeia de caracteres\n\n", ch);

	system("pause");

}
