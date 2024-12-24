const char* obter_unidade(int unidade) {
    switch (unidade) {
        case 1: return "Miligrama (mg)";
        case 2: return "Centigrama (cg)";
        case 3: return "Decigrama (dg)";
        case 4: return "Grama (g)";
        case 5: return "Decagrama (dag)";
        case 6: return "Hectograma (hg)";
        case 7: return "Quilograma (Kg)";
        case 8: return "Tonelada (T)";
        default: return "Unidade inválida";
    }
}

double converte_massa(double valor, int entrada, int saida) {
    if (entrada<1||entrada>8||saida<1||saida>8||valor<0) { // Validar Medidas
        // Caso inválido
        return -1;
    }
    else{
        int aux = saida - entrada;
        // Caso sejam a mesma medida na entrada e saída
        if (aux == 0) {
            return valor;
        }

        // Verifica se é uma conversão com tonelada
        if (entrada == 8) {
            valor = valor * 1000; // Converte de Tonelada para Kilo
            return converte_massa(valor, 7, saida); // Converte do kilo para a unidade de saída e retorna o valor.
        }
        if (saida == 8) {
            valor = converte_massa(valor, entrada, 7); // Converte da unidade de entrada para kilo
            return valor / 1000; // Converte do kilo para tonelada e retorna o valor
        }

        // Caso não seja com Tonelada, executa conversão padrão:
        // Caso seja de uma medida menor para uma maior
        if (aux > 0) {
            valor = valor / pow(10, aux);
            return valor;
        }
        // Caso seja de uma medida maior para uma menor
        if (aux < 0) {
            aux = aux * (-1);
            valor = valor * pow(10, aux);

        }
    }
 return valor;
}

void Menu_massa() {
    double valor, resultado;
    int UnEntrada, UnSaida, repeat;

    do {
        // Escolha da unidade de entrada
        printf("=== Conversor de massa ===\n");
        printf("\nEscolha a unidade de entrada\n");
        printf("1. Miligrama (mg)\n2. Centigrama (cg)\n3. Decigrama (dg)\n4. Grama (g)\n");
        printf("5. Decagrama (dag)\n6. Hectograma (hg)\n7. Quilograma(Kg)\n8. Tonelada(T)\n\n");
        printf("=======================================\n");
        scanf("%d", &UnEntrada);

        // Verifica se a entrada é válida
        if (UnEntrada < 1 || UnEntrada > 8) {
            printf("\nEntrada inválida! Tente novamente.\n");
            continue;
        }

        // Valor a ser convertido
        printf("\nInforme o valor que deseja converter:\n");
        scanf("%lf", &valor);

        // Escolha da unidade de saída
        printf("\nEscolha a unidade de saída\n");
        printf("1. Miligrama (mg)\n2. Centigrama (cg)\n3. Decigrama (dg)\n4. Grama (g)\n");
        printf("5. Decagrama (dag)\n6. Hectograma (hg)\n7. Quilograma(Kg)\n8. Tonelada(T)\n\n");
        scanf("%d", &UnSaida);

        // Verifica se a saída é válida
        if (UnSaida < 1 || UnSaida > 8) {
            printf("\nSaída inválida! Tente novamente.\n");
            continue;
        }

        // Chama a função para conversão de massa
        resultado = converte_massa(valor, UnEntrada, UnSaida);
        if (resultado != -1) {
            printf("Resultado da conversão: %.3lf %s\n", resultado, obter_unidade(UnSaida));
        } else {
            printf("\nEntrada inválida!\n");
        }

        // Pergunta se o usuário deseja fazer outra conversão
        printf("\nDeseja realizar outra conversão? (1 para continuar / 0 para sair): ");
        scanf("%d", &repeat);

    } while (repeat != 0); // Repetir até o usuário escolher sair
}

