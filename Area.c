#include <stdio.h>
#include "tela.h"

// Função que retorna a conversão de metros quadrados para centimetros quadrados
double metrosParaCentimetros(double metros) {
    return metros * 10000;
}

// Função que retorna a conversão de centimetros quadrados para metros quadrados
double centimetrosParaMetros(double centimetros) {
    return centimetros / 10000;
}

int main() {
    int opcao;
    double valor, resultado;

    printf("Conversor de Unidades de Area\n");
    printf("1. Converter de metros quadrados para centimetros quadrados\n");
    printf("2. Converter de centimetros quadrados para metros quadrados\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em metros quadrados: ");
        scanf("%lf", &valor);
        resultado = metrosParaCentimetros(valor);
        printf("%.2f metros quadrados equivalem a %.2f centimetros quadrados.\n", valor, resultado);
    } else if (opcao == 2) {
        printf("Digite o valor em centimetros quadrados: ");
        scanf("%lf", &valor);
        resultado = centimetrosParaMetros(valor);
        printf("%.2f centimetros quadrados equivalem a %.2f metros quadrados.\n", valor, resultado);
    } else {
        printf("opcao invalida.\n");
    }

    return 0;
}
