#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <locale>

#include <ctype.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	/*int tam, pos_Palavras[15], cont_Palavras = 0, tam_Palavra[15], cont = 0;
	char frase[30];

	cout << "Informe uma frase: ";
	fgets(frase, 30, stdin);

	tam = strlen(frase) - 1;
	_strlwr(frase);

	for (int i = 0; i < tam; i++) {


		if (i == 0 || frase[i-1] == ' ') {
			pos_Palavras[cont_Palavras] = i;
			cont_Palavras++;
		}
	}
	for (int i = 0; i < cont_Palavras; i++) {
		cout << pos_Palavras[i] << "\n";
	}
	for (int i = 0; i < cont_Palavras; i++) {
		tam_Palavra[cont] = 0;
		if (i < cont_Palavras-1) {
			for (int j = pos_Palavras[i]; j < pos_Palavras[i + 1] - 1; j++) {
				tam_Palavra[cont] += frase[j];
			}
		}
		else {
			for (int j = pos_Palavras[i]; j < tam; j++) {
				tam_Palavra[cont] += frase[j];
			}
		}
		cont++;
	}

	for (int i = 0; i < cont; i++) {
		cout << tam_Palavra[i] << "\n";
	}*/


	char frase[250], frase_nova[250], palavra1[50], palavra2[50];
	int achou, comeco = 0, tam1, tam2, tam3, i = 0, j, y, z, cont = 0, cont2;

	cout << "Digite uma frase: ";
	fgets(frase, 250, stdin);
	tam1 = strlen(frase) - 1;

	frase_nova[0] = '\0';

	for (i = 0; i <= tam1; i++) {
		if ((frase[i] != ' ') && (frase[i] != '\0')) {
			palavra1[cont] = frase[i];
			cont++;
		}
		else {
			palavra1[cont] = '\0';
			tam2 = strlen(frase_nova);
			j = 0;
			cont2 = 0;
			achou = 0;
			tam3 = strlen(palavra1);
			if (tam2 == 0) {
				for (y = 0; y <= tam3; y++) {
					frase_nova[y] = palavra1[y];
				}
				frase_nova[cont] = '\0';
			}
			else {
				while ((j <= tam2) && (achou == 0)) {
					if ((frase_nova[j] != ' ') && (frase_nova[j] != '\0')) {
						palavra2[cont2] = frase_nova[j];
						cont2++;
						j++;
					}
					else {
						palavra2[cont2] = '\0';
						comeco = j - strlen(palavra2);
						if (strcmp(palavra1, palavra2) < 0) {
							for (y = tam2; y >= comeco; y--) {
								frase_nova[y + tam3 + 1] = frase_nova[y];
							}
							frase_nova[comeco + tam3] = ' ';
							z = 0;
							for (y = comeco; y < comeco + tam3; y++) {
								frase_nova[y] = palavra1[z];
								z++;
							}
							achou = 1;
						}
						else {
							if (frase_nova[j] == '\0') {
								z = 0;
								for (y = tam2 + 1; y <= tam2 + tam3 + 1; y++) {
									frase_nova[y] = palavra1[z];
									z++;
								}
								frase_nova[y] = '\0';
								frase_nova[tam2] = ' ';
							}
						}
						j++;
						cont2 = 0;
					}
				}
			}
			palavra1[0] = '\0';
			cont = 0;
		}
	}

	strcat_s(frase_nova, '\0');
	cout << frase_nova;

	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}