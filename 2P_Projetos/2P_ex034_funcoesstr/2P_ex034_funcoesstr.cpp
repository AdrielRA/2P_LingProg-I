#define _CRT_SECURY_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdio.h>
void main()
{
	// A vari�vel TEXTO1 recebe a cadeia de caracteres : PROGRAMA
	char TEXTO1[] = "PROGRAMA";
	// A vari�vel TEXTO2 recebe a cadeia de caracteres: LEGAL
	// Existe um espa�o no in�cio da cadeia TEXTO2
	char TEXTO2[] = " LEGAL";
	char TEXTO3[35], TEXTO4[35];
	// A vari�vel TEXTO5 recebe a cadeia de caracteres : DORES
	char TEXTO5[] = "DORES";
	// A fun��o abaixo copia o conte�do da cadeia TEXTO1 para
	// a cadeia TEXTO3
	strcpy_s(TEXTO3, TEXTO1);
	// A fun��o abaixo concatena as cadeias TEXTO3 e TEXTO2
	strcat_s(TEXTO3, TEXTO2);
	// a linha abaixo concatena a cadeia '' DEMAIS''
	// � cadeia TEXTO3
	strcat_s(TEXTO3, " DEMAIS");
	// Existe um espa�o no in�cio da cadeia '' DEMAIS''
	// Mostra o conte�do da vari�vel TEXTO3
	printf("\nNova cadeia = %s", TEXTO3);
	// A fun��o abaixo copia o conte�do da cadeia TEXTO1 para
	// a cadeia TEXTO4
	strcpy_s(TEXTO4, TEXTO1);
	// A fun��o abaixo concatena os n primeiros
	// caracteres da cadeia TEXTO5 na cadeia TEXTO4
	strncat_s(TEXTO4, TEXTO5, 3);
	// Mostra o conte�do da vari�vel TEXTO4
	printf("\nNova cadeia = %s\n", TEXTO4);
	system("pause");
}