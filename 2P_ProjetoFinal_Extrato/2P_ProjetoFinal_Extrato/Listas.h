#pragma once
#define TAM 250

using namespace std;

typedef struct {
	char chave[30];
	int num_reg;
}Elem;

typedef struct {
	Elem M[TAM];
	int Fim;
}Lista;

void ListInit(Lista * L) {
	L->Fim = 0;
}

void Ins(Lista * L, Elem X) {
	if (L->Fim < TAM) {
		int I = L->Fim;
		while ((I > 0) && strcmp(X.chave, L->M[I - 1].chave) < 0) {
			strcpy(L->M[I].chave, L->M[I - 1].chave);
			L->M[I].num_reg = L->M[I - 1].num_reg;
			I--;
		}
		strcpy(L->M[I].chave, X.chave);
		L->M[I].num_reg = X.num_reg;
		L->Fim++;
	}
}

char Encontrar(Lista * L, char * nome) {
	for (int i = 0; i < L->Fim; i++) {
		if (strcmp(L->M[i].chave, nome) == 0 ) {
			return 1;
		}
		else if (strcmp(L->M[i].chave, nome) >  0) {
			return 0;
		}
	}
	return 0;
}

char LisEmpty(Lista * L) {
	return !L->Fim;
}

char LisFull(Lista * L) {
	return L->Fim == TAM;
}
