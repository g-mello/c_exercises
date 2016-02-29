
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main(void){

    float matriz[LINHAS][COLUNAS];
    float valor;

    // Ler os valores na matriz
    printf("Digite os elementos na matriz %ix%i\n",LINHAS, COLUNAS);
    for( int i=0; i < LINHAS; i++){
        for(int j=0; j < COLUNAS; j++){
            printf("%i,%i: ", i+1, j+1); 
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Valor: ");
    scanf("%f", &valor );

    // Calculo da resultante
    printf("Matriz Resultante :\n");
    for( int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
            printf("%.1f ", matriz[i][j] * valor);    
        }
    }
	return 0;

}


