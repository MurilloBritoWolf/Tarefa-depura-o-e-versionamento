
// Função para realizar a conversão
void conversaoBits(int op1, double valor, int op2) {
    double valorEmBytes;

    // Converter a unidade de origem para bytes
    switch (op1) {
        case 1: // Bytes
            valorEmBytes = valor;
            break;
        case 2: // Kilobytes
            valorEmBytes = valor * 1024;
            break;
        case 3: // Megabytes
            valorEmBytes = valor * 1024 * 1024;
            break;
        case 4: // Gigabytes
            valorEmBytes = valor * 1024 * 1024 * 1024;
            break;
        case 5: // Terabytes
            valorEmBytes = valor * 1024LL * 1024 * 1024 * 1024; // Usando long long (LL)
            break;
        default:
            printf("Unidade inválida.\n");
            return;
    }

    // Converter de bytes para a unidade de destino
    double resultado;
    switch (op2) {
        case 1: // Bytes
            resultado = valorEmBytes;
            printf("\nResultado: %.4f B\n", resultado);
            break;
        case 2: // Kilobytes
            resultado = valorEmBytes / 1024;
            printf("\nResultado: %.4f KB\n", resultado);
            break;
        case 3: // Megabytes
            resultado = valorEmBytes / (1024 * 1024);
            printf("\nResultado: %.4f MB\n", resultado);
            break;
        case 4: // Gigabytes
            resultado = valorEmBytes / (1024 * 1024 * 1024);
            printf("\nResultado: %.4f GB\n", resultado);
            break;
        case 5: // Terabytes
            resultado = valorEmBytes / (1024LL * 1024 * 1024 * 1024); // Usando long long (LL)
            printf("\nResultado: %.4f TB\n", resultado);
            break;
        default:
            printf("Unidade de destino inválida.\n");
            return;
    }
}

// Função para exibir o menu e obter as entradas do usuário
void menuBits(){
    int op1, op2, rep;
    double valor;  // Alterando para double, já que estamos lidando com maior precisão

    do {
        printf("=== Conversor de Tamanho de Arquivo ===\n");
        printf("Escolha a unidade de origem:\n");
        printf("1. Bytes\n2. Kilobytes (KB)\n3. Megabytes (MB)\n4. Gigabytes (GB)\n5. Terabytes (TB)\n");
        printf("=======================================\n");
        printf("\nQual a unidade quer converter? (1-5): ");
        scanf("%d", &op1);

        if (op1 < 1 || op1 > 5) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        printf("\nDigite o valor a ser convertido: ");
        scanf("%lf", &valor);  // Usando %lf para garantir que a entrada seja lida como double

        printf("\nPara qual unidade deseja converter?\n");
        printf("1. Bytes\n2. Kilobytes (KB)\n3. Megabytes (MB)\n4. Gigabytes (GB)\n5. Terabytes (TB)\n");
        printf("Digite a unidade que deseja converter (1-5): ");
        scanf("%d", &op2);

        if (op2 < 1 || op2 > 5) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        // Chama a função de conversão
        printf("=======================================\n\n");
        conversaoBits(op1, valor, op2);
        printf("=======================================\n\n");

        // Perguntar se deseja continuar
        printf("Digite 1 para realizar outra conversão ou 0 para sair: ");
        scanf("%d", &rep);

    } while (rep != 0);
}

