#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Pilhas.h"
void main()
{
	int N;
	Pilha P;
	Init(&P);

	printf("Entre com um numero inteiro:");
	scanf("%d", &N);
	do
	{
		Push(&P,N % 2);
		N = N / 2;
	} while (N != 0);

	while (!Empty(&P))
	{
		printf("%d", Pop(&P));
	}

	printf("\n");
	system("pause");
}