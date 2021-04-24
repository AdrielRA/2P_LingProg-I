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
	cout << "                SAl�RIO                 \n";
	cout << "________________________________________\n\n";
	cout << "[ 1 ] Escritur�rio\n";
	cout << "[ 2 ] Secret�rio\n";
	cout << "[ 3 ] Caixa\n";
	cout << "[ 4 ] Gerente\n";
	cout << "[ 5 ] Diretor\n";
	cout << "Sua op��o: ";
	cin >> cod;
	while (cod < 1 || cod > 5) {
		cout << "Op��o inv�lida! Tente novamente: ";
		cin >> cod;
	}
	cout << "Informe seu sal�rio atual: R$ ";
	cin >> sal;

	system("cls");


	switch (cod) {
	case 1:

		cout << "Fun��o: ESCRITUR�RIO\n";
		cout << "Aumento: " << sal * 0.5 << "\n";
		cout << "Novo sal�rio: " << sal * 1.5 << "\n";
		system("pause");
		menu();
		break;
	case 2:

		cout << "Fun��o: SECRET�RIO\n";
		cout << "Aumento: " << sal * 0.35 << "\n";
		cout << "Novo sal�rio: " << sal * 1.35 << "\n";
		system("pause");
		menu();
		break;
	case 3:

		cout << "Fun��o: CAIXA\n";
		cout << "Aumento: " << sal * 0.2 << "\n";
		cout << "Novo sal�rio: " << sal * 1.2 << "\n";
		system("pause");
		menu();
		break;
	case 4:

		cout << "Fun��o: GERENTE\n";
		cout << "Aumento: " << sal * 0.1 << "\n";
		cout << "Novo sal�rio: " << sal * 1.1 << "\n";
		system("pause");
		menu();
		break;
	case 5:

		cout << "Fun��o: DIRETOR\n";
		cout << "Aumento: NENHUM!" << "\n";
		cout << "N�o h� Novo sal�rio!\n";
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