    //Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS  2 
#define COLUNAS 2 

int main(void){

    int matriz[LINHAS][COLUNAS]; 
    int transposta[LINHAS][COLUNAS]; 
    int simetrica = 0;
    int i,j;
 
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

    // Mostra matriz 
    printf("\nMatriz: ");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
               printf("%i ", matriz[i][j]); 
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

    // Verificar se a Matriz é simétrica
    // transposta[i][j] == matriz[i][j]
    // LINHAS == COLUNAS a matriz deve ser quadrada 
    if( LINHAS != COLUNAS )
       printf("\nA Matriz %ix%i não é simétrica.", LINHAS, COLUNAS); 
    else { 
        
        // verifica a condição transposta[i][j] == matriz[i][j]
        for( i=0; i < LINHAS && simetrica == 0; i++){
            for(j=0; j < COLUNAS; j++){
                   if( matriz[i][j] != transposta[i][j] )
                      simetrica = 1; 
            }
        }

        if( i == LINHAS )
            printf("\nA Matriz %ix%i é simétrica.", LINHAS, COLUNAS); 
        else
            printf("\nA Matriz %ix%i não é simétrica.", LINHAS, COLUNAS); 

    } 

	return 0;

}


