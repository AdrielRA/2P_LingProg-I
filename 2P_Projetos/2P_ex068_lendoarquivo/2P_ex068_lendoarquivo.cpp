#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	FILE * txt;
	char Frase[250];

	txt = fopen("C:\\Exercicios\\TXT\\texto.txt", "a+");

	if (txt == NULL) {
		system("md C:\\Exercicios\\TXT");
		cout << "Falha na abertura!\n";
	}

	else {

		while (fgets(Frase, sizeof(Frase), txt)) {

			cout << "Frase lida: " << Frase;
		}
		fclose(txt);
	}

	cout << "\n";
	system("pause");
	return EXIT_SUCCESS;
}