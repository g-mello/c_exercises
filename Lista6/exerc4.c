
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 3 
#define COLUNAS 3 

int main(void){

    int matriz[LINHAS][COLUNAS];
    int soma=0;

    // Leitura da matriz
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
               printf("%i, %i: ", i+1, j+1);
               scanf("%i", &matriz[i][j]); 
        }
    }

    // Cálculos do elementos abaixo da diagonal principal
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){

               if( i == j || i > j ){
                  soma += matriz[i][j]; 
                  printf("Posição: %i,%i: \n", i+1, j+1);
               }
        }
    }

    // Mostra Matriz
   for( int i=0; i < LINHAS; i++){
       printf("\n");
       for(int j=0; j < COLUNAS; j++){
            printf("%d ", matriz[i][j]);
       }
   }

   // Mostra o valor da soma dos elementos abaixo da diagonal principal
   printf("\nSoma : %i\n", soma);

	return 0;

}


