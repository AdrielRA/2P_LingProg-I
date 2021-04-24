#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>
#include <string>
#include <locale>

using namespace std;

void cls() {
	system("cls");
}

void Load() {
	cout << "Aguarde";
	for (int i = 0; i < 4; i++) {
		cout << ".";
		Sleep(500);
	}
}

typedef struct {
	char nome[30], curso[50];
	int numero;
	float nota1, nota2;
}Aluno;

int main() {

	setlocale(LC_ALL, "Portuguese");

	char Aluno_Existente = 0;
	Aluno A1;
	FILE * Agenda = fopen("Agenda.dat", "ab+");

	if (Agenda == NULL) {
		cout << "Falha na abertura do arquivo!\n";
	}

	else {
		cout << "Arquivo aberto com sucesso! ";
		Load();
		cls();
		cout << "            CADASTRO DE ALUNOS           \n";
		cout << "_________________________________________\n\n";

		cout << "Informe o número do aluno: ";
		cin >> A1.numero;
		getchar();

		rewind(Agenda);

		do {
			Aluno A2;
			fread(&A2, sizeof(Aluno), 1, Agenda);

			if (ferror(Agenda)) {
				cout << "Erro na leitura!\n";
			}

			if (A2.numero == A1.numero) {
				Aluno_Existente = 1;
				cout << "Aluno já cadastrado!\n";
			}

			if (feof(Agenda)) {
				break;
			}

		} while (!Aluno_Existente);

		if (!Aluno_Existente) {
			cout << "Informe o nome do aluno: ";
			gets_s(A1.nome);

			cout << "Informe o nome do curso: ";
			gets_s(A1.curso);

			cout << "Informe a primeira nota: ";
			cin >> A1.nota1;
			while (A1.nota1 < 0 || A1.nota1 > 10) {
				cout << "Nota inválida! Informe novamente: ";
				cin >> A1.nota1;
			}

			cout << "Informe a segunda nota : ";
			cin >> A1.nota2;
			while (A1.nota2 < 0 || A1.nota2 > 10) {
				cout << "Nota inválida! Informe novamente: ";
				cin >> A1.nota2;
			}

			fwrite(&A1, sizeof(Aluno), 1, Agenda);

			if (ferror(Agenda)) {
				cout << "Erro na gravação!\n";
			}
		}

		else {
			cout << "\n";
			system("pause");
		}

		Aluno A3;
		cls();
		cout << "Conferencia:\n\n";
		rewind(Agenda);
		while (fread(&A3, sizeof(Aluno), 1, Agenda)) {
			cout << "Nome do aluno: " << A3.nome << "\n";
			cout << "Número: " << A3.numero << "\n";
			cout << "Curso: " << A3.curso << "\n";
			cout << "Nota1: " << A3.nota1 << "\n";
			cout << "Nota2: " << A3.nota2 << "\n\n";
		}

		system("pause");

		cls();
		cout << "Fechando arquivo! ";
		Load();
		cout << "\n";

		char falha_fechamento = fclose(Agenda);
		if (!falha_fechamento) { cout << "Sucesso ao fechar o arquivo!\n"; }
		else { cout << "Falha ao fechar o arquivo!\n"; }
	}

	cout << "\n";
	system("pause");
	return EXIT_SUCCESS;
}