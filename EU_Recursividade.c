
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int fatorial(int x) {
	int res;
	if (x == 0) {
		res = 1;
	}
	else {
		res = x * fatorial(x - 1);
	}
	return res;
}

int main()
{
	int num, res;

	setlocale(LC_ALL, "Portuguese");
	printf("Ol�, mundo!\n");
	system("pause");
	printf("\nInforme um n�mero: ");
	scanf("%d", &num);


	//recursividade
	res = fatorial(num);

	printf("O fatorial: %d\n", res);

	system("pause");

    return 0;
}
