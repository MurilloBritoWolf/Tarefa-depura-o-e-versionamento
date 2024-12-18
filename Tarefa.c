/*1. Unidades de comprimento (metro, centímetro, milímetro)*/
/*2. Unidades de massa (quilograma, grama, tonelada)*/
/*3. Unidades de volume (litro, mililitro, metros cúbicos)*/
/*4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin)*/ 
/*5. Unidades de velocidade (km/h, m/s, mph)*/

/*6- Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)*/
#include <stdio.h>

void exibirMenu() {
    printf("Selecione a unidade de entrada:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv ou hp)\n");
    printf("Escolha: ");
}

double converterPotencia(double valor, int entrada, int saida) {
    // Conversões básicas
    // 1 cv = 735.5 W
    // 1 kW = 1000 W
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

int main() {
    int unidadeEntrada, unidadeSaida;
    double valor, resultado;

    exibirMenu();
    scanf("%d", &unidadeEntrada);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("\nSelecione a unidade de saída:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv ou hp)\n");
    printf("Escolha: ");
    scanf("%d", &unidadeSaida);

    resultado = converterPotencia(valor, unidadeEntrada, unidadeSaida);

    if (resultado != -1) {
        printf("\nResultado: %.2lf\n", resultado);
    } else {
        printf("\nUnidade inválida selecionada.\n");
    }

    return 0;
}
/*7. Unidades de área (metro quadrado, centímetro quadrado)*/
/*8. Unidades de tempo (segundos, minutos, horas)*/
/*9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)*/