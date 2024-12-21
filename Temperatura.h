// Função que exibe a unidade de temperatura de entrada
int temp_entrada() {
    int t_entrada; //È necessario declarar o t_entrada aqui porque foi definida como uma variavel local na funçao main
    do
    {
    printf("Selecione a unidade de entrada:\n");
    printf("1. Celsius (ºC)\n");
    printf("2. Fahrenheit (ºF)\n");
    printf("3. Kelvin (K)\n");
    printf("Escolha: ");
    scanf("%d",&t_entrada);

    if (t_entrada < 1 || t_entrada > 3) {
            printf("Valor inválido! Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (t_entrada < 1 || t_entrada > 3);
    
    return t_entrada;

}

// Função que exibe a unidade de temperatura de saida
int temp_saida() {
    int t_saida;
    do {
        printf("Selecione a unidade de saida:\n");
        printf("1. Celsius (ºC)\n");
        printf("2. Fahrenheit (ºF)\n");
        printf("3. Kelvin (K)\n");
        printf("Escolha: ");
        scanf("%d",&t_saida);

        if (t_saida < 1 || t_saida > 3) {
            printf("Valor inválido! Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (t_saida < 1 || t_saida > 3);
    
}

float conv1 () {
    float t_celsius,t_fahrenheit;
    printf("Entre com a temperatura em Celsius\n");
    scanf("%f",&t_celsius);
    t_fahrenheit= (1.8*t_celsius)+32;
    return t_fahrenheit; 
}

float conv2 () {
    float t_celsius,t_kelvin;
    printf("Entre com a temperatura em Celsius\n");
    scanf("%f",&t_celsius);
    t_kelvin= t_celsius + 273.15;
    return t_kelvin; 
}

float conv3 () {
    float t_fahrenheit,t_celsius;
    printf("Entre com a temperatura em Fahrenheit\n");
    scanf("%f",&t_fahrenheit);
    t_celsius= (t_fahrenheit - 32)/1.8;
    return t_celsius; 
}

float conv4 () {
    float t_fahrenheit,t_kelvin;
    printf("Entre com a temperatura em Fahrenheit\n");
    scanf("%f",&t_fahrenheit);
    t_kelvin= ((t_fahrenheit - 32)*(0.55) +273.15);
    return t_kelvin; 
}

float conv5 () {
    float t_kelvin,t_celsius;
    printf("Entre com a temperatura em Kelvin\n");
    scanf("%f",&t_kelvin);
    t_celsius= t_kelvin-273.15;
    return t_celsius; 
}

float conv6 () {
    float t_kelvin,t_fahrenheit;
    printf("Entre com a temperatura em Kelvin\n");
    scanf("%f",&t_kelvin);
    t_fahrenheit= (t_kelvin-273.15)*1.8 +32;
    return t_fahrenheit; 
}

void MenuTemperatura () {
    int t_entrada, t_saida;
    float resultado;

    system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

   
    t_entrada= temp_entrada();
    switch (t_entrada) {
        case 1: printf("Voce escolheu Celsius\n");
        break;

        case 2: printf("Voce escolheu Fahrenheit\n");
        break;

        case 3: printf("Voce escolheu Kelvin\n");
        break;
    }

    t_saida= temp_saida();
    switch (t_saida) {
        case 1: printf("Voce escolheu Celsius\n");
        break;

        case 2: printf("Voce escolheu Fahrenheit\n");
        break;

        case 3: printf("Voce escolheu Kelvin\n");
        break;
    }

    if (t_entrada==t_saida) {
            printf("Voce escolheu escalas iguais. Execute o codigo novamente\n");
                exit(0);
    }
    //Conversao
    
    if(t_entrada==1 && t_saida==2){
        resultado=conv1();
            printf("A conversao de Celsius para Fahrenheit resultou em %.2f ºF\n",resultado);
    }

    if(t_entrada==1 && t_saida==3){
        resultado=conv2();
            printf("A conversao de Celsius para Kelvin resultou em %.2f K\n",resultado);

    }
    
    if(t_entrada==2 && t_saida==1){
        resultado=conv3();
            printf("A conversao de Fahrenheit para Celsius resultou em %.2f ºC\n",resultado);

    }

    if(t_entrada==2 && t_saida==3){
        resultado=conv4();
            printf("A conversao de Fahrenheit para Kelvin resultou em %.2f K\n",resultado);

    }

    if(t_entrada==3 && t_saida==1){
        resultado=conv5();
             printf("A conversao de Kelvin para Celius resultou em %.2f ºC\n",resultado);

    }

    if(t_entrada==3 && t_saida==2){
        resultado=conv6();
             printf("A conversao de Kelvin para Fahrenheit resultou em %.2f ºF\n",resultado);

    }
}