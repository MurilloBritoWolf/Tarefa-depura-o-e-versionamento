#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include "bits.h"
#include "Comprimento.h"
#include "Area.h"
#include "massa.h"
#include "Eletrica.h"
#include "Tempo.h"
#include "Temperatura.h"
#include "Velocidade.h"
#include "Volume.h"

void exibirMenu() {
    printf("\n===== MENU PRINCIPAL =====\n");
    printf("1. Unidades de comprimento\n");
    printf("2. Unidades de massa\n");
    printf("3. Unidades de volume\n");
    printf("4. Unidades de temperatura\n");
    printf("5. Unidades de velocidade\n");
    printf("6. Unidades de elétrica\n");
    printf("7. Unidades de área\n");
    printf("8. Unidades de tempo\n");
    printf("9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
    printf("0. Sair\n");
    printf("==========================\n");
    printf("Escolha uma opção: ");
}

int main(){
    system("chcp 65001 > null");
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura suporte para caracteres UTF-8
    int opcao;

    do {
        exibirMenu();
        
        // Lê a entrada do usuário com validação
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida. Encerrando o programa.\n");
            break;
        }

        switch (opcao) {
            case 1: comprimentomenu(); break;
            case 2: Menu_massa(); break;
            case 3: MenuVolume();   break;
            case 4: MenuTemperatura(); break;
            case 5: MenuVelocidade(); break;
            case 6: Menu_eletrica(); break;
            case 7: MenuArea(); break;
            case 8: MenuTempo(); break;
            case 9: menuBits(); break;
            case 0: 
                printf("Saindo do programa...\n"); 
                break;
            default: 
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
