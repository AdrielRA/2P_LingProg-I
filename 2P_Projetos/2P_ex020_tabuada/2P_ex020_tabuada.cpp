#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;

void multiplicar(int n1) {

	int i, j;

	for (i = 1; i < n1; i++) {
		for (j = 1; j < i; j++) {
			cout << i << "x" << j << " = " << i*j << "\n";
		}
	}
	
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	int n;

	cout << "Informe um número: ";
	cin >> n;
	while (n < 1 || n > 9) {
		cout << "Informe um diferente: ";
		cin >> n;
	}

	multiplicar(n);

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}