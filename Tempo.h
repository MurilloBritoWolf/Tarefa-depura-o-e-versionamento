#ifndef TEMPO_H
#define TEMPO_H

static void MenuTempo() {
    int fromUnit, toUnit;
    float value;
    int repeat;

    do {
        printf("=== Conversor de Tempo ===\n");
        printf("Escolha a unidade do valor que será inserido:\n");
        printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
        printf("=======================================\n");
        printf("Digite sua escolha: \n");
        scanf("%d", &fromUnit);

        // Repetidor para validação de unidade de origem
        while (fromUnit < 0 || fromUnit > 3) {
            printf("Unidade inválida! Digite novamente:\n");
            printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
            printf("=======================================\n");
            printf("Digite sua escolha: \n");
            scanf("%d", &fromUnit);
        }

        printf("Digite o valor: ");
        scanf("%f", &value);

        printf("Escolha a unidade para a qual deseja converter:\n");
        printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
        printf("Digite sua escolha: ");
        scanf("%d", &toUnit);

        // Repetidor para validação de unidade de destino
        while (toUnit < 0 || toUnit > 3) {
            printf("Unidade inválida! Digite novamente:\n");
            printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
            printf("Digite sua escolha: ");
            scanf("%d", &toUnit);
        }

        // Conversão usando fatores de conversão
        double conversionFactors[4] = {1, 1000, 60 * 1000, 3600 * 1000};
        const char *units[] = {"milissegundos", "segundos", "minutos", "horas"};

        double inMilliseconds = value * conversionFactors[fromUnit];
        double result = inMilliseconds / conversionFactors[toUnit];

        printf("=======================================\n");
        printf("\nResultado: %.2lf %s\n\n", result, units[toUnit]);
        printf("=======================================\n");

        // Repetidor para continuar ou sair
        printf("Deseja realizar outra conversão?\n");
        printf("Digite [1] para continuar ou [0] para sair: ");
        scanf("%d", &repeat);

    } while (repeat != 0);
}

#endif // TEMPO_H
