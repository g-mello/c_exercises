
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 5
#define COLUNAS 5

int main(void){

    int matriz[LINHAS][COLUNAS];
    int soma=0;

    printf("Digite os elementos da matriz %ix%i\n", LINHAS, COLUNAS);
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1);
            scanf("%d", &matriz[i][j] ); 

        }
    }

    // Soma de elementos da Diagonal Secundária
    soma=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            if( j == ( COLUNAS - 1 - i ) )
                soma += matriz[i][j];
        }

    }
    printf("Soma dos elementos da diagonal secundária : %i\n", soma);


	return 0;

}


