#define _CRT_SECURE_NO_WARNINGS
#define TAM 15

#include <iostream>
#include <string>
#include <locale>

using namespace std;

typedef struct {
	char Titular[30];
	int NumConta;
	float Saldo;
}Banco;


int main() {

	setlocale(LC_ALL, "Portuguese");

	Banco Contas[TAM];
	int OP, qnt_Cadastradas = 0, numConta, posApagada;
	float MenorSaldo = 0;
	char nome[30], nome_aux[30];
	bool Achou;


	do {
		system("cls");
		cout << "____________________________________\n";
		cout << "           Menu de Opções           \n";
		cout << "____________________________________\n\n";

		cout << "[ 1 ] Cadastrar contas\n";
		cout << "[ 2 ] Visualizar todas as contas de determinado cliente\n";
		cout << "[ 3 ] Excluir conta de menor saldo\n";
		cout << "[ 4 ] Sair\n";
		cout << "____________________________________\n";
		cout << "Digite sua opção: ";
		cin >> OP;
		cout << "____________________________________\n";

		switch (OP)
		{
		case 1:
			if (qnt_Cadastradas >= 15) {
				cout << "Número máximo de contas atingido!\n\n";
				system("pause");
			}
			else {
				Achou = false;
				cout << "Digite o número da conta a ser incluída: ";
				cin >> numConta;
				for (int i = 0; i < qnt_Cadastradas; i++) {
					if (Contas[i].NumConta == numConta) {
						Achou = true;
						break;
					}
				}
				if (Achou) {
					cout << "Já existe conta cadastrada com esse número!\n\n";
					system("pause");
				}
				else {
					Contas[qnt_Cadastradas].NumConta = numConta;
					cout << "Digite o nome do cliente: ";
					getchar();
					gets_s(nome);
					strcpy(Contas[qnt_Cadastradas].Titular, nome);
					cout << "Digite o saldo do cliente: ";
					cin >> Contas[qnt_Cadastradas].Saldo;
					cout << "____________________________________\n";
					cout << "Conta cadastrada com sucesso!\n\n";
					system("pause");
					qnt_Cadastradas++;
				}
			}
			break;
		case 2:
			cout << "Digite o nome do cliente a ser consultado: ";
			getchar();
			gets_s(nome);
			Achou = false;
			for (int i = 0; i < qnt_Cadastradas; i++) {

				if (!strcmp(nome, Contas[i].Titular)) {
					cout << "____________________________________\n";
					cout << "Dados da Conta de " << nome << "\n";
					cout << "____________________________________\n\n";
					cout << "Número da Conta: " << Contas[i].NumConta << "\n";
					cout << "Saldo da Conta: " << Contas[i].Saldo << "\n\n";
					system("pause");
					Achou = true;
				}
			}
			if (!Achou) {
				cout << "Não existe conta cadastrada para este cliente!\n\n";
				system("pause");
			}
			break;
		case 3:
			if (!qnt_Cadastradas) {
				cout << "Não há nada para apagar!\n\n";
				system("pause");
			}
			else {
				MenorSaldo = Contas[0].Saldo;
				posApagada = 0;
				for (int i = 1; i < qnt_Cadastradas; i++) {
					if (Contas[i].Saldo <= MenorSaldo) {
						MenorSaldo = Contas[i].Saldo;
						posApagada = i;
					}
				}
				for (int i = posApagada; i < qnt_Cadastradas - 1; i++) {
					Contas[i].NumConta = Contas[i + 1].NumConta;
					Contas[i].Saldo = Contas[i + 1].Saldo;
					strcpy(Contas[i].Titular, Contas[i + 1].Titular);
				}

				cout << "Conta excluída com sucesso!\n\n";
				qnt_Cadastradas--;

				system("pause");
			}
			break;
		case 4:break;
		default:
			cout << "Opção inválida! ";
			system("pause");
			break;
		}

	} while (OP != 4);

	return EXIT_SUCCESS;
}