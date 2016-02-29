
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

//Write Here The Project Description
#include<stdio.h>
#define LINHAS 2 
#define COLUNAS 2 

int main(void){

    int matriz[LINHAS][COLUNAS];
    int soma_DP=0;

    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
         }

    }

    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            if( i == j )
                soma_DP += matriz[i][j];
        }
    }

    printf("Soma da Diagonal Principal: %i\n", soma_DP);

	return 0;

}


