
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define MESES 12 
#define SEMANAS 4

int main(void){

    float matriz[MESES][SEMANAS];
    char meses[MESES][15]={"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    float total_mes=0;
    float total_ano=0;

    // Lendo valores na matriz
    for( int i=0; i < MESES; i++){
        printf("Mês %i\n", i+1);
        for(int j=0; j  < SEMANAS; j++){
            printf("Vendas Semana %i: R$ ", j+1);
            scanf("%f", &matriz[i][j] ); 

            // Calcula o total das vendas no ano
            total_ano += matriz[i][j];
        }
    }

    // item A
    printf("\n\n");
    for( int i=0; i < MESES; i++){
        for(int j=0; j < SEMANAS; j++){
            total_mes += matriz[i][j]; 
        }
        printf("Total vendas de %s: R$ %.2f\n", meses[i], total_mes);
    }

    // item B
    printf("\n\n");
    printf("%-10s\t%-10s\t%-10s\n", "Mês", "Semana", "Total Vendas");
    for( int i=0; i < MESES; i++){
        for(int j=0; j < SEMANAS; j++){
            printf("%-10s\t%-10d\tR$ %-10.2f\n", meses[i], j+1, matriz[i][j]);
        }
    }

    // itemc 
    printf("\n\nTotal de vendas do ano : R$ %.2f\n", total_ano);


	return 0;
}


