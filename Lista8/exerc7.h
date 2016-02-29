//Custom User Header

#ifndef EXERC7_H_
#define EXERC7_H_
// System Includes
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct cliente { 
    int codigo_cliente;
    char nome_cliente[20];
};

struct conta{
    int n_conta;
    float valor_compra;
    int codigo_cliente; 
};

typedef struct cliente cliente_t;
typedef struct conta conta_t;


void init_clientes( cliente_t p[], int tamanho_v){
    // Função para inicializar os clientes
    for( int i=0; i < tamanho_v; i++){
        p[i].codigo_cliente=0;
        strcpy(p[i].nome_cliente, "xxxxx");
    }
}

void init_contas( conta_t p[], int tamanho_v){
    // Função para inicializar as contas
    for( int i=0; i < tamanho_v; i++){
        p[i].n_conta=0;
        p[i].valor_compra=0;
        p[i].codigo_cliente=0;
    }
}

void incluir_cliente( cliente_t p[], int tamanho_v, int *qtd_clientes){
    // Função para incluir um cliente
   
    int i,j; 

    if( *qtd_clientes < tamanho_v ){

        i=1;
        while( i == 1 ){

            printf("Código do Cliente: ");
            do{
                scanf("%i", &p[*qtd_clientes].codigo_cliente);
            }while( p[*qtd_clientes].codigo_cliente <= 0 );

            // Verifica se o código do cliente já existe
            j=0;
            while( j < *qtd_clientes ){

                if( p[j].codigo_cliente == p[*qtd_clientes].codigo_cliente){
                    printf("Código de Cliente já existente, digite novamente.\n");
                    break;
                }
                else
                    j++;
            }

            // Código do cliente não existe, termina o loop
            if( j == *qtd_clientes ){
                i = 0; // Termina o loop 
            }
        } // Fim loop de verificação do código do cliente


        // Recebe o nome do cliente
        printf("Nome do Cliente: ");
        scanf("%s", &p[*qtd_clientes].nome_cliente); 

        *qtd_clientes += 1; // incrementa quantidade de cliente cadastrados

       }
    else
        printf("Não existe espaço suficiente para criar novos clientes.\n");

       
}

void incluir_conta( conta_t p[], cliente_t pclientes[], int tamanho_v, int *qtd_contas){
    // Função para incluir uma conta 
    
    int i, j;
    int codigo_cliente;

    if( *qtd_contas < tamanho_v ){

       i = 1; 
        while( i == 1 ){

            printf("Código do Cliente: ");
            do{
                scanf("%i", &codigo_cliente);
            }while( codigo_cliente <= 0 );
                
                // Verifica se o cliente já foi previamente cadastrado 
                j=0; 
                while( j < tamanho_v ){

                    // Se o cadastro já existir incluir a compra
                    // e sair do loop
                    if( codigo_cliente == pclientes[j].codigo_cliente ) {
                        // Atribui o código do cliente a conta
                        p[*qtd_contas].codigo_cliente = codigo_cliente;

                        //Criar nova Conta
                        p[*qtd_contas].n_conta = rand(); 

                        // Ler o valor da compra
                        printf("Valor da Compra: ");
                        do{
                            scanf("%f", &p[*qtd_contas].valor_compra );
                        }while( p[*qtd_contas].valor_compra <= 0 );

                        // incrementa quantidade de contas cadastradas
                        *qtd_contas += 1;

                        // Sair dos Loops
                        i = 0;
                        break;
                    }
                    else
                        j++;
                }

                // Cliente não possui cadastro. 
                if( j == tamanho_v ) {
                    printf("Cliente não cadastrado, por favor cadastre-o.\n");
                    system("sleep 2s");
                    i = 0; // termina o loop de verificação
                }

        }

    }
    else
        printf("Não existe espaço suficiente para mais contas.\n");

} 

void remover_cliente( cliente_t p[], conta_t pcontas[], int tamanho_v, int *qtd_clientes){
    // Função para remover um cliente.
   
    int codigo_cliente;

    printf("Código do Cliente a ser removido: ");
    do{
        scanf("%i", &codigo_cliente);
    }while( codigo_cliente <= 0 );

    // Verifica se o cliente possui uma conta cadastrada 
    // em seu código
    int i=0;
    while( i < tamanho_v ){

        if( codigo_cliente == pcontas[i].codigo_cliente ){
            printf("Exclusão não permitida.\n");
            system("sleep 2s");
            break;
        }
        else
            i++;
    } 

    // Cliente não possui nenhuma conta em seu código
    // proceder com a remoção
    if( i == tamanho_v ){
        for( int i=0; i < tamanho_v; i++){
            if( p[i].codigo_cliente == codigo_cliente ){
               
                // Remover cliente 
                p[i].codigo_cliente = 0;
                strcpy(p[i].nome_cliente, "xxxxx");
                *qtd_clientes -= 1; // decrementa a quantidade de clientes 
                printf("Exclusão feita com sucesso.\n");
                system("sleep 2s");
                break;
            }
        }
    }
    
}

#endif

