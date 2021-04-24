#define _CRT_SECURE_NO_WARNINGS
#define TAM_NOME 20

#include <iostream>
#include <string>
#include <locale>

using namespace std;

void pause();

typedef struct {
	char nome[TAM_NOME];
	int numero;
}cliente;

int main() {

	setlocale(LC_ALL, "Portuguese");

	/*system("md C:\\aula\\pratica");*/

	/*FILE *arq;
	char c;
	arq = fopen("C:\\aula\\pratica\\caract.txt", "a");
	if (arq == NULL) {
		cout << "\nOcorreu um erro. O arquivo não foi aberto corretamente!";
	}
	else {
		cout << "Sucesso na abertura!\n";
		pause();
		do {
			system("cls");
			cout << "Informe um caracter: ";
			cin >> c;
			getchar();
			fputc(c, arq);
			if (ferror(arq)) {
				cout << "Erro na gravação do caractere!\n";
			}
			else {
				cout << "Gravação realizada com sucesso!\n";
			}
		} while (c != 'f');

		system("cls");
		fclose(arq);

		arq = fopen("C:\\aula\\pratica\\caract.txt", "r");

		while (!feof(arq)) {

			c = fgetc(arq);
			if (ferror(arq)) {
				cout << "Erro na leitura do arquivo!\n";
			}
			else {
				cout << "Leitura realizada com sucesso!\n";
				cout << "Caractere lido: " << c << "\n";
			}
		}
		pause();
		system("cls");

		bool resposta = fclose(arq);
		if (resposta) {
			cout << "Erro no fechamento!";
		}
		else {
			cout << "Fechado com sucesso!";
		}
	}*/

	/*FILE *p;
	char cadeia[5];
		p = fopen("c:\\exemplo\\teste\\cadeias.txt", "r");
	if (p == NULL)
		printf("\nErro na abertura");
	else{
		while (!feof(p))
		{
			fgets(cadeia, 5, p);
			if (ferror(p)) printf("\nErro na leitura da cadeia");
			else
			{
				printf("\nLeitura realizada com sucesso");
				printf("Cadeia lida : %s", cadeia);
			}
		}
	}
	fclose(p);*/

	FILE *cli;
	cliente c;
	char nome_aux[TAM_NOME];
	cli = fopen("c:\\aula\\pratica\\clientes.dat", "a+");
	if (cli == NULL) {
		cout << "Erro na abertura do arquivo!\n";
	}
	else {
		cout << "Digite o número do cliente a ser incluido: ";
		cin >> c.numero;
		getchar();
		cout << "Informe o nome do cliente a ser incluido: ";
		gets_s(nome_aux);
		strcpy(c.nome, nome_aux);
		fwrite(&c, sizeof(cliente), 1, cli);
		if (ferror(cli)) {
			cout << "Erro na gravação!\n";
		}
		else {
			cout << "Leitura realizada com sucesso!\n";
		}
	}

	fclose(cli);

	cout << "\n\n";
	pause();
	return EXIT_SUCCESS;
}

void pause() {
	cout << "Pressione uma tecla para continuar... ";
	getchar();
}