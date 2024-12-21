
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

// Função que exibe o menu de opções para o usuário
void Menu_eletrica(){
    int unidadeEntrada, unidadeSaida,rep;
    double valor, resultado;
do{
    printf("=== Conversor de Tempo ===\n");
    printf("Selecione a unidade de entrada:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv ou hp)\n");
    printf("=======================================\n");
    printf("Escolha: ");
    scanf("%d", &unidadeEntrada); // unidade de entrada

    printf("Digite o valor a ser convertido: \n\n");
    scanf("%lf", &valor); // Recebe o valor a ser convertido

    printf("\nSelecione a unidade de saída:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv ou hp)\n");
    printf("=======================================\n");
    printf("Escolha: \n\n");
    scanf("%d", &unidadeSaida); // Recebe a escolha da unidade de saída

    // Realiza a conversão
    resultado = converterPotencia(valor, unidadeEntrada, unidadeSaida);

    // Exibe o resultado ou uma mensagem de erro
    if (resultado != -1) {
        printf("\nResultado: %.2lf\n", resultado);
        if (unidadeSaida == 1) printf("W\n");
        if (unidadeSaida == 2) printf("KW\n");
        if (unidadeSaida == 3) printf("hp\n");
    } else {
        printf("\nUnidade inválida selecionada.\n");
    }
    printf("=======================================\n\n");

        // Perguntar se deseja continuar
        printf("Digite 1 para realizar outra conversão ou 0 para sair: ");
        scanf("%d", &rep);

    } while (rep != 0);
}

