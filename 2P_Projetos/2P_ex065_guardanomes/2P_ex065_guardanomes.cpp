#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	char nome[30];
	FILE * arquivo;

	arquivo = fopen("teste.txt", "w");

	if (arquivo == NULL) {
		cout << "Arquivo teste.txt não pode ser aberto\n";
	}
	else {
		cout << "Digite o seu nome: ";
		gets_s(nome);
		while (_stricmp(nome, "fim") != 0) {
			fputs(nome, arquivo);
			if (ferror(arquivo)) {
				cout << "Erro na gravação do nome";
			}
			else {
				cout << "Gravação realizada com sucesso!\n";
				cout << "Digite o próximo nome: ";
			}
		}
	}

	fclose(arquivo);

	system("pause");
	return EXIT_SUCCESS;
}