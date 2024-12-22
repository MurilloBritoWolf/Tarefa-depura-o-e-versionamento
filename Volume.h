#include <stdio.h>

void converterVolume(double valor, char unidadeEntrada, char unidadeSaida) {
    double valorEmLitros;

    // Converter o valor de entrada para litros
    switch (unidadeEntrada) {
        case 'L': // Litros
            valorEmLitros = valor;
            break;
        case 'm': // Mililitros
            valorEmLitros = valor / 1000;
            break;
        case 'M': // Metros cúbicos
            valorEmLitros = valor * 1000;
            break;
        default:
            printf("Unidade de entrada inválida.\n");
            return;
    }

    // Converter de litros para a unidade de saída
    switch (unidadeSaida) {
        case 'L': // Litros
            printf("%.2f L\n", valorEmLitros);
            break;
        case 'm': // Mililitros
            printf("%.2f mL\n", valorEmLitros * 1000);
            break;
        case 'M': // Metros cúbicos
            printf("%.6f m³\n", valorEmLitros / 1000);
            break;
        default:
            printf("Unidade de saída inválida.\n");
    }
}

int main() {
    double valor;
    char unidadeEntrada, unidadeSaida;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de entrada (L - Litros, m - Mililitros, M - Metros cúbicos): ");
    scanf(" %c", &unidadeEntrada);

    printf("Digite a unidade de saída (L - Litros, m - Mililitros, M - Metros cúbicos): ");
    scanf(" %c", &unidadeSaida);

    converterVolume(valor, unidadeEntrada, unidadeSaida);

    return 0;
}
