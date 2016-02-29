
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 3
#define COLUNAS 8

int main(void){

    int M[LINHAS][COLUNAS];
    int N[LINHAS][COLUNAS];

    // Ler dados para a Matriz M
    printf("Digite os elementos da matriz M %ix%i \n", LINHAS, COLUNAS);
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1);
            scanf("%i", &M[i][j] );
                
        }
    }
    
    // Ler dados para a Matriz N
    printf("Digite os elementos da matriz N %ix%i \n", LINHAS, COLUNAS);
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1);
            scanf("%i", &N[i][j] );
                
        }
    }

    // Matriz Resultante M + N 
    printf("\nMatriz Resultante M+N: ");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
               printf("%i ", M[i][j] + N[i][j]); 
        }
    }
   
    // Matriz Resultante M - N 
    printf("\n\nMatriz Resultante M+N: ");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
               printf("%i ", M[i][j] - N[i][j]); 
        }
    }
    printf("\n");

	return 0;

}


