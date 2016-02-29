
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

void interseccao( int vetor_a[TAMANHO-1], int vetor_b[TAMANHO-1], int intersec[TAMANHO-1], int *k){

    *k=0;
    int t = 0;

    for( int i=0; i < TAMANHO; i++){
        for( int j=0; j < TAMANHO; j++){
               if( vetor_a[i] == vetor_b[j]){
               
                  // Verifica se o valor já está inserido no vetor intersecção
                  // Se já estiver inserido descarta, se não o adiciona. 
                   t = 0;
                   while( t < *k ){
                       if( vetor_a[i] == intersec[t]) 
                           break;
                       else
                           t++;
                   }
                   
                   if( t == *k ){
                       intersec[*k] = vetor_a[i];
                       *k = *k + 1;
                   }
                       
               }
        } 
    }

}

void mostrar_intersec(int vetor[], int *tamanho) {
        
    // Mostra o Vetor Intereseção
    printf("Vetor Intersecção: ");
    for( int i=0; i < *tamanho; i++){
           printf("%d ", vetor[i]); 
    }
    printf("\n");
    
    
}



int main(void){

    int vetor_a[TAMANHO-1];
    int vetor_b[TAMANHO-1];
    int intersec[TAMANHO-1];
    int k; // indice intersecção 

    ler_vetor(vetor_a);
    ler_vetor(vetor_b);
    interseccao(vetor_a, vetor_b, intersec, &k);
    mostrar_intersec(intersec, &k);
    

	return 0;

}


