
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000
#include<stdio.h>
#define TAMANHO 10 

void ler_vetor( int pvetor[TAMANHO-1] ){

    // Ler do vetor 
    printf("Digite os elementos do vetor : \n");
    for( int i=0; i < TAMANHO; i++){
        printf("%d: ", i+1);
        scanf("%d", &pvetor[i] ); 
    } 
}

void separa_pares( int pvetor[TAMANHO-1], int pares[TAMANHO-1], int *j){
    *j=0;
    for( int i=0; i < TAMANHO; i++){
            if( pvetor[i] % 2 == 0 ) {
                 pares[*j] = pvetor[i];
                 *j=*j+1;
            }
    }
}

void separa_impares( int pvetor[TAMANHO-1], int impares[TAMANHO-1], int *k){
    *k=0;
    for( int i=0; i < TAMANHO; i++){
            if( pvetor[i] % 2 == 0 ) {
                 impares[*k] = pvetor[i];
                *k = *k + 1;
            }
    }
}

void mostra_vetor( int pvetor[TAMANHO-1], int *contador){

    for(int i=0; i < *contador; i++){
           printf("%d ", pvetor[i]); 
    }
    printf("\n");
}


#include<stdio.h>

int main(void){

    int vetor[TAMANHO-1];
    int pares[TAMANHO-1];
    int impares[TAMANHO-1];
    int j=0, k=0; 
    
    ler_vetor(vetor);
    separa_pares(vetor, pares, &j);
    separa_impares(vetor, impares, &k );
    printf("Pares: ");
    mostra_vetor(pares, &j);
    printf("ImPares: ");
    mostra_vetor(impares, &j);


	return 0;

}


