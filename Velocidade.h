
float converterVelocidade(float valor, int uniOrigem, int uniDestino) {
    
    if (uniOrigem == uniDestino) return valor;

    if(uniOrigem == 1){
        if(uniDestino == 2){
            return valor / 3.6; 
        }else if(uniDestino == 3){
            return valor / 1.609;
        }else{
            return 0.0;
        }
    }

    if(uniOrigem == 2){
        if(uniDestino == 1){
            return valor * 3.6;
        }else if (uniDestino == 3){
            return valor * 2.237;
        }else{
            return 0.0;
        }
    }
    if(uniOrigem == 3){
        if(uniDestino == 1){
            return valor * 1.609;
        }else if(uniDestino == 2){
            return valor / 2.237;
        }else{
            return 0.0;
        }
    }
}


void MenuVelocidade(){
    float valor, resultado;
    int unidadeOrigem, unidadeDestino;

    printf("=== Conversor de Velocidade ===\n");
    printf("Qual a unidade quer converter \n");
    printf("1. km/h\n");
    printf("2. m/s\n");
    printf("3. mph\n");
    printf("Digite uma opcao: ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor da velocidade: ");
    scanf("%f", &valor);


    printf("Converter para? \n");
    printf("1. km/h\n");
    printf("2. m/s\n");
    printf("3. mph\n");
    printf("Digite uma opcao: ");
    scanf("%d", &unidadeDestino);

    resultado = converterVelocidade(valor, unidadeOrigem, unidadeDestino);

    printf("Resultado: %.2f\n", resultado);

}
