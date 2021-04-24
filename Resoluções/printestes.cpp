#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

typedef struct {
	int M[4];
	int Topo;
}Pilha;

void Init(Pilha *P)
{
	P->Topo = 0;
}

void Push(Pilha *P, int X)
{
	if (P->Topo < 4)
	{
		P->M[P->Topo] = X;
		P->Topo++;
	}
}

int Pop(Pilha *P)
{
	P->Topo--;
	return P->M[P->Topo];
}

void main()
{
	Pilha P;
	Init(&P);
	Push(&P, 5);
	Push(&P, 17);
	Push(&P, 30);
	Push(&P, 35);
	Push(&P, 3);

	int X = Pop(&P);
	printf("Valor do topo=%d\n ", X);

	X = Pop(&P);
	printf("Valor do topo=%d\n ", X);

	Push(&P, 99);

	
	system("pause");
}