
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 20
#define COLUNAS 10

int main(void){

    int matriz[LINHAS][COLUNAS];
    int resultante[LINHAS][COLUNAS];
    int somaColuna[COLUNAS];
    int k=0;
    
    printf("Entre os elementos na matriz %ix%i:\n", LINHAS, COLUNAS);
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ",i+1,j+1);
            scanf("%d", &matriz[i][j]); 
        }
    }

    // Soma os valores da coluna e coloca no vetor
    for( int i=0; i < COLUNAS; i++){
        somaColuna[k]=0;
        for(int j=0; j < LINHAS; j++){
            somaColuna[k] += matriz[j][i]; 
        }
        k++;
    }

    // Matriz resultante
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            resultante[i][j] =  matriz[i][j] * somaColuna[j];
        }
    }

        // Mostra a matriz resultante
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
               printf("%d ", resultante[i][j]); 
        }
    }
    printf("\n");

	return 0;

}


