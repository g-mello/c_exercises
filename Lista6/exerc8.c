
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 3 
#define COLUNAS 3

int main(void){

   int matriz[LINHAS][COLUNAS];
   int troca;

    // ler elementos da matriz
    printf("Entre com os elementos da Matriz: \n");
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
               printf("%i,%i: ", i+1, j+1);
               scanf("%d", &matriz[i][j] ); 
        }
    }

    // Mostra a matriz
    printf("\nMatriz: ");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
              printf("%d ",  matriz[i][j]); 
        }
    }

    // troca Diagonal Principal com Diagonal Secundaria
    int k=0, t=0;
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
               if( j == ( COLUNAS-1-i)){
                    troca = matriz[k][t]; // troca <- valor diag principal 
                    matriz[k][t] = matriz[i][j]; // valor diag principal <- valor diag secundaria
                    matriz[i][j] = troca; // valor diag secundaria <- troca 

                    // proximo valor do indice para a diagonal principal
                    k++; //linha
                    t++; //coluna

               } 
        }
    }

    // Mostra a matriz resultante da troca das diagonais
    printf("\n\nResultante: ");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
              printf("%d ",  matriz[i][j]); 
        }
    }



	return 0;

}


