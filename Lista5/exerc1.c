
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 3
#define COLUNAS 4
int main(void){

    int matriz[LINHAS-1][COLUNAS-1];
    int qtd_elementos=0;

    for (int i = 0; i < LINHAS; i++){
       for ( int j = 0; j < COLUNAS; j++ ){

          printf("%i,%i: ", i, j); 
          scanf("%i", &matriz[i][j]);

          if( matriz[i][j] >= 15 && matriz[i][j] <= 20 )
              qtd_elementos++;
       } 
    }

    printf("Quantidade de elementos entre 15 e 20: %i\n", qtd_elementos);
	return 0;

}


