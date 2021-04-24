#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <locale>

#include <ctype.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int cont, tam, cont_verificadas = 0;
	bool encontrou = false;
	char frase[30], verificadas[30];

	cout << "Informe uma frase: ";
	fgets(frase, 30, stdin);

	tam = strlen(frase) - 1;
	_strlwr(frase);

	for (int i = 0; i < tam; i++) {
		cont = 0;
		for (int j = 0; j < cont_verificadas; j++) {
			if (frase[i] == verificadas[j]) {
				encontrou = true;
				break;
			}
			else { encontrou = false; }
		}
		if (!encontrou) {
			verificadas[cont_verificadas] = frase[i];
			cont_verificadas++;
			for (int j = 0; j < tam; j++) {
				if (frase[i] == frase[j]) {
					cont++;
				}
			}
			if (frase[i] != ' ') {
				cout << "Letra '" << frase[i] << "' encontrada " << cont << " vez";
				if (cont == 1) {
					cout << "\n";
				}
				else {
					cout << "es\n";
				}
			}

		}

	}
	cout << "\n";
	system("pause");

	return EXIT_SUCCESS;
}