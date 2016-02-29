
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 3 
#define COLUNAS 3 

int main(void){

    int matriz[LINHAS][COLUNAS];
    int value=1;

    // Leitura da matriz
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
               printf("%i, %i: ", i+1, j+1);
               scanf("%i", &matriz[i][j]); 
        }
    }

    // Verifica se a Matriz é triangular  
    
    for( int i=0; i < LINHAS && value == 1; i++){
        for(int  j=0; j < COLUNAS; j++){

            if( j > i && matriz[i][j] != 0 )
                value = 0;
        }
    }

    if ( value == 1 )
        printf("A Matriz é triangular.\n");
    else
        printf("A Matriz não é triangular. \n");


    // Mostra Matriz
   printf("\nMatriz: ");
   for( int i=0; i < LINHAS; i++){
       printf("\n");
       for(int j=0; j < COLUNAS; j++){
            printf("%d ", matriz[i][j]);
       }
   }

    
	return 0;

}


