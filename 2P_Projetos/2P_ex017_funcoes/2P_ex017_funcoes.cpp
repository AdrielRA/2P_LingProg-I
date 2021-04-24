#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int verifica(int num) {

	if (num < 0) {
		return 1;
	}
	else {
		return 0;
	}
	return 0;
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	int ver, n;

	cout << "Informe um número: ";
	cin >> n;

	ver = verifica(n);
	cout << "\n";

	if (ver == 0) {
		cout << "Valor positivo!";
	}
	else {
		cout << "Valor negativo!";
	}

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}