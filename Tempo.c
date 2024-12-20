#include <stdio.h>
#include <math.h>

void convertTime(float value, int fromUnit, int toUnit) {
    // Tabela de conversão com base em unidades de tempo
    double conversionFactors[4] = {1, 1000, 60 * 1000, 3600 * 1000};
    const char *units[] = {"milissegundos", "segundos", "minutos", "horas"};

    // Converter o valor para milissegundos como base intermediária
    double inMilliseconds = value * conversionFactors[fromUnit];

    // Converter de milissegundos para a unidade desejada
    double result = inMilliseconds / conversionFactors[toUnit];

    printf("Resultado: %.2lf %s\n", result, units[toUnit]);
}

int main() {
    int fromUnit, toUnit;
    float value;

    printf("Escolha a unidade do valor que será inserido:\n");
    printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
    printf("Digite sua escolha: ");
    scanf("%d", &fromUnit);

    if (fromUnit < 0 || fromUnit > 3) {
        printf("Unidade inválida!\n");
        return 1;
    }

    printf("Digite o valor: ");
    scanf("%f", &value);

    printf("Escolha a unidade para a qual deseja converter:\n");
    printf("[0] Milissegundos\n[1] Segundos\n[2] Minutos\n[3] Horas\n");
    printf("Digite sua escolha: ");
    scanf("%d", &toUnit);

    if (toUnit < 0 || toUnit > 3) {
        printf("Unidade inválida!\n");
        return 1;
    }

    // Realiza a conversão
    convertTime(value, fromUnit, toUnit);

    return 0;
}
