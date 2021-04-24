#pragma once
#include <Windows.h>
#include <iostream>
#include "Listas.h"
#include <conio.h>
#include "Login.h"
#include <time.h>
#include <string>

using namespace std;

Lista L;

typedef struct {
	char nome[30];
	int quant;
	float valor;
}reg;

void cls() {
	system("cls");
}

void pause() {
	setbuf(stdin, NULL);
	cout << "\nPressione uma tecla para continuar...";
	getchar();
}

void gotoxy(int x, int y)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(h, c);
}

void Linha(int tam, char pular_linha) {
	for (int i = 0; i < tam; i++) { cout << '_'; }
	for (int i = 0; i < pular_linha; i++) { cout << '\n'; }
}

void Carregar(const char * frase, int segundos) {
	cout << frase;
	for (int i = 0; i < segundos * 4; i++) {
		Sleep(250);
		cout << '.';
	}
}

int tamanho(FILE * arq) {
	fseek(arq, 0, SEEK_END);
	return ftell(arq) / sizeof(reg);
}

void atualizar_lista(FILE * arq) {
	reg Produto;
	Elem X;
	ListInit(&L);
	for (int i = 0; i < tamanho(arq); i++) {
		fseek(arq, i * sizeof(reg), SEEK_SET);
		fread(&Produto, sizeof(reg), 1, arq);
		strcpy(X.chave, Produto.nome);
		X.num_reg = i;
		Ins(&L, X);
	}
}

char verificar_nome(FILE * arq, reg * Produto) {

	atualizar_lista(arq);
	for (int i = 0; Produto->nome[i] != '\0'; i++) {
		if ((i == 0) || (Produto->nome[i - 1] == ' ')) {
			Produto->nome[i] = toupper(Produto->nome[i]);
		}
	}
	if (Encontrar(&L, Produto->nome)) return 1;
	else return 0;
}

void cadastrar(FILE * arq) {
	reg Produto;
	char Validar = 0;
	Carregar("Aguarde", 1);
	cls();
	Linha(40, 2);
	cout << "Registro número " << tamanho(arq) + 1 << "\n";
	Linha(40, 2);
	cout << "Nome Produto: ";
	gets_s(Produto.nome);
	while (verificar_nome(arq, &Produto)) {
		Linha(40, 2);
		cout << "Nome já existe!";
		gotoxy(0, 5);
		cout << "                                        ";
		gotoxy(0, 5);
		cout << "Nome Produto: ";
		gets_s(Produto.nome);
		for (int i = 0; i < 3; i++) {
			cout << "                                        \n";
		}
		gotoxy(0, 6);
	}
	cout << "Quantidade..: ";
	cin >> Produto.quant;
	while (Produto.quant <= 0) {
		Linha(40, 2);
		cout << "Quantidade inválida!";
		gotoxy(0, 6);
		cout << "                                        ";
		gotoxy(0, 6);
		cout << "Quantidade..: ";
		cin >> Produto.quant;
		for (int i = 0; i < 3; i++) {
			cout << "                                        \n";
		}
		gotoxy(0, 7);
	}
	cout << "Valor unt...: ";
	cin >> Produto.valor;
	while (Produto.valor <= 0) {
		Linha(40, 2);
		cout << "Valor inválido!";
		gotoxy(0, 7);
		cout << "                                       ";
		gotoxy(0, 7);
		cout << "Valor unt...: ";
		cin >> Produto.valor;
		for (int i = 0; i < 3; i++) {
			cout << "                                        \n";
		}
		gotoxy(0, 8);
	}
	Linha(40, 2);
	cout << "Confirmar dados [S/N]: ";
	setbuf(stdin, NULL);
	Validar = _getch();
	while (Validar == '\0') {
		Validar = _getch();
	}
	cout << '\n';
	Linha(40, 2);
	if (toupper(Validar) == 'S') {
		fseek(arq, 0, SEEK_END);
		fwrite(&Produto, sizeof(reg), 1, arq);

		Carregar("Salvando", 2);
	}
	else {
		Carregar("Anulando", 1);
	}
}

