#include <stdio.h>
#include <math.h>

void exibir_menu()
{
    printf("\n1. Miligrama (mg)\n2. Centigrama (cg)\n3. Decigrama (dg)\n4. Grama (g)\n");
    printf("5. Decagrama (dag)\n6. Hectograma (hg)\n7. Quilograma(Kg)\n8. Tonelada(T)\n\n");
}

double converte_massa(double valor,int entrada,int saida){
    
    if(entrada>=1 && saida>=1 && entrada<=8 && saida<=8 && valor>=0){//Validar Medidas
        int aux = saida - entrada;
        //Caso sejam a mesma medida na entrada e saida
        if(aux == 0){
            return valor;
        }

        /*Verifica se é uma conversão com tonelada*/
        if(entrada==8){
            valor = valor*1000;//Converte de Tonelada para Kilo
            return converte_massa(valor,7,saida);//Converte do kilo para a unidade de saída e retorna o valor.
        }
        if(saida==8){
            valor = converte_massa(valor,entrada,7);//Converte da unidade de entrada para kilo
            return valor/1000;//Converte do kilo para tonelada e retorna o valor;
        }

        /*Caso não seja com Tonelada, executa conversão padrão:*/
        //Caso seja de uma medida menor pra uma maior
        if(aux>0){
            valor = valor/pow(10,aux);
            return valor;
        }
        //Caso seja de uma medida maior pra uma menor
        if(aux<0){
            aux = aux*(-1);
            valor = valor * pow(10,aux);
            return valor;
        } 
    }
    //Caso inválido
    return -1;
}

int main(){
    double valor, resultado;
    int UnEntrada,UnSaida;

        printf("\nEscolha a unidade de entrada\n");
        exibir_menu();
        scanf("%d",&UnEntrada);

        printf("\nInforme o valor que deseja converter:\n");
        scanf("%lf",&valor);

        printf("\nEscolha a unidade de saída\n");
        exibir_menu();
        scanf("%d",&UnSaida);
        
        resultado = converte_massa(valor,UnEntrada,UnSaida);
        if(resultado!=-1){
            printf("Resultado da conversao: %lf",resultado);
        }else{
            printf("\nEntrada invalida!\n");
        }
}
