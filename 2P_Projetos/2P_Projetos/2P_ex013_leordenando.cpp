#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	int n[4], i, aux, j;

	for (i = 0; i < 4; i++) {
		cout << "Informe o " << i+1 << "º valor: ";
		cin >> n[i];
		if (i > 0 && i < 3) {
			while (n[i] < n[i-1]) {
				cout << "Informe um valor maior: ";
				cin >> n[i];
			}
		}
	}

	for (i = 0; i < 4; i++) {
		j = i - 1;
		while (j >= 0 && n[j+1] > n[j]) {
			aux = n[j+1];
			n[j+1] = n[j];
			n[j] = aux;
			j--;
		}

	}

	cout << "\n|";
	for (i = 0; i < 4; i++) {
		cout << " " << n[i] << " |";
	}

	cout << "\n\n";

	system("pause");

	return EXIT_SUCCESS;
}