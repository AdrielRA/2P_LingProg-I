#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <locale>

int v1[5], v2[5], vr[5], i;
float vd[5];

void leitura(int*, int);
void mostrar(int*, int);
void mostrar(float*, int);

int somar();
void subtrair();
int multiplicar(int*, int*, int*);
void dividir(int*, int*, float*);

void menu();

int main() {

	setlocale(LC_ALL, "Portuguese");

	printf("________________________________________\n");
	printf("          LENDO PRIMEIRO VETOR          \n");
	printf("________________________________________\n\n");

	leitura(v1, 5);

	system("cls");

	printf("________________________________________\n");
	printf("           LENDO SEGUNDO VETOR          \n");
	printf("________________________________________\n\n");

	leitura(v2, 5);

	menu();

	return EXIT_SUCCESS;
}

void leitura(int* v, int t) {
	for (int i = 0; i < t; i++) {
		printf("Informe o %dº valor: ", i+1);
		scanf("%d", &v[i]);
	}
}

void mostrar(int* v, int t) {
	printf("|");
	for (int i = 0; i < t; i++) {
		printf(" %d |",v[i]);
	}
	printf("\n\n");
	system("pause");
}

void mostrar(float* v, int t) {
	printf("|");
	for (int i = 0; i < t; i++) {
		printf(" %.2f |", v[i]);
	}
	printf("\n\n");
	system("pause");
}

int somar() {
	return v1[i] + v2[i];
}

void subtrair() {
	for (i = 0; i < 5; i++) {
		vr[i] = v1[i] - v2[i];
	}
}

int multiplicar(int* v1, int* v2, int* v) {

	vr[i] = v1[i] * v2[i];

	return vr[i];
}

void dividir(int* v1, int* v2, float* v) {
	for (int i = 0; i < 5; i++) {

		if (v2[i] == 0) {
			v[i] = 0;
		}
		else {
			v[i] = (float)v1[i] / v2[i];
		}
	}
}

void menu() {

	int op = 0;

	do {
		system("cls");
		printf("________________________________________\n");
		printf("          OPERAÇÕES COM VETORES         \n");
		printf("________________________________________\n\n");
		printf("[ 1 ] Soma\n");
		printf("[ 2 ] Subtração\n");
		printf("[ 3 ] Multiplicação\n");
		printf("[ 4 ] Divisão\n");
		printf("[ 5 ] Sair\n\n");
		printf("Sua opção: ");
		scanf("%d", &op);
		system("cls");

		switch (op)
		{
		case 1:
			for (i = 0; i < 5; i++) {
				vr[i] = somar();
			}
			printf("________________________________________\n");
			printf("      Resultado da soma de V1 e V2      \n");
			printf("________________________________________\n\n");
			mostrar(vr, 5);
			break;
		case 2:
			subtrair();
			printf("________________________________________\n");
			printf("    Resultado da subtração de V1 e V2   \n");
			printf("________________________________________\n\n");
			mostrar(vr, 5);
			break;
		case 3:
			for (i = 0; i < 5; i++) {
				vr[i] = multiplicar(v1,v2,vr);
			}
			printf("________________________________________\n");
			printf("  Resultado da multiplicação de V1 e V2 \n");
			printf("________________________________________\n\n");
			mostrar(vr, 5);
			break;
		case 4:
			dividir(v1, v2, vd);
			printf("________________________________________\n");
			printf("    Resultado da divisão de V1 e V2     \n");
			printf("________________________________________\n\n");
			mostrar(vd, 5);
			break;
		case 5: break;
		default:
			printf("________________________________________\n");
			printf("            Opção inválida!             \n");
			printf("________________________________________\n\n");
			system("pause");
			break;
		}
	} while (op != 5);
}