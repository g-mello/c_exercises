
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS  3
#define COLUNAS 3

int main(void){

    int A[LINHAS][COLUNAS];
    int V[LINHAS];

    printf("Entre com os elementos da matriz: \n");
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i, %i: ", i+1, j+1);
            scanf("%d", &A[i][j]); 
        }
    }

    // Calculo da soma das linhas
    for( int i=0; i < LINHAS; i++){
        V[i]=0; // inicializa o contador da linha
        for( int j=0; j < COLUNAS; j++){
            V[i] += A[i][j];        
        }
    }

    // Mostra os valores
    for( int  i=0; i < LINHAS; i++){
           printf("Soma dos elementos da linha %i = %i\n", i+1, V[i]); 
    }
	return 0;

}


