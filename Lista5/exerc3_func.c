
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 5
#define COLUNAS 5

void ler_matriz(int pmatriz[LINHAS][COLUNAS]){
    
    printf("Digite os elementos da matriz %ix%i\n", LINHAS, COLUNAS);
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1);
            scanf("%d", &pmatriz[i][j] ); 

        }
    } 
}

void soma_linha4( int pmatriz[LINHAS][COLUNAS]){

    // Soma elementos da linhas 4
    int soma=0;
    for(int j=0; j < COLUNAS; j++)
        soma += pmatriz[3][j];;

    printf("Soma dos elementos da linha 4: %i\n", soma);
}


void soma_coluna2( int pmatriz[LINHAS][COLUNAS]){

    // Soma elementos da coluna 2
    int soma=0;
    for( int i=0; i < LINHAS; i++)
        soma += pmatriz[i][1];          
    
    printf("Soma dos elementos da coluna 2: %i\n", soma);
}

void soma_diagonal_principal( int pmatriz[LINHAS][COLUNAS]){

    // Soma elementos da Diagonal Principal
    int soma=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
          if( i == j ) 
             soma += pmatriz[i][j];      
        }
    } 
    printf("Soma dos elementos da diagonal principal: %i\n", soma);
}


void soma_diagonal_secundaria( int pmatriz[LINHAS][COLUNAS]){
    // Soma de elementos da Diagonal Secundária
    int soma=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            if( j == ( COLUNAS - 1 - i ) )
                soma += pmatriz[i][j];
        }

    }
    printf("Soma dos elementos da diagonal secundária : %i\n", soma);

}

void soma_todos_elementos( int pmatriz[LINHAS][COLUNAS]){

    int soma=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            soma += pmatriz[i][j];
        }
    }

    printf("Soma de todos elementos da matriz: : %i\n", soma);
}
int main(void){

    int matriz[LINHAS][COLUNAS];

    ler_matriz(matriz);
    soma_linha4(matriz);
    soma_coluna2(matriz);
    soma_diagonal_principal(matriz);
    soma_diagonal_secundaria(matriz);
    soma_todos_elementos(matriz);

	return 0;

}


