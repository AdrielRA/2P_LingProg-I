#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio2.h>


void func002() {

    int i;
	float N1 = 0.0, N2 = 0.0, H = 0.0;

    textbackground(BLUE);
    textcolor(WHITE);
    printf("========================================\n");
    printf("          CALCULO DA HIPOTENUSA         \n");
    printf("========================================\n");
    textbackground(LIGHTBLUE);
    for(i = 0; i < 4; i++){
        printf("                                        \n");
    }
    textbackground(BLUE);
    for(i = 0; i < 4; i++){
        printf("                                        \n");
    }
    textbackground(LIGHTBLUE);

    gotoxy(2,5);

	printf("Informe o lado maior: ");
	scanf("%f", &N1);

	gotoxy(2,6);
	printf("Informe o lado menor: ");
	scanf("%f", &N2);

	while (N2 > N1) {
        gotoxy(1,8);
        textbackground(RED);
        textcolor(YELLOW);
		printf(" Lado  deve ser menor!                  ");
		gotoxy(1,6);
		textbackground(LIGHTBLUE);
		textcolor(WHITE);
		printf("                                        ");
		gotoxy(2,6);
		printf("Informe o lado menor: ");
		scanf("%f", &N2);


	}

	H = sqrt(pow(N1, 2) + pow(N2, 2));

    textbackground(BLUE);
    gotoxy(1,8);
    printf("========================================\n");
	printf(" A Hipotenusa de %.2f e %.2f é %.2f\n", N1, N2, H);
	printf("========================================\n");
	textbackground(BLACK);

	system("pause");
}
