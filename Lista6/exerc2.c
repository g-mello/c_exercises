    //Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 10 
#define COLUNAS 10 

int main(void){

    int matriz[LINHAS][COLUNAS]; 
    int transposta[LINHAS][COLUNAS]; 
 
   // Leitura da matriz 
    printf("Entre com os valores da matriz %ix%i: \n", LINHAS, COLUNAS); 
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1);
            scanf("%d", &matriz[i][j]); 
        }
    } 

    // Cálculo da transposta
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
               transposta[i][j] = matriz[j][i]; 
        }
    }

    // Mostra matriz transposta
    printf("\nTransposta: ");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
               printf("%i ", transposta[i][j]); 
        }
    }

	return 0;

}


