#include <stdlib.h>
#include <conio2.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main() {

    int op = 0, i = 0;

	setlocale(LC_ALL, "Portuguese");

    do{
        clrscr();
        textbackground(BLUE);
        textcolor(WHITE);
        printf("========================================\n");
        printf("            MENU DE EXECUÇÃO            \n");
        printf("========================================\n");
        textbackground(LIGHTBLUE);
        printf("                                        \n");
        printf(" [ -1] Ver opções disponíveis           \n");
        printf(" [999] Sair                             \n");
        printf("                                        \n");
        textbackground(BLUE);
        for(i = 0; i <= 2; i++){
            printf("                                        \n");
        }
        gotoxy(2,9);
        printf("CÓD. Programa: ");
        scanf("%d",&op);
        textbackground(BLACK);
        textcolor(WHITE);
        clrscr();
        switch(op){
            case -1:
                clrscr();
                textbackground(WHITE);
                textcolor(BLACK);
                printf("========================================\n");
                printf("          PROGRAMAS DISPONIVEIS         \n");
                printf("========================================\n");
                printf("  CÓD  | NOME                           \n");
                textbackground(LIGHTGRAY);
                printf(" [ 0 ] | ex000_olamundo                 \n");
                textbackground(WHITE);
                printf(" [ 1 ] | ex001_declaraçaovariaveis      \n");
                textbackground(LIGHTGRAY);
                printf(" [ 2 ] | ex002_pitagoraso               \n");
                textbackground(WHITE);
                printf(" [ 3 ] | ex003_batimentocardiaco        \n");
                textbackground(LIGHTGRAY);
                printf(" [ 4 ] | ex004_entradaesaida            \n");
                textbackground(WHITE);
                printf(" [ 5 ] | ex005_conversotemperatura      \n");
                textbackground(LIGHTGRAY);
                printf(" [ 6 ] | ex006_mediaidade               \n");
                textbackground(WHITE);
                printf(" [ 7 ] | ex007_consumoveiculo           \n");
                textbackground(LIGHTGRAY);
                printf(" [ 8 ] | ex008_condicionais             \n");
                textbackground(WHITE);
                printf(" [ 9 ] | ex009_mediaponderada           \n");
                textbackground(LIGHTGRAY);
                printf(" [ 10] | ex010_mostramaiornúmero        \n");
                textbackground(WHITE);
                printf(" [ 11] | ex011_parouímpar               \n");
                textbackground(LIGHTGRAY);
                printf(" [ 12] | ex012_menusimples              \n");
                textbackground(WHITE);
                printf("========================================\n\n");
                textbackground(BLACK);
                textcolor(WHITE);
                system("pause");
                break;
            case 0:
                func000();
                break;
            case 1:
                func001();
                break;
            case 2:
                func002();
                break;
            case 3:
                func003();
                break;
            case 4:
                func004();
                break;
            case 5:
                func005();
                break;
            case 6:
                func006();
                break;
            case 7:
                func007();
                break;
            case 8:
                func008();
                break;
            case 9:
                func009();
                break;
            case 10:
                func010();
                break;
            case 11:
                func011();
                break;
            case 12:
                func012();
                break;
            case 999:break;
            default:
                printf("========================================\n");
                printf("           Opção inexistente!           \n\n");
                printf("========================================\n\n");
                system("pause");
                break;
        }

    }while(op != 999);

    clrscr();
    textbackground(RED);
    textcolor(YELLOW);
    printf("========================================\n");
    printf("                                        \n");
    printf("                                        \n");
    printf("                                        \n");
    printf("========================================\n");
    gotoxy(2,3);
    printf("Finalizando Programas");

	for(i=0; i<=3; i++){
        printf(".");
        Sleep(500);
	}

	gotoxy(1,3);
	printf("                                        \n");
	gotoxy(2,3);
    printf("Programas Finalizados.");
    Sleep(1000);
	textbackground(BLACK);
    textcolor(WHITE);

    printf("\n\n");

	return EXIT_SUCCESS;
}
