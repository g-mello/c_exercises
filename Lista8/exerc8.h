//Custom User Header

#ifndef EXERC8_H_
#define EXERC8_H_
// System Includes

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct dados{
    char nome_estado[20];
    int n_veiculos;
    int n_acidentes;
};

typedef struct dados dados_t; 

void init( dados_t p[], int tamanho_v){
    // Função para inicializar os dados 
    
    for( int i=0; i < tamanho_v; i++){
        strcpy(p[i].nome_estado, "xxxxx");
        p[i].n_veiculos=0;
        p[i].n_acidentes=0;
    }
    
}

void ler_dados( dados_t p[], int tamanho_v){
    // Função para ler dos dados dos estados
    
    for( int i=0; i < tamanho_v; i++){
        printf("%i. Nome do Estado: ", i+1);
        scanf("%s", &p[i].nome_estado);

        printf("%i. Numero de Veículos: ", i+1);
        do{
            scanf("%i", &p[i].n_veiculos);
        }while( p[i].n_veiculos < 0 );

        printf("%i. Numero de Acidentes: ", i+1);
        do{
            scanf("%i", &p[i].n_acidentes);
        }while( p[i].n_acidentes < 0 );
        system("clear");
    }
}

void maior_n_acidentes( dados_t p[], int tamanho_v){
    // Função para conhecer o estado com maior numero de acidentes
    int maior;
    char estado[20];

    maior=p[0].n_acidentes;
    for(int i=1; i < tamanho_v; i++){
        if( p[i].n_acidentes > maior ){
            maior = p[i].n_acidentes;
            memcpy(estado, p[i].nome_estado, 20);
        }
    }

    printf("%s\n", estado);

}


void menor_n_acidentes( dados_t p[], int tamanho_v){
    // Função para conhecer o estado com maior numero de acidentes
    int menor;
    char estado[20];

    menor=p[0].n_acidentes;
    for(int i=1; i < tamanho_v; i++){
        if( menor < p[i].n_acidentes ){
            menor = p[i].n_acidentes;
            memcpy(estado, p[i].nome_estado, 20);
        }
    }

    printf("%s\n", estado);
}

int total_n_carros( dados_t p[], int tamanho_v){
    // função para contar a quantidade total de carros
    int total=0;
    
    for(int i=0; i < tamanho_v; i++){
        total += p[i].n_veiculos;
    }

    return total;
}

void porcentual_carros( dados_t p[], int tamanho_v, int total){
    // função para calcular a o porcentual de carros em cada estado
   
    printf("\n%-10s\t%-10s\n", "Estado", "Porcentual"); 
    for( int i=0; i < tamanho_v; i++){
       printf("%-10s\t%.2f\n", p[i].nome_estado, 100*( (p[i].n_veiculos * 1.0)/total));  
    }
}

int total_n_acidentes( dados_t p[], int tamanho_v){
    // função para contar a quantidade total de acidentes 
    int total=0;
    
    for(int i=0; i < tamanho_v; i++){
        total += p[i].n_acidentes;
    }

    return total;
}

void media_acidentes( dados_t p[], int tamanho_v, int total){
    // Função para calcular a média de acidentes em cada estado
    
    printf("\n%-10s\t%-10s\n", "Estado", "Média de Acidentes"); 
    for( int i=0; i < tamanho_v; i++){
       printf("%-10s\t%.2f\n", p[i].nome_estado, (total*1.0)/p[i].n_acidentes);  
    }
}

#endif

