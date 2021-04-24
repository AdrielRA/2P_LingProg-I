#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <locale>

#include <ctype.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int tam;
	char frase[30], inverso[30];

	cout << "Informe uma frase: ";
	fgets(frase, 30, stdin);

	frase[strlen(frase) - 1] = '\0';

	tam = strlen(frase) - 1;

	_strlwr(frase);

	for (int i = 0; i <= tam; i++) {
		inverso[i] = frase[tam - i];
	}

	inverso[tam + 1] = '\0';

	int c = 0;

	for (int i = 0; i <= tam; i++) {

		if (frase[i] == inverso[i]) {
			c++;
			if (c == tam) {
				cout << "Está palavra é um PALINDROMO!";

			}
		}
		else {
			cout << "Está palavra não é um PALINDROMO!";
			break;
		}
	}

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}