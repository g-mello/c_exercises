
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000
#include<stdio.h>
#define TAMANHO 15 

void ler_vetor( int pvetor[TAMANHO-1] ){
    
    // Ler do vetor 
    printf("Digite os elementos do vetor : \n");
    for( int i=0; i < TAMANHO; i++){
        printf("%d: ", i+1);
        scanf("%d", &pvetor[i] ); 
    }
} 

void mostrar_pares(int pvetor[TAMANHO-1]){

    printf("Pares: ");
    for( int i=0; i < TAMANHO; i++){
        if( pvetor[i] % 2 == 0 ){
            printf("%d ", pvetor[i]); 
        }
    }
    printf("\n");
        
}


int main(void){

    int vetor[TAMANHO-1];
    ler_vetor(vetor);
    mostrar_pares(vetor);

	return 0;

}


