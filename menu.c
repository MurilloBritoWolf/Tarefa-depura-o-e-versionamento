#include <stdio.h>
#include "tela.h"

void exibirMenu() {
    printf("===== MENU PRINCIPAL =====\n");
    printf("1. Unidades de comprimento\n");
    printf("2.Unidades de massa\n");
    printf("3. Unidades de volume\n");
    printf("4.Unidades de temperatura\n");
    printf("5. Unidades de velocidade\n");
    printf("6. Unidade de Eletrica\n");
    printf("7. Unidades de área\n");
    printf("8. Unidades de tempo\n");
    printf("9. Unidade de Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
    printf("0. Sair\n");
    printf("==========================\n");
    printf("Escolha uma opção: ");
}

int main() {
    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: Comprimento(); break;
            case 2: Massa(); break;
            case 3: Volume(); break;
            case 4: Temperatura(); break;
            case 5: Velocidade(); break;
            case 6: Eletrica(); break;
            case 7: Area(); break;
            case 8: Tempo(); break;
            case 9: Bits(); break;
            case 0: printf("Saindo do programa...\n"); break;
            default: printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
