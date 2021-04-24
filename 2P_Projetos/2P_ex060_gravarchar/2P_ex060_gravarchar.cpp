#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int resposta;
	FILE * arq;
	char carac;
	arq = fopen("carac.dat", "r");

	if (arq == NULL) { cout << " » ERROR: Algo inesperado aconteceu!\n"; }
	else {

		do {
			carac = fgetc(arq);
			if (ferror(arq)) {
				cout << "\nErro na leitura do caractere!";
			}
			else {
				if (!feof(arq)) {
					cout << "Leitura realizada com sucesso!\n";
					cout << "Caracter lido: " << carac << "\n";
				}
			}
		} while (!feof(arq));
	}

	fclose(arq);

	getchar();

	return EXIT_SUCCESS;
}


/*

FILE * arq;
char palavra[30];
arq = fopen("arquivoo.dat", "a");
if(arq == NULL){
	cout << "Erro na abertura\n";
}
else{
	cout << "Informe uma palvra: ";
	gets_s(palavra);
	while(_stricmp(palavra, "fim") != 0){
		fputs(palavra, arq);
		if(ferror(arq)){
			cout << "Erro na gravação!\n";
		}
		else{
			cout << "Gravação realizada com sucesso!\n";
			cout << "Informe outra palavra: ";
			gets_s(palavra);
		}
	}
}

fclose(arq);


*/