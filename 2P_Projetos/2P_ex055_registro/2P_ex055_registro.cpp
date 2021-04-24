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

	Ficha Joao, Pedro, Alunos[50];
	Joao.idade = 37;
	strcpy(Joao.nome, "João da Silva");

	Alunos[2].peso = 70;
	Alunos[2].altura = 1.73;

	cout << "\n\tO " << Joao.nome << " tem " << Joao.idade << " anos.";
	cout << "\n\n\tAltura: " << Alunos[2].altura;

	Dados.numero = 123;
	Dados.Pessoa.idade = 51;

	cout << "\n\n\tEstrutura de Dados - Numeros: " << Dados.numero << " - Idade: " << Dados.Pessoa.idade;

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}