//Custom User Header

#ifndef SALA_H_
#define SALA_H_
// System Includes
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct dados{ 
    char categoria[20];
    char url[30];
    char autor[20];
};

typedef struct dados dados_t; 


void init( dados_t p[], int tamanho_v){
    // Função para inicializar a struct
    
    for( int i=0; i < tamanho_v; i++){
        strcpy(p[i].categoria, "xxx");
        strcpy(p[i].url, "xxx");
        strcpy(p[i].autor, "xxx");
    }
}

void cadastra( dados_t p[], int tamanho_v, int *qtd_cadastro){
    // Função para cadastrar um site
    
      if( *qtd_cadastro < tamanho_v ){
        system("clear");
        system("clear");
        printf("Categoria: ");
        scanf("%s", &p[*qtd_cadastro].categoria); 

        printf("url : ");
        scanf("%s", &p[*qtd_cadastro].url);

        printf("Autor: ");
        scanf("%s", &p[*qtd_cadastro].categoria); 

        *qtd_cadastro += 1;
      }
      else{
          printf("Espaço Insuficiente.\n");
      }
            
}

void consulta( dados_t p[], int *qtd_cadastro){
    // função para consultar as informações de todos os sites
    
    for( int i=0; i < *qtd_cadastro; i++){
        system("clear");
        printf("%i\n", i+1);
        printf("Categoria: %s\n", p[i].categoria);
        printf("Url: %s\n", p[i].url);
        printf("Autor: %s\n", p[i].autor);
        printf("\n\n");
    }
}
#endif

































