#ifndef EXERC5_H_
#define EXERC5_H_

// System Includes
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct dados{
    int codigo;
    char desc[20];
    float valor_unitario;
    int qtd_estoque;
};

typedef struct dados dados_t;


// ========== Functions ======================

void init( dados_t p[], int tamanho_v){
    // Função para inicializar dos dados

    for( int i=0; i < tamanho_v; i++){
        p[i].codigo = 0;
        p[i].desc[0] = 'x';
        p[i].valor_unitario = 0.0;
        p[i].qtd_estoque = 0;
    }
}


void ler( dados_t p[], int tamanho_v){
    // Função para ler os valores da struct
    
    for( int i=0; i < tamanho_v; i++){

        printf("%i. Código: ", i+1);
        do{
          scanf("%i", &p[i].codigo);
        }while( p[i].codigo < 0 );

        printf("%i. Descrição do Produto: ", i+1);
        scanf("\n%s", &p[i].desc);

        printf("%i. Valor Unitário : ", i+1);
        do{
            scanf("%f", &p[i].valor_unitario);
        }while( p[i].valor_unitario < 0 );

        printf("%i. Quantidade em Estoque: ", i+1);
        do{
            scanf("%i", &p[i].qtd_estoque);
        }while( p[i].qtd_estoque < 0 );

        system("clear");

    }
}

void ordenar( dados_t p[], int tamanho_v){
    // Função para ordenar os produtos pelo código de forma crescente
    
    dados_t troca; 

    for( int i=0; i < ( tamanho_v - 1); i++){
        for( int j=i+1; j < tamanho_v; j++){

            if( p[i].codigo > p[j].codigo ) {
                
                // copia para troca
                troca.codigo = p[i].codigo;
                memcpy(troca.desc, p[i].desc, 20);
                troca.valor_unitario = p[i].valor_unitario;
                troca.qtd_estoque = p[i].qtd_estoque;

                // copia j para i 
                p[i].codigo = p[j].codigo;
                memcpy( p[i].desc, p[j].desc, 20);
                p[i].valor_unitario = p[j].valor_unitario;
                p[i].qtd_estoque = p[j].qtd_estoque;

                // copia troca para j 
                p[j].codigo = troca.codigo;
                memcpy( p[j].desc, troca.desc, 20);
                p[j].valor_unitario = troca.valor_unitario;
                p[j].qtd_estoque = troca.qtd_estoque;
                
            }
       }
    }
}

void alterar( dados_t p[], int tamanho_v){
    // Função para alterar descrição, valor unitário e quantidade em estoque
    
    int codigo;
    int i;

    printf("Código: ");
    do{
        scanf("%i", &codigo);
    }while( codigo < 0 );

    i=0;
    while( i == 0 ){ 
        if( p[i].codigo == codigo ){
            break;
        }
        else
        i++;
    }

    if( i == tamanho_v ){
        printf("Código Inválido. Digite Novamente.\n");
    }
    else{

        // Leitura da nova descrição 
        printf("Descrição Antiga : ");
        printf("%s\n", p[i].desc); 
        printf("Digite a Nova Descrição : ");
        scanf("%s", &p[i].desc);

        // Leitura do novo valor unitário
        printf("Valor Unitário Antigo : ");
        printf("%.2f\n", p[i].valor_unitario); 
        printf("Digite o Novo Valor Unitário : ");
        scanf("%f", &p[i].valor_unitario);

        // Leitura da nova quantidade em estoque 
        printf("Quantidade em Estoque : ");
        printf("%i\n", p[i].qtd_estoque); 
        printf("Digite a Nova Quantidade em Estoque: ");
        scanf("%i", &p[i].qtd_estoque);

    }

}

void mostrar( dados_t p[], int tamanho_v){
    // Função para mostrar cuja descrição comece com determinada letra
    char letra;
    int i;

    printf("Letra: ");
    scanf("\n%c", &letra);

    i=0;
    while( i < tamanho_v ){
        if( p[i].desc[0] == letra ){
            printf("Codigo: ");
            printf("%i\n", p[i].codigo); 

            printf("Descrição: ");
            printf("%s\n", p[i].desc); 

            printf("Valor Unitário: ");
            printf("%.2f\n", p[i].valor_unitario); 

            printf("Quantidade em Estoque: ");
            printf("%i\n", p[i].qtd_estoque); 
        }
        i++;
    }


}
#endif



































