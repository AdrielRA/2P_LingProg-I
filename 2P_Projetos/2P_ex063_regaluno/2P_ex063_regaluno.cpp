#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

using namespace std;

void pause() {
	cout << "\nPressione uma tecla para continuar... ";
	getchar();
}

typedef struct {
	char nome[30], curso[50];
	int numero;
	float nota1, nota2;
}Aluno;


int main() {

	setlocale(LC_ALL, "Portuguese");

	Aluno A1;
	FILE * Agenda = fopen("Agenda.dat", "a+");

	if (Agenda == NULL) {
		cout << "Falha na abertura do arquivo!\n";
	}
	else {
		cout << "Arquivo aberto com sucesso!\n";
		char falha_fechamento = fclose(Agenda);
		if (!falha_fechamento) { cout << "Sucesso ao fechar o arquivo!\n"; }
		else { cout << "Falha ao fechar o arquivo!\n"; }
	}

	pause();
	return EXIT_SUCCESS;
}