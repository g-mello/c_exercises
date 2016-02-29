
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define MESES 12 
#define SEMANAS 4

void ler_matriz( float pmatriz[MESES][SEMANAS]) {
    // Lendo valores na matriz
    for( int i=0; i < MESES; i++){
        printf("Mês %i\n", i+1);
        for(int j=0; j  < SEMANAS; j++){
            printf("Vendas Semana %i: R$ ", j+1);
            scanf("%f", &pmatriz[i][j] ); 
        }
    }
} // fim ler_matriz


void relatorioA( float pmatriz[MESES][SEMANAS], char pmeses[MESES][15]){
    // O total vendido em cada mês do ano
    
    float total_mes;
    
    printf("\n\n");
    for( int i=0; i < MESES; i++){
       total_mes=0;
       for(int j=0; j < SEMANAS; j++){
            total_mes += pmatriz[i][j]; 
        }
        printf("Total vendas de %s: R$ %.2f\n", pmeses[i], total_mes);
    }
} // fim relatorioA



void relatorioB(float pmatriz[MESES][SEMANAS], char pmeses[MESES][15]){
    // O total vendido em casa semana durate todo o ano 
    printf("\n\n");
    printf("%-10s\t%-10s\t%-10s\n", "Mês", "Semana", "Total Vendas");
    for( int i=0; i < MESES; i++){
        for(int j=0; j < SEMANAS; j++){
            printf("%-10s\t%-10d\tR$ %-10.2f\n", pmeses[i], j+1, pmatriz[i][j]);
        }
    }
} // fim relatorio B



void relatorioC( float pmatriz[MESES][SEMANAS] ){
    // O total vendido pela loja no ano
    
    float total_ano=0;

    for( int i=0; i < MESES; i++){
        for(int j=1; j < SEMANAS; j++){
            total_ano += pmatriz[i][j];            
        }
    }

    printf("\n\nTotal de vendas do ano : R$ %.2f\n", total_ano);

} // fim relatorio C



int main(void){

    float matriz[MESES][SEMANAS];
    char meses[MESES][15]={"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

     ler_matriz(matriz);
     relatorioA(matriz, meses);
     relatorioB(matriz, meses);
     relatorioC(matriz);

	return 0;
}


