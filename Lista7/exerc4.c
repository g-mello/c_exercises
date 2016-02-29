
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000
#include<stdio.h>
#define TAMANHO 25 

void ler_vetor( int pvetor[TAMANHO-1] ){
    
    // Ler do vetor 
    printf("Digite os elementos do vetor : \n");
    for( int i=0; i < TAMANHO; i++){
        printf("%d: ", i+1);
        scanf("%d", &pvetor[i] ); 
    }
} 

void substituir_zeros(int pvetor[TAMANHO-1]){

    for( int i=0; i < TAMANHO; i++){
        if( pvetor[i] < 0 ){
             pvetor[i] = 0;
        }
    }
        
}

void mostrar_vetor( int pvetor[TAMANHO-1]){
    printf("Vetor: ");
    for( int i=0; i < TAMANHO; i++){
        printf("%d ", pvetor[i]);
    }
    printf("\n");
}


int main(void){

    int vetor[TAMANHO-1];
    ler_vetor(vetor);
    substituir_zeros(vetor);
    mostrar_vetor(vetor);

	return 0;

}


