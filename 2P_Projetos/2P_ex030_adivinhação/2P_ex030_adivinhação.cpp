#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

using namespace std;

int main(void) {

	int op, num, ram;

	setlocale(LC_ALL, "Portuguese");

	op = 1;

	while (op != 99) {

		ram = rand() % 11;

		do {

			system("cls");
			cout << "__________________________________________________\n";
			cout << "            ADIVINHE O N�MERO: 99 SAIR            \n";
			cout << "__________________________________________________\n\n";


			cout << "Chute um n�mero: ";
			cin >> num;

			cout << "\n__________________________________________________\n\n";

			if (num == ram) {
				cout << "Voc� acertou... Parab�ns!\n";
			}
			else {
				cout << "Voc� errou! ";
				if (num < ram) {
					cout << "Tente um valor maior! ";
				}
				else {
					cout << "Tente um valor menor! ";
				}
			}

			cout << "\n";
			system("pause");


		} while (ram != num);

		cout << "Tentar novamente? [99] Sair: ";
		cin >> op;
	}


	cout << "\n\n";
	system("pause");
	return EXIT_SUCCESS;
}