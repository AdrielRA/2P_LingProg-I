#define _CRT_SECURY_NO_WARNINGS
#include <iostream>
void main()
{
	char cadeia_digitada[25], cadeia_copiada[25];
	printf("Digite uma cadeia de caracteres: ");
	// A cadeia de caracteres digitada ser�
	// armazenada na vari�vel cadeia_digitada
	gets_s(cadeia_digitada, 24);
	// A fun��o strcpy copia a cadeia de caracteres da vari�vel
	// cadeia_digitada para a vari�vel cadeia_copiada
	strcpy_s(cadeia_copiada, cadeia_digitada);
	// Mostra o conte�do da vari�vel cadeia_digitada
	printf("\nCadeia digitada = %s", cadeia_digitada);
	//Mostra o conte�do da vari�vel cadeia_copiada
	printf("\nCadeia copiada = %s\n", cadeia_copiada);
	system("pause");
}