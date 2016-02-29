//Custom User Header

#ifndef EXERC6_H_
#define EXERC6_H_

// System Includes
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct cliente{
    int numero_cliente;
    char nome[25];
    int telefone;
    char endereco[25];
};

typedef struct cliente cliente_t; 

struct conta_bancaria{ 
    long int numero_conta;
    cliente_t cliente;
    float saldo;
};

typedef struct conta_bancaria conta_bancaria_t; 


// ============ Functions ======================

void init( conta_bancaria_t p[], int tamanho_v){
    // Função para inicializar os dados de todas contas bancarias

    for( int i=0; i < tamanho_v; i++){
        // dados da conta
        p[i].numero_conta = 0;
        p[i].saldo = 0;

        // dados do cliente
        p[i].cliente.numero_cliente = 000000;
        strcpy(p[i].cliente.nome, "xxxxx");
        strcpy(p[i].cliente.endereco, "xxxxx");
        p[i].cliente.telefone = 0000000;

    }

}


void cadastrar( conta_bancaria_t p[], int tamanho_v, int *qtd_contas ){
    // Função para cadastrar os dados da conta bancária

    int numero_cliente; 
    char escolha;
    int i,j;

    // Para números de clientes já existentes
    i=*qtd_contas;
    while( i < tamanho_v ){ 

            // Lê o número do cliente
            printf("Numero do cliente: ");
            do{
                scanf("%i", &numero_cliente); 
            }while( numero_cliente <= 0 );


            // Procurar o número do Cliente
            j=0;
            while( j < tamanho_v ){ 

                // Para cliente já cadastrado 
                if( p[j].cliente.numero_cliente == numero_cliente ){

                        system("clear");
                        printf("Cliente já existente.\n");
                        printf("Deseja alterar os dados do cliente: %i ? \n", numero_cliente);
                            printf("S-Sim ou N-Não: "); 
                            do{
                                scanf("%c", &escolha);
                                escolha = toupper(escolha);
                            }while( escolha != 'S' && escolha != 'N' );

                            // Altera os dados
                            if( escolha == 'S' ){

                                    // Cadastrar dados do cliente 
                                    printf("Nome : ");
                                    scanf("%s", &p[j].cliente.nome);

                                    printf("Endereço: ");
                                    scanf("%s", &p[j].cliente.endereco);

                                    printf("Telefone: ");
                                    do{
                                        scanf("%i", &p[i].cliente.telefone);
                                    }while( p[j].cliente.telefone < 0 );

                                    // Cadastrar dados da conta
                                    printf("Saldo: ");
                                    do{
                                        scanf("%f", &p[j].saldo);
                                    }while( p[i].saldo < 0 );

                                    // Dá a possibilidade de alterar mais contas
                                    system("clear");
                                    printf("Alteração feita com sucesso.\n");
                                    printf("Deseja alterar mais alguma conta bancária ?\n");
                                    printf("S-Sim ou N-Não: ");
                                    do{
                                        scanf("\n%c", &escolha);
                                        escolha = toupper(escolha);
                                    }while( escolha != 'S' && escolha != 'N');

                                    if( escolha == 'N' ){
                                        i = tamanho_v;
                                        break;
                                    }
                                    else{
                                        i++; // continua
                                        break;
                                        system("clear");
                                    }
                            }
                        else{ // escolha == 'N' - Para não alterar os Dados
                            printf("Obrigado\n");
                            i = tamanho_v; // break first while 
                            break; // break this while
                        }
                    }

                j++;
            }

            // Número do Cliente não encontrado. Cadastrar Novo Cliente.
            if( j == tamanho_v ){ 
                
                system("clear");
                printf("Cliente, não cadastrado. Deseja Cadastrar ?\n");
                printf("S-Sim ou N-Não: ");
                do{
                    scanf("\n%c", &escolha);
                    escolha = toupper(escolha);
                }while( escolha != 'S' && escolha != 'N' );

                if( escolha == 'S' ){
                    
                        // Cria uma nova conta 
                        *qtd_contas = *qtd_contas + 1; 

                        // Cadastrar dados do cliente 
                        p[i].cliente.numero_cliente = numero_cliente;

                        printf("Nome : ");
                        scanf("%s", &p[i].cliente.nome);

                        printf("Endereço: ");
                        scanf("%s", &p[i].cliente.endereco);

                        printf("Telefone: ");
                        do{
                            scanf("%i", &p[i].cliente.telefone);
                        }while( p[i].cliente.telefone < 0);

                        // Cadastrar dados da conta
                        p[i].numero_conta = rand( );

                        printf("Saldo: ");
                        do{
                            scanf("%f", &p[i].saldo);
                        }while( p[i].saldo< 0 );

                        system("clear");

                        // Encerra ou dá a possibilidade de cadastrar mais
                        // clientes não cadastrados
                        system("clear");
                        printf("Cliente Cadastrado Com Sucesso.\n"); 
                        printf("Deseja continuar cadastrando clientes ? \n");
                        printf("S-Sim ou N-Não: ");
                        do{
                            scanf("\n%c", &escolha);
                            escolha = toupper(escolha);
                        }while( escolha != 'S' && escolha != 'N' );

                        if( escolha == 'S' )
                            // incrementa o contador para o próximo cliente
                            i++;
                        else
                            break; // termina o while principal
                }
                else{ // escolha == 'N'
                    break;
                }

            }
    }
}

int qtd_cadastros( conta_bancaria_t p[], int tamanho_v){
    // função que retorna a quantidade de contas cadastradas.
    
    int qtd_contas=0;

    for( int i = 0; i < tamanho_v; i++){
        if( p[i].cliente.numero_cliente != 0 )
            qtd_contas++;
    } 

    return qtd_contas;
}

void mostrar_contas( conta_bancaria_t p[], int *tamanho_v){
    // Função para mostrar todos os dados das contas bancárias
    
    system("clear");
    printf("====== Contas =========\n"); 
    for(int i=0; i < *tamanho_v; i++){
        
        printf("%i.\n", i+1);
        printf("Numero da Conta: %li\n", p[i].numero_conta);
        printf("Saldo: %.2f\n", p[i].saldo);
        printf("Numero do Cliente: %i\n", p[i].cliente.numero_cliente);
        printf("Nome do Cliente: %s\n", p[i].cliente.nome);
        printf("Telefone: %i\n", p[i].cliente.telefone);
        printf("Endereço: %s\n", p[i].cliente.endereco);
        printf("\n\n");
    }
}
#endif

