#define _CRT_SECURE_NO_WARNINGS
#define TAM 15
#define TAM_STRING 30

#include <iostream>
#include <string>
#include <locale>

using namespace std;

typedef struct Banco {
	int num;
	char titular[TAM_STRING];
	float saldo;
};

void Cadastrar(Banco*, int);

int main() {

	setlocale(LC_ALL, "Portuguese");

	Banco Contas[TAM];
	int Opcao, qtd_Contas = 0;

	do {
		system("cls");
		cout << "________________________________________\n";
		cout << "SISTEMINHA PAKAS DO MEU BANCO FENOMENALS\n";
		cout << "________________________________________\n\n";

		cout << "[ 1 ] Cadastrar Contas\n";
		cout << "[ 2 ] Visualizar Todas as Contas de Determinado Cliente\n";
		cout << "[ 3 ] Excluir a conta com menor saldo\n";
		cout << "[ 4 ] Sair\n";
		cout << "________________________________________\n\n";

		cout << "Sua opção: ";
		cin >> Opcao;

		switch (Opcao)
		{
		case 1:Cadastrar(Contas, qtd_Contas);
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			break;
		}

	} while (Opcao != 4);

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}


void Cadastrar(Banco* conta, int num_Contas) {

	char Titular[TAM_STRING];
	int Numero_da_Conta;

	cout << "Informe o número da conta: ";
	cin >> Numero_da_Conta;
	cout << "Informe o nome do titular: ";
	gets_s(Titular);
	strcpy(conta[num_Contas].titular, Titular);
}