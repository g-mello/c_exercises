//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 2
#define COLUNAS 2 

void ler_matriz(int pmatriz[LINHAS][COLUNAS]){

        // Função para ler elementos de uma matriz 

        printf("Entre os elementos na matriz %ix%i:\n", LINHAS, COLUNAS);
        for( int i=0; i < LINHAS; i++){
            for(int j=0; j < COLUNAS; j++){
                printf("%i,%i: ",i+1,j+1);
                scanf("%d", &pmatriz[i][j]); 
            }
        }
}

void soma_colunas(int psomaColuna[COLUNAS], int pmatriz[LINHAS][COLUNAS]){
    // Função para somar os valores das colunas da matriz
    // e colocar o resultado em um vetor
    
    for( int i=0; i < COLUNAS; i++){
        psomaColuna[i]=0;
        for(int j=0; j < LINHAS; j++){
            psomaColuna[i] += pmatriz[j][i]; 
        }
    }
        
}

void matriz_resultante(int psomaColuna[COLUNAS], int pmatriz[LINHAS][COLUNAS], int presultante[LINHAS][COLUNAS]){   
    // Função para cacular a Matriz resultante
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            presultante[i][j] =  pmatriz[i][j] * psomaColuna[j];
        }
    }
}

void mostra_matriz(int pmatriz[LINHAS][COLUNAS]){
    // Função para Mostra uma matriz 
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
               printf("%d ", pmatriz[i][j]); 
        }
    }
    printf("\n");
        
}

int main(void){

    int matriz[LINHAS][COLUNAS];
    int resultante[LINHAS][COLUNAS];
    int somaColuna[COLUNAS];

   
   ler_matriz(matriz);     

   soma_colunas(somaColuna, matriz);

   matriz_resultante(somaColuna, matriz, resultante);

   mostra_matriz(resultante);

	return 0;

}


