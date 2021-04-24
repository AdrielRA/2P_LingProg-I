#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vet[10][3], i, j, p1 = 0, p2 = 0, p3 = 0, menor, p_menor;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 3; j++) {
			cout << "Informe nota da " << j+1 << "ª prova do " << i+1 << "º aluno: ";
			cin >> vet[i][j];
		}
	}

	system("cls");

	for (i = 0; i < 10; i++) {
		cout << "Menor nota do " << i + 1 << "º aluno: ";
		menor = vet[i][0];
		p_menor = 1;

		for (j = 0; j < 3; j++) {
			if (vet[i][j] < menor) {
				menor = vet[i][j];
				p_menor = j + 1;
			}
		}
		cout << "Prova " << p_menor << "\n";
		if (p_menor == 1) {
			p1++;
		}
		else if (p_menor == 2) {
			p2++;
		}
		else {
			p3++;
		}
	}
	cout << "\n\nOcorrência de menor nota por prova: \n";
	cout << "Prova 1:" << p1 << "\n";
	cout << "Prova 2:" << p2 << "\n";
	cout << "Prova 3:" << p3;

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}