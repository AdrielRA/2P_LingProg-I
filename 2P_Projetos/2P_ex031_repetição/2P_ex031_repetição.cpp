#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

void main() {

	setlocale(LC_ALL, "Portuguese");

	int a, x;

	cout << "REPETINDO COM O FOR... \n";
	for (a = 1; a <= 20; a++)
		cout << "O valor de a é:" << a << "\n";

	cout << "\n\n";

	for (a = 15; a >= 1; a = a - 2)
	{
		cout << "Digite um número: ";
		cin >> x;
	}
	cout << "O valor de x é: " << x << "\n";

	cout << "\n\n";

	cout << "REPETINDO COM O WHILE... \n";
	x = 0;
	while (x != 5)
	{
		cout << "Valor de x = " << x << "\n";
		x += 1; // contador incrementado em 1 unidade
	}
	cout << "Valor de x depois que sair da estrutura = " << x << "\n";
	cout << "\n\n";

	cout << "REPETINDO COM DO-WHILE... \n";
	x = 0; // inicialização da variável x com o valor 0
	do
	{
		cout << "Valor de x = " << x << "\n";
		x += 1; // contador incrementado em 1 unidade
	} while (x != 5);
	cout << "Valor de x depois que sair da estrutura = " << x << "\n";

	cout << "\n\n";

	system("pause");

}