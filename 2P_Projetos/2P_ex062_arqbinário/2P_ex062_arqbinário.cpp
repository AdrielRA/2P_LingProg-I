#define _CRT_SECURE_NO_WARNINGS
#define TAM_NOME 20

#include <iostream>
#include <string>
#include <locale>

using namespace std;
void pause();

typedef struct {
	int numero;
	char nome[30];
	char curso[50];
	float nota1, nota2;
}aluno;

int main() {
	setlocale(LC_ALL, "Portuguese");

	aluno c1;
	FILE * cli;
	char nome_aux[TAM_NOME];

	cli = fopen("alunos.dat", "a+");
	if (cli == NULL) {
		cout << "Erro na abertura do arquivo!\n";
	}
	else {
		cout << "Informe o número do aluno: ";
		cin >> c1.numero;
		getchar();
		cout << "Informe o nome do cliente a ser incluido: ";
		gets_s(nome_aux);
		strcpy(c1.nome, nome_aux);
		fwrite(&c1, sizeof(aluno), 1, cli);
		if (ferror(cli)) {
			cout << "Erro na gravação!\n";
		}



		fread(&c1, sizeof(aluno), 1, cli);
		if (ferror(cli)) {
			cout << "Erro na leitura!\n";
		}
		else {
			cout << "Leitura realizada com sucesso!\n";
			cout << "Número do cliente: " << c1.numero << "\n";
			cout << "Nome do cliente: " << c1.nome << "\n";
			rewind(cli);
			cout << "Cursor reposicionado com sucesso!\n";
		}
	}
	cout << "\n\n";
	pause();
	return EXIT_SUCCESS;
}

void pause() {
	cout << "Pressione uma tecla para continuar... ";
	getchar();
	getchar();
}