void consultar(FILE * arq) {

	if (tamanho(arq)) {
		reg Produto;
		int Num_Reg;

		Carregar("Carregando busca", 2);
		cls();
		Linha(40, 2);
		cout << "               BUSCANDO               \n";
		Linha(40, 2);
		cout << "Número do registro: ";
		cin >> Num_Reg;
		Num_Reg--;
		Linha(40, 2);
		if ((Num_Reg >= 0) && (Num_Reg < tamanho(arq))) {
			fseek(arq, Num_Reg * sizeof(reg), SEEK_SET);
			fread(&Produto, sizeof(reg), 1, arq);
			cout << "Nome Produto: " << Produto.nome << '\n';
			cout << "Quantidade..: " << Produto.quant << '\n';
			cout << "Valor unt...: " << Produto.valor << '\n';
		}
		else {
			cout << "Registro não encontrado!\n";
		}
		Linha(40, 1);
		pause();
	}

	else {
		cout << "Nenhum registro encontrado!\n";
		Linha(40, 1);
		pause();
	}
}

void alterar(FILE * arq) {
	reg Produto;
	int Num_Reg, subb_op = 0;
	char Validar = 0;
	Carregar("Carregando dados", 1);
	cls();
	Linha(40, 2);
	cout << "          ENTRADA DE REGISTRO         \n";
	Linha(40, 2);
	cout << "Número do registro: ";
	cin >> Num_Reg;
	Num_Reg--;
	Linha(40, 2);
	if ((Num_Reg >= 0) && (Num_Reg < tamanho(arq))) {
		fseek(arq, Num_Reg * sizeof(reg), SEEK_SET);
		fread(&Produto, sizeof(reg), 1, arq);
		cout << "Nome Produto: " << Produto.nome << '\n';
		cout << "Quantidade..: " << Produto.quant << '\n';
		cout << "Valor unt...: " << Produto.valor << '\n';
		Linha(40, 2);
		cout << "Confirma registro? [S/N]: ";
		while (Validar == '\0') {
			Validar = _getch();
		}
		cout << Validar << '\n';
		if (toupper(Validar) == 'S') {
			cls();
			Linha(40, 2);
			cout << "           ALTERANDO REGISTRO          \n";
			Linha(40, 2);
			cout << "[ 1 ] Alterar Quantidade\n";
			cout << "[ 2 ] Alterar Valor Unid.\n";
			cout << "[ 3 ] Voltar\n";
			Linha(40, 2);
			cout << "Sua opção: ";
			cin >> subb_op;
			cls();
			Linha(40, 2);
			cout << "           ALTERANDO REGISTRO          \n";
			Linha(40, 2);
			setbuf(stdin, NULL);
			switch (subb_op)
			{
			case 1:
				cout << "Informe a nova quantidade: ";
				cin >> Produto.quant;
				while (Produto.quant <= 0) {
					Linha(40, 2);
					cout << "Quantidade inválida!";
					gotoxy(0, 5);
					cout << "                                        ";
					gotoxy(0, 5);
					cout << "Informe a nova quantidade: ";
					cin >> Produto.quant;
					for (int i = 0; i < 3; i++) {
						cout << "                                        \n";
					}
					gotoxy(0, 6);
				}
				Linha(40, 2);
				cout << "Confirmar dados [S/N]: ";
				setbuf(stdin, NULL);
				Validar = _getch();
				while (Validar == '\0') {
					Validar = _getch();
				}
				cout << '\n';
				Linha(40, 2);
				if (toupper(Validar) == 'S') {
					fseek(arq, Num_Reg * sizeof(reg), SEEK_SET);
					fwrite(&Produto, sizeof(reg), 1, arq);

					Carregar("Salvando", 2);
				}
				else {
					Carregar("Anulando", 1);
				}
				break;
			case 2:
				cout << "Informe o novo valor: ";
				cin >> Produto.valor;
				while (Produto.valor <= 0) {
					Linha(40, 2);
					cout << "Valor inválido!";
					gotoxy(0, 5);
					cout << "                                       ";
					gotoxy(0, 5);
					cout << "Informe o novo valor: ";
					cin >> Produto.valor;
					for (int i = 0; i < 3; i++) {
						cout << "                                        \n";
					}
					gotoxy(0, 6);
				}
				Linha(40, 2);
				cout << "Confirmar dados [S/N]: ";
				setbuf(stdin, NULL);
				Validar = _getch();
				while (Validar == '\0') {
					Validar = _getch();
				}
				cout << '\n';
				Linha(40, 2);
				if (toupper(Validar) == 'S') {
					fseek(arq, Num_Reg * sizeof(reg), SEEK_SET);
					fwrite(&Produto, sizeof(reg), 1, arq);

					Carregar("Salvando", 2);
				}
				else {
					Carregar("Anulando", 1);
				}
				break;
			case 3:
				break;
			default:
				break;
			}
		}
		else {
			Carregar("Anulando", 1);
		}
	}
	else {
		cout << "Registro não encontrado!\n";
		Linha(40, 1);
		pause();
	}
}

