
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000
#include<stdio.h>
#define TAMANHO 20 

void ler_vetor( float pvetor[TAMANHO-1] ){
    
    // Ler do vetor 
    printf("Digite os elementos do vetor : \n");
    for( int i=0; i < TAMANHO; i++){
        printf("%d: ", i+1);
        scanf("%f", &pvetor[i] ); 
    }
} 

float somar_elementos(float pvetor[TAMANHO-1]){

    float soma=0;
    for( int i=0; i < TAMANHO; i++)
        soma += pvetor[i];    

    return soma; 
}


int main(void){

    float vetor[TAMANHO-1];
    float soma;

    ler_vetor(vetor);
    soma = somar_elementos(vetor);

    printf("Soma dos elementos: %.2f\n", soma);
	return 0;

}


