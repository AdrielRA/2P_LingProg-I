#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <locale>

using namespace std;


int main(void) {

	setlocale(LC_ALL, "Portuguese");

	int I;
	float A, B, C;

	cout << "Entre com o valor de A: ";
	scanf("%f", &A);

	cout << "Entre com o valor de B: ";
	scanf("%f", &B);

	while (A == B) {
		cout << "Entre com um valor diferente para B: ";
		scanf("%f", &B);
	}

	cout << "Entre com o valor de C: ";
	scanf("%f", &C);

	while (A == C || B == C) {
		cout << "Entre com um valor diferente para C: ";
		scanf("%f", &C);
	}

	system("cls");

	cout << "________________________________________\n";
	cout << "                 OPÇÕES                 \n";
	cout << "________________________________________\n\n";
	cout << "[ 1 ] A, B e C em ordem crescente\n";
	cout << "[ 2 ] A, B e C em ordem decrescente\n";
	cout << "[ 3 ] O maior fica entre os outros dois núm.\n\n";
	cout << "Sua opção: ";
	cin >> I;
	while (I < 1 || I > 3) {
		cout << "Opção inválida! Tente novamente: ";
		cin >> I;
	}

	switch (I) {
	case 1:
		if (A < B && B < C) {
			cout << A << " " << B << " " << C;
		}
		else if (A < C && C < B) {
			cout << A << " " << C << " " << B;
		}
		else if (B < A && A < C) {
			cout << B << " " << A << " " << C;
		}
		else if (B < C && C < A){
			cout << B << " " << C << " " << A;
		}
		else if (C < A && A < B) {
			cout << C << " " << A << " " << B;
		}
		else  {
			cout << C << " " << B << " " << A;
		}
		
		break;
	case 2:
		if (A > B && B > C) {
			cout << A << " " << B << " " << C;
		}
		else if (A > C && C > B) {
			cout << A << " " << C << " " << B;
		}
		else if (B > A && A > C) {
			cout << B << " " << A << " " << C;
		}
		else if (B > C && C > A) {
			cout << B << " " << C << " " << A;
		}
		else if (C > A && A > B) {
			cout << C << " " << A << " " << B;
		}
		else {
			cout << C << " " << B << " " << A;
		}
		break;
	case 3:
		if (A > B && B > C) {
			cout << B << " " << A << " " << C;
		}
		else if (B > A && A > C) {
			cout << A << " " << B << " " << C;
		}
		else {
			cout << A << " " << C << " " << B;
		}
		break;
	default: break;
	}
	cout << "\n\n";
	system("pause");

	return EXIT_SUCCESS;
}