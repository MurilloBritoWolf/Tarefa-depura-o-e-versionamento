#ifndef TEMPO_H
#define TEMPO_H

#include <stdio.h>

static void MenuTempo() { // Função inline para evitar múltiplas definições
    int fromUnit, toUnit;
    float value;

    printf("Escolha a unidade do valor que será inserido:\n");
    printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
    printf("Digite sua escolha: ");
    scanf("%d", &fromUnit);

    if (fromUnit < 0 || fromUnit > 3) {
        printf("Unidade inválida!\n");
        return;
    }

    printf("Digite o valor: ");
    scanf("%f", &value);

    printf("Escolha a unidade para a qual deseja converter:\n");
    printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
    printf("Digite sua escolha: ");
    scanf("%d", &toUnit);

    if (toUnit < 0 || toUnit > 3) {
        printf("Unidade inválida!\n");
        return;
    }

    double conversionFactors[4] = {1, 1000, 60 * 1000, 3600 * 1000};
    const char *units[] = {"milissegundos", "segundos", "minutos", "horas"};

    double inMilliseconds = value * conversionFactors[fromUnit];
    double result = inMilliseconds / conversionFactors[toUnit];

    printf("Resultado: %.2lf %s\n", result, units[toUnit]);
}

#endif // TEMPO_H
