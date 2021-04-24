#pragma once
#include <iostream>
#include "Funções.h"

//typedef struct {
//	char nome[30];
//	int quant;
//	float valor;
//	char Status;
//}reg;

//void Excluir(FILE * arq) {
//	reg contato;
//	char confirma;
//	int nr;
//
//	cout << "Informe o codigo do registro para excluir: ";
//	cin >> nr;
//	if ((nr <= tamanho(arq))&&(nr>0)) {
//		fseek(arq, (nr - 1) * sizeof(reg), 1, SEEK_SET);
//		fread(&contato, sizeof(reg), 1, arq);
//		if (contato.status == ' ') {
//			cout << "Nome:";
//			//....
//			cout << "Confirma: ";
//			cin >> confirma;
//			if (toupper(confirma)=='S') {
//				cout << "Excluindo";
//				fseek(arq, (nr-1) * sizeof(reg), SEEK_SET);
//				contato.status = '*';
//				fwrite(&contato, sizeof(reg), 1, arq);
//			}
//		}
//		else {
//			cout << "Registro inesistente\n";
//		}
//	}
//	else {
//		cout << "Registro inesistente\n";
//	}
//}