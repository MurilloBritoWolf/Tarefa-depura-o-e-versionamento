
float converterVelocidade(float valor, int uniOrigem, int uniDestino) {
    if (uniOrigem == uniDestino) return valor;

    if (uniOrigem == 1) {
        if (uniDestino == 2) {
            return valor/3.6; 
        } else 
        if (uniDestino == 3) {
            return valor/1.609;
        }
    } else
     if (uniOrigem == 2) {
        if (uniDestino == 1) {
            return valor*3.6;
        } else 
        if (uniDestino == 3) {
            return valor*2.237;
        }
    } else 
    if (uniOrigem == 3) {
        if (uniDestino == 1) {
            return valor*1.609;
        } else 
        if (uniDestino == 2) {
            return valor/2.237;
        }
    }
    return 0.0; // Caso nenhuma condição seja atendida
}

void MenuVelocidade() {
    float valor, resultado;
    int unidadeOrigem, unidadeDestino, rep;

    do {
        printf("=== Conversor de Velocidade ===\n");
        printf("Qual a unidade de origem? \n");
        printf("1. km/h\n");
        printf("2. m/s\n");
        printf("3. mph\n");
        printf("=======================================\n");
        printf("Digite uma opção: ");
        scanf("%d", &unidadeOrigem);

        // Validação de entrada para unidade de origem
        while (unidadeOrigem != 1 && unidadeOrigem != 2 && unidadeOrigem != 3) {
            printf("Opção inválida! Digite uma unidade válida (1, 2 ou 3): ");
            scanf("%d", &unidadeOrigem);
        }

        printf("Digite o valor da velocidade: ");
        scanf("%f", &valor);

        printf("Converter para? \n");
        printf("1. km/h\n");
        printf("2. m/s\n");
        printf("3. mph\n");
        printf("=======================================\n");
        printf("Digite uma opção: ");
        scanf("%d", &unidadeDestino);

        // Validação de entrada para unidade de destino
        while (unidadeDestino != 1 && unidadeDestino != 2 && unidadeDestino != 3) {
            printf("Opção inválida! Digite uma unidade válida (1, 2 ou 3): ");
            scanf("%d", &unidadeDestino);
        }

        // Cálculo do resultado
        resultado = converterVelocidade(valor, unidadeOrigem, unidadeDestino);

        // Exibir o resultado com a unidade apropriada
        printf("=======================================\n");
        printf("Resultado: %.4f ", resultado);
        if (unidadeDestino == 1) printf("km/h\n");
        if (unidadeDestino == 2) printf("m/s\n");
        if (unidadeDestino == 3) printf("mph\n");
        printf("=======================================\n\n");

        // Perguntar se deseja continuar
        printf("Digite 1 para realizar outra conversão ou 0 para sair: ");
        scanf("%d", &rep);

    } while (rep != 0);
}
