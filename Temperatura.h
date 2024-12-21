int temp_entrada() {
    int t_entrada;
    do {
        printf("=== Conversor de Temperatura ===\n");
        printf("Selecione a unidade de entrada:\n");
        printf("1. Celsius (ºC)\n");
        printf("2. Fahrenheit (ºF)\n");
        printf("3. Kelvin (K)\n");
        printf("=======================================\n");
        printf("Escolha: ");
        scanf("%d", &t_entrada);

        if (t_entrada<1 || t_entrada>3) {
            printf("Valor inválido! Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (t_entrada<1 || t_entrada>3);
    
    return t_entrada;
}

// Função que exibe a unidade de temperatura de saída
int temp_saida() {
    int t_saida;
    do {
        printf("Selecione a unidade de saída:\n");
        printf("1. Celsius (ºC)\n");
        printf("2. Fahrenheit (ºF)\n");
        printf("3. Kelvin (K)\n");
        printf("=======================================\n");
        printf("Escolha: ");
        scanf("%d", &t_saida);

        if (t_saida < 1 || t_saida > 3) {
            printf("Valor inválido! Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (t_saida < 1 || t_saida > 3);

    return t_saida; // Retorna o valor escolhido
}

// Funções de conversão
float conv1() { // Celsius para Fahrenheit
    float t_celsius, t_fahrenheit;
    printf("Entre com a temperatura em Celsius\n");
    scanf("%f", &t_celsius);
    t_fahrenheit = (1.8 * t_celsius) + 32;
    return t_fahrenheit;
}

float conv2() { // Celsius para Kelvin
    float t_celsius, t_kelvin;
    printf("Entre com a temperatura em Celsius\n");
    scanf("%f", &t_celsius);
    t_kelvin = t_celsius + 273.15;
    return t_kelvin;
}

float conv3() { // Fahrenheit para Celsius
    float t_fahrenheit, t_celsius;
    printf("Entre com a temperatura em Fahrenheit\n");
    scanf("%f", &t_fahrenheit);
    t_celsius = (t_fahrenheit - 32) / 1.8;
    return t_celsius;
}

float conv4() { // Fahrenheit para Kelvin
    float t_fahrenheit, t_kelvin;
    printf("Entre com a temperatura em Fahrenheit\n");
    scanf("%f", &t_fahrenheit);
    t_kelvin = ((t_fahrenheit - 32) * 0.55 + 273.15);
    return t_kelvin;
}

float conv5() { // Kelvin para Celsius
    float t_kelvin, t_celsius;
    printf("Entre com a temperatura em Kelvin\n");
    scanf("%f", &t_kelvin);
    t_celsius = t_kelvin - 273.15;
    return t_celsius;
}

float conv6() { // Kelvin para Fahrenheit
    float t_kelvin, t_fahrenheit;
    printf("Entre com a temperatura em Kelvin\n");
    scanf("%f", &t_kelvin);
    t_fahrenheit = (t_kelvin - 273.15) * 1.8 + 32;
    return t_fahrenheit;
}

// Função do menu de conversão de temperatura
void MenuTemperatura() {
    int t_entrada, t_saida, repeat;
    float resultado;
    
    do {
        t_entrada = temp_entrada();
        switch (t_entrada) {
            case 1: printf("Você escolheu Celsius\n"); break;
            case 2: printf("Você escolheu Fahrenheit\n"); break;
            case 3: printf("Você escolheu Kelvin\n"); break;
        }

        t_saida = temp_saida();
        switch (t_saida) {
            case 1: printf("Você escolheu Celsius\n"); break;
            case 2: printf("Você escolheu Fahrenheit\n"); break;
            case 3: printf("Você escolheu Kelvin\n"); break;
        }

        if (t_entrada == t_saida) {
            printf("Você escolheu escalas iguais. Execute o código novamente.\n");
            continue; // Volta ao início do loop
        }

        // Conversão
        if (t_entrada == 1 && t_saida == 2) {
            resultado = conv1();
            printf("A conversão de Celsius para Fahrenheit resultou em %.2f ºF\n", resultado);
        }
        if (t_entrada == 1 && t_saida == 3) {
            resultado = conv2();
            printf("A conversão de Celsius para Kelvin resultou em %.2f K\n", resultado);
        }
        if (t_entrada == 2 && t_saida == 1) {
            resultado = conv3();
            printf("A conversão de Fahrenheit para Celsius resultou em %.2f ºC\n", resultado);
        }
        if (t_entrada == 2 && t_saida == 3) {
            resultado = conv4();
            printf("A conversão de Fahrenheit para Kelvin resultou em %.2f K\n", resultado);
        }
        if (t_entrada == 3 && t_saida == 1) {
            resultado = conv5();
            printf("A conversão de Kelvin para Celsius resultou em %.2f ºC\n", resultado);
        }
        if (t_entrada == 3 && t_saida == 2) {
            resultado = conv6();
            printf("A conversão de Kelvin para Fahrenheit resultou em %.2f ºF\n", resultado);
        }

        // Pergunta se o usuário deseja realizar outra conversão
        printf("\nDeseja realizar outra conversão?\n");
        printf("Digite [1] para continuar ou [0] para sair: ");
        scanf("%d", &repeat);

    } while (repeat != 0); // O loop continua até que o usuário escolha sair
}
