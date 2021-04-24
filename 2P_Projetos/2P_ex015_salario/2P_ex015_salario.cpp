#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;

void menu() {

	int cod;
	float sal;

	system("cls");

	cout << "________________________________________\n";
	cout << "                SAlÁRIO                 \n";
	cout << "________________________________________\n\n";
	cout << "[ 1 ] Escriturário\n";
	cout << "[ 2 ] Secretário\n";
	cout << "[ 3 ] Caixa\n";
	cout << "[ 4 ] Gerente\n";
	cout << "[ 5 ] Diretor\n";
	cout << "Sua opção: ";
	cin >> cod;
	while (cod < 1 || cod > 5) {
		cout << "Opção inválida! Tente novamente: ";
		cin >> cod;
	}
	cout << "Informe seu salário atual: R$ ";
	cin >> sal;

	system("cls");


	switch (cod) {
	case 1:

		cout << "Função: ESCRITURÁRIO\n";
		cout << "Aumento: " << sal * 0.5 << "\n";
		cout << "Novo salário: " << sal * 1.5 << "\n";
		system("pause");
		menu();
		break;
	case 2:

		cout << "Função: SECRETÁRIO\n";
		cout << "Aumento: " << sal * 0.35 << "\n";
		cout << "Novo salário: " << sal * 1.35 << "\n";
		system("pause");
		menu();
		break;
	case 3:

		cout << "Função: CAIXA\n";
		cout << "Aumento: " << sal * 0.2 << "\n";
		cout << "Novo salário: " << sal * 1.2 << "\n";
		system("pause");
		menu();
		break;
	case 4:

		cout << "Função: GERENTE\n";
		cout << "Aumento: " << sal * 0.1 << "\n";
		cout << "Novo salário: " << sal * 1.1 << "\n";
		system("pause");
		menu();
		break;
	case 5:

		cout << "Função: DIRETOR\n";
		cout << "Aumento: NENHUM!" << "\n";
		cout << "Não há Novo salário!\n";
		system("pause");
		menu();
		break;
	default: break;
	}
}

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	menu();

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}