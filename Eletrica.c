#include <stdio.h>
#include "tela.h"

// Função que exibe o menu de opções para o usuário
void exibirMenu() {
    printf("Selecione a unidade de entrada:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv ou hp)\n");
    printf("Escolha: ");
}

// Função que realiza a conversão entre as unidades de potência
double converterPotencia(double valor, int entrada, int saida) {
    double watts;

    // Converter a entrada para Watts
    if (entrada == 1) { // Watts
        watts = valor;
    } else if (entrada == 2) { // Quilowatts
        watts = valor * 1000;
    } else if (entrada == 3) { // Cavalos-vapor
        watts = valor * 735.5;
    } else {
        return -1; // Entrada inválida
    }

    // Converter de Watts para a unidade de saída
    if (saida == 1) { // Watts
        return watts;
    } else if (saida == 2) { // Quilowatts
        return watts / 1000;
    } else if (saida == 3) { // Cavalos-vapor
        return watts / 735.5;
    } else {
        return -1; // Saída inválida
    }
}

// Função principal onde o programa começa a execução
int main() {
    int unidadeEntrada, unidadeSaida;
    double valor, resultado;

    exibirMenu(); // Exibe o menu para o usuário escolher a unidade de entrada
    scanf("%d", &unidadeEntrada); // Recebe a escolha da unidade de entrada

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor); // Recebe o valor a ser convertido

    printf("\nSelecione a unidade de saída:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv ou hp)\n");
    printf("Escolha: ");
    scanf("%d", &unidadeSaida); // Recebe a escolha da unidade de saída

    // Realiza a conversão de acordo com as unidades escolhidas
    resultado = converterPotencia(valor, unidadeEntrada, unidadeSaida);

    // Exibe o resultado ou uma mensagem de erro caso a conversão tenha falhado
    if (resultado != -1) {
        printf("\nResultado: %.2lf\n", resultado);
    } else {
        printf("\nUnidade inválida selecionada.\n");
    }

    return 0;
}
