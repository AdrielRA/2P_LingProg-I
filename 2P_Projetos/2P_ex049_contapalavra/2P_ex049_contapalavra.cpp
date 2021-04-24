#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <locale>

#include <ctype.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int cont = 1, tam;
	char frase[30];

	cout << "Informe uma frase: ";
	fgets(frase, 30, stdin);

	cout << frase << "\n";

	tam = strlen(frase);
	_strlwr(frase);

	for (int i = 0; i < tam; i++) {
		if (frase[i] == ' ') {
			cont++;
		}
	}

	cout << "Foram encontradas " << cont << " palavras!\n";

	system("pause");

	return EXIT_SUCCESS;
}