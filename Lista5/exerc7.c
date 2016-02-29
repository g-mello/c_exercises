
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define M_LINHAS 4
#define M_COLUNAS 6
#define N_LINHAS 6
#define N_COLUNAS 4


int main(void){

    int M[M_LINHAS][M_COLUNAS];
    int N[N_LINHAS][N_COLUNAS];
    int soma=0;
    int i,j;

    printf("Entre com os elementos da matriz M %ix%i:\n", M_LINHAS, M_COLUNAS);
    for( int i=0; i < M_LINHAS; i++){
        for(int j=0; j < M_COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1); 
            scanf("%d", &M[i][j] );
                
        }
    }

    printf("Entre com os elementos da matriz N %ix%i:\n", N_LINHAS, N_COLUNAS);
    for( int i=0; i < N_LINHAS; i++){
        for(int j=0; j < N_COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1); 
            scanf("%d", &N[i][j] );
        }
    }
  
   // mostra a Matriz M -- DEBUG  
   printf("\nMatriz M");
   for( int i=0; i < M_LINHAS; i++){
       printf("\n");
       for(int j=0; j < M_COLUNAS; j++){
           printf("%i ", M[i][j]);
       }
   } 
   
   // mostra a Matriz N  -- DEBUG 
   printf("\nMatriz N");
   for( int i=0; i < N_LINHAS; i++){
       printf("\n");
       for(int j=0; j < N_COLUNAS; j++){
           printf("%i ", N[i][j]);
       }
    }

   printf("\n\nSoma da Linhas de M com as colunas de N \n");
   for( i=0; i < M_LINHAS; i++){
       for(j=0; j < M_COLUNAS; j++)
         soma += M[i][j] + N[j][i]; 
       
       printf("Soma Linha %i de M com Coluna %i de N: %i \n", i+1, j+1, soma);
       soma=0;// reinicia o contador
       
    } 


	return 0;

}


