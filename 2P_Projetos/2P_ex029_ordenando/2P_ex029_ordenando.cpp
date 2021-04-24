#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdbool.h>
#include <locale>

using namespace std;

int main(void) {

	int vet[100], op, tam, aux;

	setlocale(LC_ALL, "Portuguese");

	do {

		system("cls");
		cout << "________________________________\n";
		cout << "              MENU\n";
		cout << "________________________________\n\n";

		cout << "[ 1 ] Definir Tamanho do Vetor\n";
		cout << "[ 2 ] Ler Valores do Vetor\n";
		cout << "[ 3 ] Ordem Crescente\n";
		cout << "[ 4 ] Ordem Decrescente\n";
		cout << "[ 5 ] Mostrar o vetor\n";
		cout << "[ 6 ] Sair\n\n";


		cout << "Sua opção: ";
		cin >> op;

		system("cls");

		switch (op)
		{
		case 1:
			cout << "________________________________\n";
			cout << "              TAMANHO\n";
			cout << "________________________________\n\n";

			cout << "Defina o Tamanho do Vetor: ";
			cin >> tam;
			while (tam > 100) {
				cout << "Tamanho inválido! Defina o Tamanho do Vetor: ";
				cin >> tam;
			}
			break;
		case 2:
			cout << "________________________________\n";
			cout << "              LEITURA\n";
			cout << "________________________________\n\n";

			for (int i = 0; i < tam; i++) {
				cout << i + 1 << "º Valor: ";
				cin >> vet[i];
			}
			break;
		case 3:
			for (int i = 0; i < tam; i++) {
				if (vet[i] > vet[i + 1]) {
					aux = vet[i];
					vet[i] = vet[i + 1];
					vet[i + 1] = aux;
				}
			}

			break;
		case 4:
			for (int i = 0; i < tam; i++) {
				if (vet[i] < vet[i + 1]) {
					aux = vet[i];
					vet[i] = vet[i + 1];
					vet[i + 1] = aux;
				}
			}
			break;
		case 5:
			cout << "| ";
			for (int i = 0; i < tam; i++) {
				cout << vet[i] << " | ";
			}
			system("pause");
			break;
		default:
			break;
		}
	} while (op != 6);

	system("pause");
	return EXIT_SUCCESS;
}