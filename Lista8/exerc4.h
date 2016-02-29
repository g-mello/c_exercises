#ifndef EXERC4_H_
#define EXERC4_H_

// System Includes
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

struct dados{
    int idade;
    char sexo;
    float renda_familiar;
    int n_filhos;
};

typedef struct dados dados_t; 

void init( dados_t p[], int tamanho_v){
    // Função para inicializar os dados
    
    for( int i=0; i < tamanho_v; i++){
        p[i].idade = 0;
        p[i].sexo = 'X';
        p[i].renda_familiar = 0.0;
        p[i].n_filhos = 0;
        
    }
}


void ler( dados_t p[], int tamanho_v){
    // Função para ler os dados na struct
    
    for(int i=0; i < tamanho_v; i++){

        printf("%i. Idade: ", i+1);
        do{
            scanf("%i", &p[i].idade);
        }while( p[i].idade < 0 || p[i].idade > 150 );

        printf("%i. Sexo: ", i+1);
        do{
            scanf("\n%c", &p[i].sexo);
            p[i].sexo = toupper( p[i].sexo );
        }while( p[i].sexo != 'M' && p[i].sexo != 'F' );

        printf("%i. Renda Familiar: ", i+1);
        do{
            scanf("%f", &p[i].renda_familiar);
        }while( p[i].renda_familiar < 0  );

        printf("%i. Numero de Filhos: ", i+1);
        do{
            scanf("%i", &p[i].n_filhos);
        }while( p[i].n_filhos < 0 ); 

        system("clear");
    }
}


float media_salarial( dados_t p[], int tamanho_v){
    // Função para calcular a média salarial dos habitantes

    float media=0; 
    for( int i=0; i < tamanho_v; i++){
        media += p[i].renda_familiar; 
    }

     return ( media != 0 ) ? media/tamanho_v : 0; 
}

int maior_idade( dados_t p[], int tamanho_v){
    // Função para calcular a maior idade
    
     int maior_idade;
     maior_idade = p[0].idade; 
     for( int i=1; i < tamanho_v; i++){
         if( p[i].idade > maior_idade )
             maior_idade = p[i].idade;
     }

     return maior_idade; 
}

int menor_idade( dados_t p[], int tamanho_v){
    // Função para calcular a maior idade
    
     int menor_idade;
     menor_idade = p[0].idade; 
     for( int i=1; i < tamanho_v; i++){
         if( p[i].idade <  menor_idade )
            menor_idade  = p[i].idade;

     }
     return menor_idade; 
}

int qtd_mulheres( dados_t p[], int tamanho_v){
    // Função para calcular a quantidade de mulheres com mais de dois filhos
    // e com renda familiar inferior a $600 
    
    int qtd=0; 

    for( int i=0; i < tamanho_v; i++){
        if( p[i].sexo == 'F' && p[i].renda_familiar > 600 && p[i].n_filhos  > 2 ){
            qtd++;
        }
    }

    return qtd;
}

#endif




































