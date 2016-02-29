
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 2
#define COLUNAS 4

int main(void){

    int matriz[LINHAS][COLUNAS];
    int soma_pares;
    int qtd_pares;
    int qtd_linha;

    // Entrada dos dados na Matriz
    printf("Insira os números na matriz: \n");
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
           printf("Posição %i,%i: ",i+1,j+1);
           fflush(stdout);
           scanf("%i",&matriz[i][j]); 
        }
    }

    // Mostra a Matriz -- DEBUG
    printf("\nMatriz: ");
    for(int i=0; i < LINHAS; i++){
        printf("\n");
        for(int j=0; j < COLUNAS; j++){
           printf("%d ",matriz[i][j]);
        }
    }
    printf("\n\n");



    // Quantidade de elementos entre 12 e 20 em cada linha
    for(int i=0; i < LINHAS; i++){
       qtd_linha=0; // zera o contador para a linha

        for(int j=0; j < COLUNAS; j++){
            if( (matriz[i][j] >= 12) && (matriz[i][j] <= 20) )
                qtd_linha++; 
        }

       printf("Linha %i, quantidade de elementos entre 12 e 20: %i\n",i+1,qtd_linha);
    }



    // Soma dos pares e sua quantidade
    soma_pares = 0;
    qtd_pares = 0;

    for(int i = 0; i < LINHAS; i++ ){
       for(int j = 0; j < COLUNAS; j++){

          if( (matriz[i][j]%2) == 0 ){
              soma_pares += matriz[i][j];
              qtd_pares++;
              printf("Par: %i,%i: %i\n",i+1,j+1, matriz[i][j]);
          }

       }
    }

    printf("Soma Pares: %i\n", soma_pares);
    printf("Quantidade Pares: %i\n", qtd_pares);
    printf("Média dos elementos pares da Matriz: %.2f\n", (soma_pares*1.0)/qtd_pares);

	return 0;

}


