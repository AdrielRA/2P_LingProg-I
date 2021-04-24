#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>
#include <string>

using namespace std;

int voo[12], lugares[12];
string destino[12], origem[12];

void leitura() {

	for (int i = 0; i < 12; i++) {

		system("cls");

		cout << "________________________________________\n";
		cout << "          INFORMAÇÕES DOS VOOS          \n";
		cout << "________________________________________\n\n";
		cout << "Número do voo: ";
		cin >> voo[i];
		cout << "Origem: ";
		cin >> origem[i];
		cout << "Destino: ";
		cin >> destino[i];
		cout << "Número de lugares: ";
		cin >> lugares[i];
	}
}

void consultar() {

	int sub_op = 0;
	bool f = false, encontrou = false;

	system("cls");
	cout << "________________________________________\n";
	cout << "      CONSULTA DE PASSAGENS ÁEREAS      \n";
	cout << "________________________________________\n\n";
	cout << "[ 1 ] Número do Voo\n";
	cout << "[ 2 ] Origem\n";
	cout << "[ 3 ] Destino\n\n";

	cout << "Sua opção: ";
	cin >> sub_op;

	system("cls");

	switch (sub_op) {
	case 1:
		int num_voo;
		f = false, encontrou = false;

		cout << "Informe o núm. do voo: ";
		cin >> num_voo;

		for (int i = 0; i < 12; i++) {

			if (voo[i] == num_voo) {

				if (!encontrou) {
					encontrou = !encontrou;
				}

				if (!f) {
					f = !f;
					cout << "nº | origem    | destino  | lugares\n";
				}

				cout << voo[i] << " | " << origem[i] << " | " << destino[i] << " | " << lugares[i] << " |\n";
			}
		}

		if (!encontrou) {
			cout << "Nada encontrado!";
		}
		cout << "\n\n";
		system("pause");
		break;
	case 2:
		char origem_voo[30];
		f = false, encontrou = false;

		cout << "Informe a origem do voo: ";
		cin >> origem_voo;

		for (int i = 0; i < 12; i++) {
			if (origem[i] == origem_voo) {

				if (!encontrou) {
					encontrou = !encontrou;
				}

				if (!f) {
					f = !f;
					cout << "nº | origem    | destino  | lugares\n";
				}
				cout << voo[i] << " | " << origem[i] << " | " << destino[i] << " | " << lugares[i] << " |\n";
			}
		}
		if (!encontrou) {
			cout << "Nada encontrado!";
		}
		cout << "\n\n";
		system("pause");
		break;
	case 3:
		char destino_voo[30];
		f = false, encontrou = false;

		cout << "Informe o destino do voo: ";
		cin >> destino_voo;

		for (int i = 0; i < 12; i++) {
			if (destino[i] == destino_voo) {

				if (!encontrou) {
					encontrou = !encontrou;
				}

				if (!f) {
					f = !f;
					cout << "nº | origem    | destino  | lugares\n";
				}

				cout << voo[i] << " | " << origem[i] << " | " << destino[i] << " | " << lugares[i] << " |\n";
			}
		}
		if (!encontrou) {
			cout << "Nada encontrado!";
		}
		cout << "\n\n";
		system("pause");
		break;
	default:
		break;
	}

}

void reservar() {

	int num_voo = 0, sub_op = 0, i;
	bool ok = false;

	system("cls");
	cout << "________________________________________\n";
	cout << "      CONSULTA DE PASSAGENS ÁEREAS      \n";
	cout << "________________________________________\n\n";

	cout << "Núm. do voo desejado: ";
	cin >> num_voo;

	for (i = 0; i < 12; i++) {
		if (voo[i] == num_voo) {
			ok = !ok;
			break;
		}
	}
	if (ok) {
		if (lugares[i] > 0) {
			cout << "Reserva confirmada!";
			lugares[i]--;
		}
		else {
			cout << "Voo lotado!";
		}
	}
	else {
		cout << "Voo inexistente!";
	}

	cout << "\n\n";
	system("pause");

}

int menu() {
	int op;

	system("cls");
	cout << "________________________________________\n";
	cout << "         MENU DE PASSAGENS ÁEREAS       \n";
	cout << "________________________________________\n\n";
	cout << "[ 1 ] Consultar\n";
	cout << "[ 2 ] Reservar\n";
	cout << "[ 3 ] Sair\n\n";

	cout << "Sua opção: ";
	cin >> op;

	switch (op) {
	case 1: consultar();
		break;

	case 2: reservar();
		break;
	default: break;
	}

	return op;
}

int main() {

	setlocale(LC_ALL, "Portuguese");

	int op = 0;

	leitura();

	do {
		op = menu();

	} while (op != 3);

	return EXIT_SUCCESS;
}
