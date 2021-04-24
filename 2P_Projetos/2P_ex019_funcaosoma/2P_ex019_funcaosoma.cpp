#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int soma(int n1, int n2, int n3) {

	int soma = 0, i, maior, menor;

	if (n3 < n2) {
		maior = n2;
		menor = n3;
	}
	else {
		maior = n3;
		menor = n2;
	}

	for (i = menor; i <= maior; i++) {
		if ((i % n1 == 0)) {
			soma = soma + i;
		}
	}

	return soma;
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	int s, num1, num2, num3;

	cout << "Informe o 1º número: ";
	cin >> num1;
	while (num1 <= 1) {
		cout << "Use valor maior que 1: ";
		cin >> num1;
	}
	cout << "Informe o 2º número: ";
	cin >> num2;
	cout << "Informe o 3º número: ";
	cin >> num3;

	s = soma(num1, num2, num3);

	cout << "Soma do intervalo: " << s;

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}