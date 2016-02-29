
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main(void){

    int matriz[LINHAS][COLUNAS];
    int maior_elemento;
    int linha;
    int minimax;

    printf("Digite os valores da Matriz: \n");
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
               printf("%i,%i: ", i+1, j+1); 
               scanf("%i", &matriz[i][j]);
        }
    }

    // Encontrar o maior elemento da matriz e sua linha
    maior_elemento=matriz[0][0];
    linha=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
               if( matriz[i][j] > maior_elemento ){
                   maior_elemento = matriz[i][j];
                   linha=i;
               } 
        }
    }

    // Encontrar o menor o minimax na linha do maior elemento
    minimax=matriz[linha][0];
    for( int j=0; j < COLUNAS; j++){
           if( matriz[linha][j] < minimax )
               minimax = matriz[linha][j];
    }

    // Mostra Matriz
    printf("\nMatriz: ");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
               printf("%d ", matriz[i][j]); 
        }
    }

    printf("\nMnaior elemento : %i\n", maior_elemento);
    printf("Linha do maior elemento : %i\n", linha+1);
    printf("Minimax: %i\n", minimax);

	return 0;

}


