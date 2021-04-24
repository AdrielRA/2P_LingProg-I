#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	FILE * res;
	char Frase[250];

	res = fopen("C:\\Exercicios\\TXT\\resultados.txt", "a+");

	if (res == NULL) {
		system("md C:\\Exercicios\\TXT");
		cout << "Falha na abertura!\n";
	}

	else {

		for (int i = 0; i <= 10; i++) {
			fprintf(res, "%d", i);
			fputc('\n', res);
		}

		fclose(res);
	}

	cout << "\n";
	system("pause");
	return EXIT_SUCCESS;
}