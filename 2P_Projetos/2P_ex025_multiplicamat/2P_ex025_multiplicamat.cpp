#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vet[2][2], r[2][2], i, j, maior = 0;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "Informe vet[" << i << "," << j << "]: ";
			cin >> vet[i][j];
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (vet[i][j] > maior) {
				maior = vet[i][j];
			}
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			r[i][j] = vet[i][j] * maior;
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout <<	"| " << r[i][j] << " ";
		}
		cout << "|\n";
	}

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}