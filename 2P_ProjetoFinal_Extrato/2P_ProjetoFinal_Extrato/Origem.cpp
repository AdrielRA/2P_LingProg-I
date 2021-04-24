#define _CRT_SECURE_NO_WARNINGS

#include "Funções.h"
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE * arq;

	arq = fopen("dados.dat", "rb+");
	if (arq == NULL) {
		arq = fopen("dados.dat", "wb+");
		if (arq == NULL) {
			cout << "Erro: Falha Total\n";
			pause();
			exit(0);
		}
	}

	int op;

	cls();
	Carregar("Carregando recursos! Aguarde", 3);

	do {
		op = 0;
		cls();
		Linha(40, 2);
		cout << "          CONTROLE DE ESTOQUE         \n";
		Linha(40, 2);
		cout << "[ 1 ] Cadastrar\n";
		cout << "[ 2 ] Movimentação\n";
		cout << "[ 3 ] Consultar\n";
		cout << "[ 4 ] Gerar Extrato\n";
		cout << "[ 5 ] Apagar Dados\n";
		cout << "[ 6 ] Sair\n";
		Linha(40, 2);
		cout << "Sua opção: ";
		cin >> op;
		Linha(40, 2);
		setbuf(stdin, NULL);
		switch (op)
		{
		case 1:
			cadastrar(arq);
			break;
		case 2:
			movimentar(arq);
			break;
		case 3:
			consultar(arq);
			break;
		case 4:
			gera_relatorio(arq);
			break;
		case 5:
			apagar_dados(arq);
			break;
		case 6:
			break;
		default:
			cout << "Opção inválida!\n";
			Linha(40,1);
			pause();
			break;
		}
	} while (op != 6);

	fclose(arq);
	return EXIT_SUCCESS;
}