void remover(FILE * arq) {
	reg Produto;
	int Num_Reg, subb_op = 0;
	char Validar = 0;
	Carregar("Carregando dados", 1);
	cls();
	Linha(40, 2);
	cout << "          ENTRADA DE REGISTRO         \n";
	Linha(40, 2);
	cout << "Número do registro: ";
	cin >> Num_Reg;
	Num_Reg--;
	Linha(40, 2);
	if ((Num_Reg >= 0) && (Num_Reg < tamanho(arq))) {
		fseek(arq, Num_Reg * sizeof(reg), SEEK_SET);
		fread(&Produto, sizeof(reg), 1, arq);
		cout << "Nome Produto: " << Produto.nome << '\n';
		cout << "Quantidade..: " << Produto.quant << '\n';
		cout << "Valor unt...: " << Produto.valor << '\n';
		Linha(40, 2);
		cout << "Confirma registro? [S/N]: ";
		while (Validar == '\0') {
			Validar = _getch();
		}
		cout << Validar << '\n';
		if (toupper(Validar) == 'S') {
			reg Pessoa2;
			int tam = tamanho(arq), cont;
			for (cont = Num_Reg; cont < tam; cont++) {
				fseek(arq, (cont + 1) * sizeof(reg), SEEK_SET);
				fread(&Pessoa2, sizeof(reg), 1, arq);
				fseek(arq, cont * sizeof(reg), SEEK_SET);
				fwrite(&Pessoa2, sizeof(reg), 1, arq);
			}

			FILE * arq2 = fopen("dados2.dat", "wb+");

			for (int i = 0; i < (tam - 1); i++) {
				fseek(arq, i * sizeof(reg), SEEK_SET);
				fread(&Pessoa2, sizeof(reg), 1, arq);
				fwrite(&Pessoa2, sizeof(reg), 1, arq2);
			}
			fclose(arq);
			fclose(arq2);
			remove("dados.dat");
			rename("dados2.dat", "dados.dat");
			arq = fopen("dados.dat", "rb+");
			Linha(40, 2);
			Carregar("Apagando", 2);
		}
		else {
			Carregar("Anulando", 1);
		}
	}
	else {
		cout << "Registro não encontrado!\n";
		Linha(40, 1);
		pause();
	}
}

void movimentar(FILE * arq) {
	int sub_op = 0;
	if (tamanho(arq)) {
		do {
			cls();
			Linha(40, 2);
			cout << "              MOVIMENTAR              \n";
			Linha(40, 2);
			cout << "[ 1 ] Alterar Registro\n";
			cout << "[ 2 ] Remover Registro\n";
			cout << "[ 3 ] Voltar\n";
			Linha(40, 2);
			cout << "Sua opção: ";
			cin >> sub_op;
			Linha(40, 2);
			setbuf(stdin, NULL);
			switch (sub_op)
			{
			case 1:
				alterar(arq);
				break;
			case 2:
				remover(arq);
				break;
			case 3:
				break;
			default:
				cout << "Opção inválida!\n";
				Linha(40, 1);
				pause();
				break;
			}
		} while (sub_op != 3);
	}
	else {
		cout << "Nenhum registro encontrado!\n";
		Linha(40, 1);
		pause();
	}


}

