//custom User Header

#ifndef EXERC1_H_
#define EXERC1_H_
#include<stdio.h>
#include<stdlib.h>

struct dados{
    int id;
    float vendas[11]; // vendas por mês
    float total_vendas;
};

typedef struct dados dados_t; 


void init_vendedores( dados_t p[], int tamanho_v){

    // inicializa a struct 
    for(int i=0; i < tamanho_v; i++){
        // id
        p[i].id = 0;

        // Vendas do mês
        for(int j=0; j < 12; j++){
            p[i].vendas[j] = 0;
        }

        // total
        p[i].total_vendas = 0;
    }
}

void cadastrar_vendedor( dados_t p[], int tamanho_v, int *qtd_vendedores){
    // função para cadastrar os vendedores

    int id_vendedor;

    if( *qtd_vendedores < tamanho_v ){
        printf("Id do Vendedor : ");
        do{
            scanf("%i", &id_vendedor);
        }while( id_vendedor < 0 );

        int i=0;
        while( i < tamanho_v ){
            if( p[i].id == id_vendedor )
                break;
            else
                i++;
        }

        if( i == tamanho_v ){ 
            // Cadastra vendedor
            p[*qtd_vendedores].id = id_vendedor;
            *qtd_vendedores += 1;
        }
        else{
            printf("Vendedor já cadastrado.\n");
            }

    }
    else{
        printf("Não há espaço suficiente para novos vendedores.\n");
    }
}


void cadastrar_venda( dados_t p[], int tamanho_v){
    // função para cadastrar vendas do vendedor naquele mês

   int id_vendedor;
   int mes;

   printf("Id do vendedor: ");
   scanf("%i", &id_vendedor); 

   // Verifica se o Id do Vendedor já foi cadastrado
   int i=0;
   while( i < tamanho_v ){
       if( id_vendedor == p[i].id )
           break;
       else
           i++;
   }
   
   if( i == tamanho_v )
       printf("Vendedor não cadastrado.\n");
   else{

        printf("Número do Mês(1-12): ");
        scanf("%i", &mes);

        int i = 0;
        while( i == tamanho_v ){
            if( p[i].id == id_vendedor  &&  p[i].vendas[mes-1] == 0 )
                break; 
            else
                i++;
        }

        if( i == tamanho_v ){
            printf("Vendedor já possui venda no mês.\n");
                
        } 
        else{
                // Cadastra Venda
            for(int i=0; i < tamanho_v; i++){
                if(id_vendedor == p[i].id ) {
                    printf("Vendas mês %i: ", mes);
                    scanf("%f", &p[i].vendas[mes-1]);
                    break;
                    }
            } 
      } 
   }
}


void consultar_vendas( dados_t p[], int tamanho_v){
    // Função para consultar venda mensal de um determinado vendedor
    
    int id_vendedor;
    int mes;
    
    printf("Digite a id do vendedor: ");
    do{
      scanf("%i", &id_vendedor);
    }while( id_vendedor < 0 );

    int i=0;
    while( i < tamanho_v ){

        if( id_vendedor == p[i].id )
            break;
        else
            i++;
        
    }

    if( i == tamanho_v ){
        printf("Vendedor não cadastrado.\n");
    }
    else{
        printf("Digite o número do mês(1-12): ");
        do{
        scanf("%i", &mes);
        }while( mes < 0 || mes > 12);
        
        printf("\n\n%-10s\t%-10s\t%-10s\n", "Vendedor", "Mês", "Valor em Vendas");
        for( int i=0; i < tamanho_v; i++){
            if( id_vendedor == p[i].id ){
                printf("%-10i\t%-10i\tR$ %-10.2f\n\n", p[i].id, mes, p[i].vendas[mes-1] );
                break;
            }
        }
    }
}

void total_vendas( dados_t p[], int tamanho_v){
    // Função para calcular o total de vendas de um vendedor
    
    float total=0;
    int id_vendedor;

    printf("Id do Vendedor: ");
    do{
        scanf("%i", &id_vendedor);
    }while( id_vendedor < 0 );

    int j=0;
    while( j < tamanho_v){
        if( id_vendedor == p[j].id )
            break;
        else
            j++;
        
    }
    if( j == tamanho_v ){
        printf("Vendedor não cadastrado.\n");
    }
    else{
            // Procura o vendedor pelo seu id, quando achar soma todas suas vendas 
            // no ano
            for( int i=0; i < tamanho_v; i++){
                if( id_vendedor == p[i].id ){

                    for( int j=0; j < 12; j++){
                        total += p[i].vendas[j];
                    }
                }
            }

            printf("%-10s\t%-10s\n", "Vendedor", "Total em Vendas");
            for( int i=0; i < tamanho_v; i++){
                if( id_vendedor == p[i].id){
                    printf("%-10i\tR$ %-10.f\n", p[i].id, total);
                    break;
                }

            }
    }
}

void maior_vendas_vendedor( dados_t p[], int tamanho_v){
    // Função para encontrar o vendedor com maior número de vendas
    // em determinado mês
    
    int mes;
    float maior_venda;
    int id_vendedor;

    int i=0;
    while( i < tamanho_v){
        if( p[i].id != 0 )
            break;
        else
            i++;
    }
    if( i == tamanho_v ){
        printf("Nenhum vendedor cadastrado.\n");
    }
    else{
            printf("Digite o número do mês(1-12): ");
            do{
                scanf("%i", &mes);
            }while( mes < 0 || mes > 12 );

            // inicializa maior venda
            maior_venda = p[0].vendas[mes-1];

            // Calcula maior venda e o id do vendedor
            for( int i=0; i < tamanho_v; i++){
                if( p[i].vendas[mes-1] > maior_venda){
                    maior_venda = p[i].vendas[mes-1];
                    id_vendedor = p[i].id;
                }
            }

            // Mostra o vendedor com mais vendas no mês especificado
            if( maior_venda > 0 ){
                printf("%-10s\t%-10s%-10s\n", "Vendedor", "Mês", "Maior Venda");
                for( int i=0; i < tamanho_v; i++){
                    if( id_vendedor == p[i].id ){
                        printf("%-10i\t%-10i\tR$%-10.2f\n", p[i].id, mes, maior_venda);
                        break;
                    }
                }
            }
            else{
                printf("\nNenhuma venda realizada neste mês.\n");
            }
    }

}

void maior_venda_mes( dados_t p[], int tamanho_v){
    // Função para descobrir o mês com mais vendas
   
    float maior_venda_mes[12];
    float maior_venda;
    float mes;

    for( int i=0; i < 12; i++){
        maior_venda_mes[i] = 0;
    }

    int i=0;
    while( i < tamanho_v ){
        if( p[i].id != 0 )
            break;
        else
            i++;
    }
    if( i == tamanho_v ){
        printf("Não houve vendas ainda.\n");
    }
    else{
            // Soma os valores de todos os meses e armazena em um vetor
            for( int i=0; i < 12; i++){
                for( int j=0; j < tamanho_v; j++){
                        maior_venda_mes[i] += p[j].vendas[i];
                }
            } 

            // inicializa a maior venda
            maior_venda = maior_venda_mes[0];
            for( int i=0; i < 12; i++){
                if( maior_venda_mes[i] > maior_venda ){
                    maior_venda = maior_venda_mes[i];
                    mes = i;
               }
           }
            
            if( maior_venda == 0 ){
                printf("Não houve vendas ainda.\n");
            }
            else{
                printf("%-10s\t%s\n", "Mês", "Venda");
                printf("%-10.0f\t%-10.2f\n", mes+1, maior_venda);
            }
    }
}

#endif



































