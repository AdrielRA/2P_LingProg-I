#define _CRT_SECURY_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
void main()
{
	char cadeia1[25], cadeia2[25];
	printf("Digite a primeira cadeia de caracteres: ");
	// A primeira cadeia de caracteres digitada ser�
	// armazenada na vari�vel cadeia1
	gets_s(cadeia1);
	printf("Digite a segunda cadeia de caracteres: ");
	// A segunda cadeia de caracteres digitada ser�
	// armazenada na varivel cadeia2
	gets_s(cadeia2);
	// A fun��o strncmp compara os n primeiros caracteres das duas cadeias
	if (strncmp(cadeia1, cadeia2, 3) == 0)
		printf("\nAs cadeias digitadas s�o iguais ");
	else
		printf("\nAs cadeias digitadas s�o diferentes\n ");
	system("pause");
}