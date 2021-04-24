#pragma once

#define SENHA "admin"

#include <Windows.h>
#include "Funções.h"
#include <iostream>
#include "Listas.h"
#include <conio.h>
#include <time.h>
#include <string>

using namespace std;

typedef struct {
	char senha[8];
	char logado;
}Login;

void cls();

void pause();

void gotoxy(int, int);

void Linha(int, char);

void Carregar(const char *, int);

//void redefinir_logado(Login * sys_login, FILE * login) {
//	cout << "Se manter logado [S/N]: ";
//	if (toupper(_getch()) == 'S') {
//		sys_login->logado = 1;
//	}
//	else {
//		sys_login->logado = 0;
//	}
//	fwrite(sys_login, sizeof(Login), 1, login);
//	cout << '\n';
//}
//
//void redefinir_senha(Login * sys_login, FILE * login) {
//
//	login = fopen("login.slog", "wb+");
//	if (login == NULL) {
//		cout << "Erro: Falha Total\n";
//		pause();
//		exit(0);
//	}
//
//	char ver_senha[8];
//	char cont, caract;
//	while (strcmp(sys_login->senha, ver_senha) != 0) {
//		cls();
//		fflush(stdin);
//		Linha(40, 2);
//		cout << "            CONTROLE DE CONTAS          \n";
//		Linha(40, 2);
//		cout << "Definindo senha de login\n";
//		Linha(40, 2);
//		cont = caract = 0;
//		cout << "Defina a senha de login : ";
//		while (caract != '\r') {
//			caract = _getch();
//			if (cont > 0 && caract == '\b') {
//				cont--;
//				gotoxy(26 + cont, 8);
//				cout << ' ';
//				gotoxy(26 + cont, 8);
//			}
//			_getch();
//			sys_login->senha[cont] = caract;
//			if (caract != '\b' && caract != '\r') {
//				cont++;
//				cout << '*';
//			}
//		}
//		sys_login->senha[cont] = '\0';
//		cout << '\n';
//		cont = caract = 0;
//		cout << "Confirmar senha de login: ";
//		while (caract != '\r') {
//			caract = _getch();
//			if (cont > 0 && caract == '\b') {
//				cont--;
//				gotoxy(26 + cont, 9);
//				cout << ' ';
//				gotoxy(26 + cont, 9);
//			}
//			_getch();
//			ver_senha[cont] = caract;
//			if (caract != '\b' && caract != '\r') {
//				cont++;
//				cout << '*';
//			}
//		}
//		ver_senha[cont] = '\0';
//		cout << '\n';
//		Linha(40, 2);
//		if (strcmp(sys_login->senha, ver_senha) != 0) {
//			cout << "Senhas não batem!\n";
//			pause();
//		}
//	}
//	redefinir_logado(sys_login, login);
//}
//
//void ler_senha(Login * sys_login, FILE * login, char logando) {
//	char ver_senha[8];
//	char cont = 0, caract = 0;
//	while (strcmp(sys_login->senha, ver_senha) != 0) {
//		cls();
//		fflush(stdin);
//		Linha(40, 2);
//		cout << "            CONTROLE DE DADOS           \n";
//		Linha(40, 2);
//		cout << "             AUTENTIFICAÇÃO             \n";
//		Linha(40, 2);
//		cont = caract = 0;
//		cout << "Senha: ";
//		while (caract != '\r') {
//			caract = _getch();
//			if (caract == '\0') {
//				caract = _getch();
//				if (cont) {
//					cont--;
//				}
//
//			}
//			if (cont > 0 && caract == '\b') {
//				cont--;
//				gotoxy(7 + cont, 8);
//				cout << ' ';
//				gotoxy(7 + cont, 8);
//			}
//			_getch();
//			ver_senha[cont] = caract;
//			if (caract != '\b' && caract != '\r') {
//				cont++;
//				cout << '*';
//			}
//		}
//		ver_senha[cont] = '\0';
//		cout << '\n';
//		Linha(40, 2);
//		if (strcmp(sys_login->senha, ver_senha) != 0) {
//			cout << "Senha incorreta!\n";
//			pause();
//		}
//	}
//	if (logando) {
//		login = fopen("login.slog", "wb+");
//		if (login == NULL) {
//			cout << "Erro: Falha Total\n";
//			pause();
//			exit(0);
//		}
//		redefinir_logado(sys_login, login);
//	}
//}

char autentificar() {

	char senha[8];
	char cont = 0, caract = 0;
	
	cls();
	setbuf(stdin, NULL);
	Linha(40, 2);
	cout << "             AUTENTIFICAÇÃO             \n";
	Linha(40, 2);
	cont = caract = 0;
	cout << "Senha: ";
	while (caract != '\r') {
		caract = _getch();
		if (caract == '\0') {
			caract = _getch();
			if (cont) {
				cont--;
			}

		}
		if (cont > 0 && caract == '\b') {
			cont--;
			gotoxy(7 + cont, 8);
			cout << ' ';
			gotoxy(7 + cont, 8);
		}
		_getch();
		senha[cont] = caract;
		if (caract != '\b' && caract != '\r') {
			cont++;
			cout << '*';
		}
	}
	senha[cont] = '\0';
	cout << '\n';
	Linha(40, 2);
	if (strcmp(SENHA, senha) != 0) {
		cout << "Senha incorreta!\n";
		Linha(40, 1);
		pause();
	}

	return !(strcmp(SENHA, senha));
}

//char Logar() {
//
//	FILE * login;
//	Login sys_login;
//
//	login = fopen("login.slog", "rb+");
//	if (login == NULL) {
//		login = fopen("login.slog", "wb+");
//		if (login == NULL) {
//			cout << "Erro: Falha Total\n";
//			pause();
//			exit(0);
//		}
//	}
//	fseek(login, 0, SEEK_END);
//	if ((ftell(login) / sizeof(Login)) > 0) {
//		fseek(login, 0, SEEK_SET);
//		fread(&sys_login, sizeof(Login), 1, login);
//		if (!sys_login.logado) {
//			ler_senha(&sys_login, login, 1);
//		}
//	}
//	else {
//		redefinir_senha(&sys_login, login);
//	}
//	fclose(login);
//	return sys_login.logado;
//
//}