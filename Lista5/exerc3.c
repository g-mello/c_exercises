
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHA 6
#define COLUNA 3

int main(void){

    int matriz[LINHA][COLUNA];
    int maior;
    int linha_maior, coluna_maior;
    int menor;
    int linha_menor, coluna_menor;

    printf("Insira os elementos da Matriz: \n");
    for (int i = 0; i < 6; ++i){
       for (int j = 0; j < 3; ++j){
            printf("Posição %i,%i: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);       
       } 
    }

    // Maior elemento
    maior=matriz[0][0];
    for (int i = 0; i < 6; ++i){
       for (int j = 0; j < 3; ++j){
           if( matriz[i][j] > maior ) {
               maior = matriz[i][j];
               linha_maior=i; 
               coluna_maior=j;
           }
       } 
    }
       
    // Maior elemento
    menor=matriz[0][0];
    for (int i = 0; i < 6; ++i){
       for (int j = 0; j < 3; ++j){
           if( matriz[i][j] < menor) {
               menor = matriz[i][j];
               linha_menor=i; 
               coluna_menor=j;
           }
        }
    }

    printf("Maior Elemento: %i\n", maior);
    printf("Posição: %i, %i\n", linha_maior+1, coluna_maior+1);
    printf("Menor Elemento: %i\n", menor);
    printf("Posição: %i, %i\n", linha_menor+1, coluna_menor+1);

	return 0;

}


