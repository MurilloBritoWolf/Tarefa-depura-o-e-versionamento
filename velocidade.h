#include <stdio.h>
#include <stdlib.h>

// Funções de conversão
void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura();
void converterVelocidade();
void converterPotencia();
void converterArea();
void converterTempo();
void converterDados();

// Interface de menu
void exibirMenuPrincipal();

int main() {
    int escolha;

    do {
        exibirMenuPrincipal();
        printf("\nEscolha uma opção (ou 0 para sair): ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: converterComprimento(); break;
            case 2: converterMassa(); break;
            case 3: converterVolume(); break;
            case 4: converterTemperatura(); break;
            case 5: converterVelocidade(); break;
            case 6: converterPotencia(); break;
            case 7: converterArea(); break;
            case 8: converterTempo(); break;
            case 9: converterDados(); break;
            case 0: printf("\nSaindo...\n"); break;
            default: printf("\nOpção inválida!\n");
        }
    } while (escolha != 0);

    return 0;
}

void exibirMenuPrincipal() {
    printf("\n======= Sistema de Conversão =======\n");
    printf("1. Unidades de comprimento\n");
    printf("2. Unidades de massa\n");
    printf("3. Unidades de volume\n");
    printf("4. Unidades de temperatura\n");
    printf("5. Unidades de velocidade\n");
    printf("6. Potência (Watts, kW, cavalos-vapor)\n");
    printf("7. Unidades de área\n");
    printf("8. Unidades de tempo\n");
    printf("9. Dados digitais (Bits, Bytes, etc.)\n");
}

// Funções de conversão
void converterComprimento() {
    double valor;
    int unidadeOrigem, unidadeDestino;
    printf("\nConversão de comprimento:\n");
    printf("1. Metro\n2. Centímetro\n3. Milímetro\n");
    printf("Digite a unidade de origem (1-3): ");
    scanf("%d", &unidadeOrigem);
    printf("Digite o valor: ");
    scanf("%lf", &valor);
    printf("Digite a unidade de destino (1-3): ");
    scanf("%d", &unidadeDestino);

    if (unidadeOrigem == 1) valor *= 100; // metro -> centímetro
    else if (unidadeOrigem == 3) valor /= 10; // milímetro -> centímetro

    if (unidadeDestino == 1) valor /= 100; // centímetro -> metro
    else if (unidadeDestino == 3) valor *= 10; // centímetro -> milímetro

    printf("Valor convertido: %.2lf\n", valor);
}

void converterMassa() {
    double valor;
    int unidadeOrigem, unidadeDestino;
    printf("\nConversão de massa:\n");
    printf("1. Quilograma\n2. Grama\n3. Tonelada\n");
    printf("Digite a unidade de origem (1-3): ");
    scanf("%d", &unidadeOrigem);
    printf("Digite o valor: ");
    scanf("%lf", &valor);
    printf("Digite a unidade de destino (1-3): ");
    scanf("%d", &unidadeDestino);

    if (unidadeOrigem == 1) valor *= 1000; // kg -> g
    else if (unidadeOrigem == 3) valor *= 1000000; // tonelada -> g

    if (unidadeDestino == 1) valor /= 1000; // g -> kg
    else if (unidadeDestino == 3) valor /= 1000000; // g -> tonelada

    printf("Valor convertido: %.2lf\n", valor);
}

void converterVolume() {
    double valor;
    int unidadeOrigem, unidadeDestino;
    printf("\nConversão de volume:\n");
    printf("1. Litro\n2. Mililitro\n3. Metro cúbico\n");
    printf("Digite a unidade de origem (1-3): ");
    scanf("%d", &unidadeOrigem);
    printf("Digite o valor: ");
    scanf("%lf", &valor);
    printf("Digite a unidade de destino (1-3): ");
    scanf("%d", &unidadeDestino);

    if (unidadeOrigem == 1) valor *= 1000; // litro -> mililitro
    else if (unidadeOrigem == 3) valor *= 1000; // metro cúbico -> litro

    if (unidadeDestino == 1) valor /= 1000; // mililitro -> litro
    else if (unidadeDestino == 3) valor /= 1000; // litro -> metro cúbico

    printf("Valor convertido: %.2lf\n", valor);
}

void converterTemperatura() {
    double valor;
    int unidadeOrigem, unidadeDestino;
    printf("\nConversão de temperatura:\n");
    printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
    printf("Digite a unidade de origem (1-3): ");
    scanf("%d", &unidadeOrigem);
    printf("Digite o valor: ");
    scanf("%lf", &valor);
    printf("Digite a unidade de destino (1-3): ");
    scanf("%d", &unidadeDestino);

    if (unidadeOrigem == 1 && unidadeDestino == 2) valor = valor * 9/5 + 32; // Celsius -> Fahrenheit
    else if (unidadeOrigem == 1 && unidadeDestino == 3) valor += 273.15; // Celsius -> Kelvin
    else if (unidadeOrigem == 2 && unidadeDestino == 1) valor = (valor - 32) * 5/9; // Fahrenheit -> Celsius
    else if (unidadeOrigem == 2 && unidadeDestino == 3) valor = (valor - 32) * 5/9 + 273.15; // Fahrenheit -> Kelvin
    else if (unidadeOrigem == 3 && unidadeDestino == 1) valor -= 273.15; // Kelvin -> Celsius
    else if (unidadeOrigem == 3 && unidadeDestino == 2) valor = (valor - 273.15) * 9/5 + 32; // Kelvin -> Fahrenheit

    printf("Valor convertido: %.2lf\n", valor);
}

void converterVelocidade() {
    double valor;
    int unidadeOrigem, unidadeDestino;
    printf("\nConversão de velocidade:\n");
    printf("1. km/h\n2. m/s\n3. mph (milhas por hora)\n");
    printf("Digite a unidade de origem (1-3): ");
    scanf("%d", &unidadeOrigem);
    printf("Digite o valor: ");
    scanf("%lf", &valor);
    printf("Digite a unidade de destino (1-3): ");
    scanf("%d", &unidadeDestino);

    // Converter para m/s como
    if (unidadeOrigem == 1) valor /= 3.6; // km/h -> m/s
    else if (unidadeOrigem == 3) valor *= 0.44704; // mph -> m/s

    // Converter de m/s para a unidade desejada
    if (unidadeDestino == 1) valor *= 3.6; // m/s -> km/h
    else if (unidadeDestino == 3) valor /= 0.44704; // m/s -> mph

    printf("Valor convertido: %.2lf\n", valor);
}

void converterPotencia() {
    printf("\nFunção de potência pendente.\n");
}
void converterArea() {
    printf("\nFunção de área pendente.\n");
}
void converterTempo() {
    printf("\nFunção de tempo pendente.\n");
}
void converterDados() {
    printf("\nFunção de dados pendente.\n");
}