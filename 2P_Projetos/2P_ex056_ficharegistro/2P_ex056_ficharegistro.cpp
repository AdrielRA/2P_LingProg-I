#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

using namespace std;

typedef struct Ficha {
	char nome[30];
	int idade;
	float peso, altura;
};


struct Cadastro {
	char endereco[40];
	int numero;
	Ficha Pessoa;
} Dados;

//struct Ficha Joao, Pedro, Jose, Alunos[50];

int main() {

	setlocale(LC_ALL, "Portuguese");

	Dados.Pessoa.idade = 17;
	strcpy(Dados.Pessoa.nome, "Joao da Silva");
	Dados.numero = 2;

	cout << "\nInforme um endereço: ";
	gets_s(Dados.endereco);

	cout << "\n" << Dados.Pessoa.nome << " mora na rua " << Dados.endereco << ", " << Dados.numero;

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}