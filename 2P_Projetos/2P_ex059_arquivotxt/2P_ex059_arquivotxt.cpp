#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int resposta;
	/*system("md ");*/
	FILE * arq;
	char carac;
	arq = fopen("caract.dat", "a");

	if (arq == NULL) { cout << " » ERROR: Algo inesperado aconteceu!\n"; }
	else {

		cout << "\nDigite um caractere: ";
		scanf("%c*c", &carac);
		while (carac != 'f') {
			fputc(carac, arq);
			if (ferror(arq)) {
				cout << "Erro na gravação do caractere";
			}
			else cout << "Gravação realizada com sucesso";
			cout << "Digite outro caracter: ";
			scanf("%c*c", &carac);
		}

		/*cout << " » SUCESSO: Arquivo aberto!\n";
		resposta = fclose(arq);
		if (resposta == 0) { cout << " » SUCESSO: Arquivo fechado!\n"; }
		else { cout << " » ERROR: Falha ao fechar arquivo!\n"; }*/
	}

	fclose(arq);

	getchar();

	return EXIT_SUCCESS;
}