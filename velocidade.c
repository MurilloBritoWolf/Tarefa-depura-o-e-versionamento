#include <stdio.h>

void exibirMenu(){
    printf("Menu unidade de entrada:\n");
    printf("1. km/h\n");
    printf("2. m/s\n");
    printf("3. mph\n");
    printf("Digite sua escolha:\n");
}

float converterVelocidade(float valor, int uniOrigem, int uniDestino) {
    // Se as unidades de origem e destino forem iguais, retorna o valor original
    if (uniOrigem == uniDestino) return valor;

    switch (uniOrigem) {
        case 1: // km/h
            switch (uniDestino) {
                case 2: // km/h para m/s
                    return valor / 3.6;
                case 3: // km/h para mph
                    return valor / 1.609;
                default:
                    return 0.0; // Caso de erro
            }
            break;
        
        case 2: // m/s
            switch (uniDestino) {
                case 1: // m/s para km/h
                    return valor * 3.6;
                case 3: // m/s para mph
                    return valor * 2.237;
                default:
                    return 0.0; // Caso de erro
            }
            break;

        case 3: // mph
            switch (uniDestino) {
                case 1: // mph para km/h
                    return valor * 1.609;
                case 2: // mph para m/s
                    return valor / 2.237;
                default:
                    return 0.0; // Caso de erro
            }
            break;

        default:
            return 0.0; 
    }

    return 0.0; 
}


int main(){   

    float valor, resultado;
    int unidadeOrigem, unidadeDestino;

    printf("=== Conversor de Unidades de Velocidade ===\n");
    exibirMenu();
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor da velocidade: ");
    scanf("%f", &valor);


    printf("Converter  destino:\n");
    exibirMenu();
    scanf("%d", &unidadeDestino);

    resultado = converterVelocidade(valor, unidadeOrigem, unidadeDestino);

    printf("Resultado: %.2f\n", resultado);
    return 0;
    
}