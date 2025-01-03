#ifndef AREA_CONVERTER_H
#define AREA_CONVERTER_H

// Função que retorna a conversão de metros quadrados para centímetros quadrados
static inline double metrosParaCentimetros(double metros) {
    return metros * 10000;
}

// Função que retorna a conversão de centímetros quadrados para metros quadrados
static inline double centimetrosParaMetros(double centimetros) {
    return centimetros / 10000;
}

// Função principal que apresenta o menu e realiza as conversões
static inline void MenuArea() {
    int opcao,rep;
    double valor, resultado;
do{
    printf("=== Conversor de Unidades de Área=== \n");
    printf("1. Converter de metros quadrados para centímetros quadrados\n");
    printf("2. Converter de centímetros quadrados para metros quadrados\n");
    printf("=======================================\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em metros quadrados: ");
        scanf("%lf", &valor);
        resultado = metrosParaCentimetros(valor);
        printf("=======================================\n\n");
        printf("%.2f metros quadrados equivalem a %.2f centímetros quadrados.\n", valor, resultado);
    } else 
    if (opcao == 2) {
        printf("Digite o valor em centímetros quadrados: ");
        scanf("%lf", &valor);
        resultado = centimetrosParaMetros(valor);
        printf("=======================================\n\n");
        printf("%.2f centímetros quadrados equivalem a %.2f metros quadrados.\n", valor, resultado);
    } else {
        printf("Opção inválida.\n");
    }
        printf("=======================================\n\n");
        // Perguntar se deseja continuar
        printf("\nDigite 1 para realizar outra conversão ou 0 para sair: ");
        scanf("%d", &rep);

    } while (rep != 0);
}

#endif // AREA_CONVERTER_H
