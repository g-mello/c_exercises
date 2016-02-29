
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 5
#define COLUNAS 5

int main(void){

    int matriz[LINHAS][COLUNAS];
    int soma=0;
    int soma_todos=0;

    printf("Digite os elementos da matriz %ix%i\n", LINHAS, COLUNAS);
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1);
            scanf("%d", &matriz[i][j] ); 

            // soma todos os elementos da matriz
            soma_todos += matriz[i][j];
        }
    }

    // Soma elementos da linhas 4
    for(int j=0; j < COLUNAS; j++)
        soma += matriz[3][j];;
    
    printf("Soma dos elementos da linha 4: %i\n", soma);

    // Soma elementos da coluna 2
    soma=0;
    for( int i=0; i < LINHAS; i++)
        soma += matriz[i][1];          
    
    printf("Soma dos elementos da coluna 2: %i\n", soma);

    // Soma elementos da Diagonal Principal
    soma=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
          if( i == j ) 
             soma += matriz[i][j];      
        }
    } 
    printf("Soma dos elementos da diagonal principal: %i\n", soma);

    // Soma de elementos da Diagonal Secundária
    soma=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            if( j == ( COLUNAS - 1 - i ) )
                soma += matriz[i][j];
        }

    }
    printf("Soma dos elementos da diagonal secundária : %i\n", soma);

    // Soma de todos os elementos da matriz
    printf("Soma de todos os elementos da matriz: %i\n", soma_todos);

	return 0;

}


