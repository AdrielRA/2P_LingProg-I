#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int soma(int n1, int n2) {

	int soma = 0, i, maior, menor;

	if (n2 < n1) {
		maior = n1;
		menor = n2;
	}
	else {
		maior = n2;
		menor = n1;
	}

	for (i = menor + 1; i < maior; i++) {
		soma = soma + i;
	}	

	return soma;
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	int s, num1, num2;

	cout << "Informe o 1º número: ";
	cin >> num1;
	cout << "Informe o 2º número: ";
	cin >> num2;

	s = soma(num1, num2);

	cout << "Soma do intervalo: " << s;

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}