void gera_txt(FILE * arq) {
	FILE * arq_txt = fopen("Relatório.txt", "w");
	reg Produto;
	float total = 0;
	fseek(arq, 0, SEEK_END);
	int tam = ftell(arq) / sizeof(reg);
	fprintf(arq_txt, ":==================================================:\n");
	fprintf(arq_txt, "|         RELATÓRIO DE PRODUTOS CADASTRADOS        |\n");
	fprintf(arq_txt, "|==================================================|\n");
	fprintf(arq_txt, "| Número de Registros: %-8d                    |\n", tam);
	fprintf(arq_txt, "|__________________________________________________|\n");
	fprintf(arq_txt, "|  Fechamento realizado em: ");

	time_t timer;
	struct tm *horarioLocal;

	time(&timer);
	horarioLocal = localtime(&timer);

	int dia = horarioLocal->tm_mday;
	int mes = horarioLocal->tm_mon + 1;
	int ano = horarioLocal->tm_year + 1900;

	int hora = horarioLocal->tm_hour;
	int min = horarioLocal->tm_min;
	int sec = horarioLocal->tm_sec;

	fprintf(arq_txt, "%2d/%2d/%4d - %2d:%2d:%2d  |\n", dia, mes, ano, hora, min, sec);
	fprintf(arq_txt, "|__________________________________________________|\n");
	fprintf(arq_txt, "| Produto                       | Qntd. | Valor U. |\n");
	fprintf(arq_txt, "|_______________________________|_______|__________|\n");
	if (tam) {
		for (int i = 0; i < L.Fim; i++) {
			fseek(arq, L.M[i].num_reg * sizeof(reg), SEEK_SET);
			fread(&Produto, sizeof(reg), 1, arq);
			fprintf(arq_txt, "| %-30s", Produto.nome);
			fprintf(arq_txt, "| %-6d", Produto.quant);
			fprintf(arq_txt, "| R$ %5.2f |\n", Produto.valor);
		}
		fprintf(arq_txt, "|_______________________________|_______|__________|\n");
	}
	else {
		fprintf(arq_txt, "| Nenhum Produto Foi Cadastrado Ainda!             |\n");
		fprintf(arq_txt, "|__________________________________________________|\n");
	}

	for (int i = 0; i < L.Fim; i++) {
		fseek(arq, L.M[i].num_reg * sizeof(reg), SEEK_SET);
		fread(&Produto, sizeof(reg), 1, arq);
		total += Produto.valor * Produto.quant;
	}

	fprintf(arq_txt, "| VALOR TOTAL AGREGADO          | R$ %13.2f |\n", total);
	fprintf(arq_txt, "\\_______________________________|__________________/\n");
	fprintf(arq_txt, " \\ Powered by AdrielRA. - %d /\n", ano);
	fprintf(arq_txt, "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	fclose(arq_txt);
}

void gera_relatorio(FILE * arq) {
	
	char Validar = 0;

	Carregar("Gerando arquivo txt", 2);
	cout << '\n';
	Linha(40, 2);
	atualizar_lista(arq);
	gera_txt(arq);
	cout << "Relatório salvo com sucesso!\n";
	Linha(40, 2);
	cout << "Deseja abrir o arquivo? [S/N]: ";
	while (Validar == '\0') {
		Validar = _getch();
	}
	if (toupper(Validar) == 'S') {
		system("notepad Relatório.txt");
	}
}

void apagar_dados(FILE * arq) {

	char ok = 0;
	char senha[8];

	Carregar("Verificando", 2);
	cls();
	if (autentificar()) {
		cout << "Todos os dados seram perdidos! [S/N]: ";
		ok = _getch();;
		cout << '\n';
		Linha(40, 2);
		if (toupper(ok) == 'S') {
			Carregar("Apagando", 3);
			fclose(arq);
			arq = fopen("dados.dat", "wb+");
			if (arq == NULL) {
				cout << "Erro: Falha Total\n";
				pause();
				exit(0);
			}
		}
		else {
			Carregar("Anulando", 2);
		}
	}
}