#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;

void imposto(float s) {

	float imp;

	if (s < 500) {
		imp = s * 0.05;
	}
	else if(s <= 850) {
		imp = s * 0.1;
	}
	else {
		imp = s * 0.15;
	}

	cout << "\nValor do imposto: R$" << imp;

	cout << "\n\n";
	system("pause");
}

void novo(float s) {

	float n;

	if (s > 1500) {
		n = s + 25;
	}
	else if (s >= 750) {
		n = s + 50;
	}
	else if (s >= 450) {
		n = s + 75;
	}
	else {
		n = s + 100;
	}

	cout << "\nNovo Salário: R$" << n;

	cout << "\n\n";
	system("pause");
}

void classificar(float s) {

	cout << "\nVocê é ";

	if (s <= 700) {
		cout << "Mal Remunerado!";
	}
	else {
		cout << "Bem Remunerado!";
	}

	cout << "\n\n";
	system("pause");
}

void menu() {

	int op;
	float sal;

	do {
		system("cls");
		cout << "________________________________________\n";
		cout << "                  MENU                  \n";
		cout << "________________________________________\n\n";
		cout << "[ 1 ] Imposto\n";
		cout << "[ 2 ] Novo salário\n";
		cout << "[ 3 ] Classificação\n";
		cout << "[ 4 ] Sair\n\n";
		cout << "--==> Sua opção: ";
		cin >> op;
		while (op < 1 || op > 4) {
			cout << "Opção inválida! Tente novamente: ";
			cin >> op;
		}

		if (op != 4)
		{
			cout << "________________________________________\n\n";
			cout << "Informe seu salário: R$";
			cin >> sal;
		}

		switch (op)
		{
		case 1:imposto(sal);
			break;
		case 2:novo(sal);
			break;
		case 3:classificar(sal);
			break;
		default:
			break;
		}
	} while (op != 4);
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	menu();

	return EXIT_SUCCESS;
}