#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vet[10], i, j, aux;

	for (i = 0; i < 10; i++) {
		cout << "Informe " << i + 1 << "º valor: ";
		cin >> vet[i];
	}

	cout << "\nOrdem decrescente:\n|";

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9; j++) {
			if (vet[j] < vet[j + 1]) {
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		cout << " " << vet[i] << " |";
	}

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}