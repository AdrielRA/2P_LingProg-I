#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vet[9], i, j, c;

	for (i = 0; i < 9; i++) {

		cout << "Informe " << i + 1 << "º valor: ";
		cin >> vet[i];
	}

	for (i = 0; i < 9; i++) {
		c = 0;
		for (j = 1; j <= vet[i]; j++) {
			if (vet[i] % j == 0) {
				c++;
			}
		}
		if (c == 2) {
			cout << "vet[" << i << "] = " << vet[i] << " é primo!\n";
		}
	}

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}
