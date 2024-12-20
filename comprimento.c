#include <stdio.h>

// Função para realizar a conversão
void comprimentoconvert(int op1, float comp, int op2) {
    float valorEmMetros;

    // Converter a unidade de origem para metros
    switch (op1) {
        case 1: // Quilômetros
            valorEmMetros = comp * 1000;
            break;
        case 2: // Hectômetros
            valorEmMetros = comp * 100;
            break;
        case 3: // Decâmetros
            valorEmMetros = comp * 10;
            break;
        case 4: // Metros
            valorEmMetros = comp;
            break;
        case 5: // Decímetros
            valorEmMetros = comp / 10;
            break;
        case 6: // Centímetros
            valorEmMetros = comp / 100;
            break;
        case 7: // Milímetros
            valorEmMetros = comp / 1000;
            break;
        default:
            printf("Unidade inválida.\n");
            return;
    }

    // Converter de metros para a unidade de destino
    float resultado;
    switch (op2) {
        case 1: // Quilômetros
            resultado = valorEmMetros / 1000;
            printf("\nResultado: %.4f km\n", resultado);
            break;
        case 2: // Hectômetros
            resultado = valorEmMetros / 100;
            printf("\nResultado: %.4f hm\n", resultado);
            break;
        case 3: // Decâmetros
            resultado = valorEmMetros / 10;
            printf("\nResultado: %.4f dam\n", resultado);
            break;
        case 4: // Metros
            resultado = valorEmMetros;
            printf("\nResultado: %.4f m\n", resultado);
            break;
        case 5: // Decímetros
            resultado = valorEmMetros * 10;
            printf("\nResultado: %.4f dm\n", resultado);
            break;
        case 6: // Centímetros
            resultado = valorEmMetros * 100;
            printf("\nResultado: %.4f cm\n", resultado);
            break;
        case 7: // Milímetros
            resultado = valorEmMetros * 1000;
            printf("\nResultado: %.4f mm\n", resultado);
            break;
        default:
            printf("Unidade de destino inválida.\n");
            return;
    }
}
// Função para exibir o menu e obter as entradas do usuário
void comprimentomenu() {
    int op1, op2;
    float comp;

    printf("=== Conversor de Comprimento ===\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Quilômetros\n2. Hectômetros\n3. Decâmetros\n4. Metros\n5. Decímetros\n6. Centímetros\n7. Milímetros\n");
    printf("=================================\n");
    printf("\nQual a unidade quer converter?(1-7):\n ");
    scanf("%d", &op1);

    printf("\nDigite o valor a ser convertido:\n");
    scanf("%f", &comp);

    printf("\nPara qual unidade deseja converter?\n");
    printf("1. Quilômetros\n2. Hectômetros\n3. Decâmetros\n4. Metros\n5. Decímetros\n6. Centímetros\n7. Milímetros\n");
    printf("Digite a unidade que deseja converter (1-7): ");
    scanf("%d", &op2);

    // Chama a função de conversão
    comprimentoconvert(op1, comp, op2);
}


int main() {
    comprimentomenu();
    return 0;
}