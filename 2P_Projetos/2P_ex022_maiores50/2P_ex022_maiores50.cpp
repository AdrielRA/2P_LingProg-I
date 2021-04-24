#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vet[10], i;
	bool ok = false;

	for (i = 0; i < 10; i++) {
		cout << "Informe " << i + 1 << "º valor: ";
		cin >> vet[i];
	}

	cout << "\n";

	for (i = 0; i < 10; i++) {
		if (vet[i] > 50) {
			cout << "vet[" << i << "] = " << vet[i] << " é maior que 50.\n";
			if (!ok) {
				ok = !ok;
			}
		}
	}
	if (!ok) {
		cout << "Nenhum valor maior que 50.\n";
	}

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}