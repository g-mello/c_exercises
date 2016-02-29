
#ifndef EXERC10_H_
#define EXERC10_H_
// System Includes
#include<stdio.h>

struct contas_receber{
    int n_documento;
    int codigo_cliente;

    int dia_pagamento;
    int mes_pagamento;
    int ano_pagamento;

    int dia_vencimento;
    int mes_vencimento;
    int ano_vencimento;

    float valor_conta;
    float juros;
};

typedef struct contas_receber contas_receber_t;

void init( contas_receber_t p[], int tamanho_v){
    // Função para inicializar contas a receber
    
    for( int i=0; i < tamanho_v; i++){
            p[i].n_documento = 0;
            p[i].codigo_cliente = 0;
            
            p[i].dia_pagamento=0;
            p[i].mes_pagamento=0;
            p[i].ano_pagamento=0;

            p[i].dia_vencimento=0;
            p[i].mes_vencimento=0;
            p[i].ano_vencimento=0;

            p[i].valor_conta=0.0;
            p[i].juros=0.0;
            
    }
}

void cadastrar( contas_receber_t p[], int tamanho_v, int *qtd_contas){
    // Função para cadastrar um documento
    
    int dia_pagamento, mes_pagamento, ano_pagamento;
    int dia_vencimento, mes_vencimento, ano_vencimento;

    if( *qtd_contas < tamanho_v ){

        printf("Numero do Documento: ");
        do{
            scanf("%i", &p[*qtd_contas].n_documento);
        }while( p[*qtd_contas].n_documento < 0);

        printf("Código do Cliente: ");
        do{
            scanf("%i", &p[*qtd_contas].codigo_cliente);
        }while( p[*qtd_contas].codigo_cliente < 0);

        int i=1;
        while( i == 1){
            printf("Data do Pagamento ( dia/mês/ano ): ");

            // Leitura da data
            scanf("%i/%i/%i", &dia_pagamento, &mes_pagamento, &ano_pagamento);
            
            // Verificação para os meses com 31 dias
            if( mes_pagamento == 1 || mes_pagamento == 3 || mes_pagamento == 5 || 
                   mes_pagamento == 7 || mes_pagamento == 8 || mes_pagamento == 10 ||
                  mes_pagamento == 12 ){

                if( dia_pagamento < 0 || dia_pagamento > 31 ) 
                    printf("Dia inválido\n");
                else
                    i= 0;
            } 

            // Verificação para os meses com 30 dias
            else if( mes_pagamento == 4 || mes_pagamento == 6 || mes_pagamento == 9 || 
                  mes_pagamento == 11  ){
                if( dia_pagamento < 0 || dia_pagamento > 30 ) 
                    printf("Dia inválido\n");
                i=0;
            } 

            // Verificação para fevereiro
            if(  mes_pagamento == 2 ){
                if( dia_pagamento < 0 || dia_pagamento > 28 )
                    printf("Dia inválido\n");
                else
                    i=0;
            }

            // Verificação para mês 
            if( mes_pagamento < 0  || mes_pagamento > 12 ){ 
                printf("Mês inválido.\n");
            } 

            // Verificação para ano 
            if( ano_pagamento < 0 ){ 
                printf("Ano inválido.\n");
            } 
        }

        p[*qtd_contas].dia_pagamento=dia_pagamento;
        p[*qtd_contas].mes_pagamento=mes_pagamento;
        p[*qtd_contas].ano_pagamento=ano_pagamento;

        int j=1;
        while( j == 1){
            printf("Data do Vencimento ( dia/mês/ano ): ");

            // Leitura da data
            scanf("%i/%i/%i", &dia_vencimento, &mes_vencimento, &ano_vencimento);
            
            // Verificação para os meses com 31 dias
            if( mes_vencimento == 1 || mes_vencimento == 3 || mes_vencimento == 5 || 
                   mes_vencimento == 7 || mes_vencimento == 8 || mes_vencimento == 10 ||
                  mes_vencimento == 12 ){

                if( dia_vencimento < 0 || dia_vencimento > 31 ) 
                    printf("Dia inválido\n");
                else
                    i= 0;
            } 

            // Verificação para os meses com 30 dias
            else if( mes_vencimento == 4 || mes_vencimento == 6 || mes_vencimento == 9 || 
                  mes_vencimento == 11  ){
                if( dia_vencimento < 0 || dia_vencimento > 30 ) 
                    printf("Dia inválido\n");
                i=0;
            } 

            // Verificação para fevereiro
            if(  mes_vencimento == 2 ){
                if( dia_vencimento < 0 || dia_vencimento > 28 )
                    printf("Dia inválido\n");
                else
                    i=0;
            }

            // Verificação para mês 
            if( mes_vencimento < 0 || mes_vencimento > 12){ 
                printf("Mês inválido.\n");
            } 

            // Verificação para ano 
            if( ano_vencimento < 0 ){ 
                printf("Ano inválido.\n");
            } 
        }

        p[*qtd_contas].dia_vencimento=dia_vencimento;
        p[*qtd_contas].mes_vencimento=mes_vencimento;
        p[*qtd_contas].ano_vencimento=ano_vencimento;;

        // Cálculo para conversão das datas em dias.
        if( ano_pagamento > ano_vencimento ){
            if( mes_pagamento > mes_vencimento){
                if( dia_pagamento > dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros += 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros += ( dia_pagamento - dia_vencimento);
                }
                else if( dia_pagamento == dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros += 12 * ( mes_pagamento - mes_vencimento);
                }
                else if( dia_pagamento < dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros += 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros -= ( dia_pagamento - dia_vencimento);
                }
            }
            else if ( mes_pagamento < mes_vencimento ){
                if( dia_pagamento > dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros -= 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros += ( dia_pagamento - dia_vencimento);
                }
                else if( dia_pagamento < dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros -= 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros -= ( dia_pagamento - dia_vencimento);
                }
                else if ( dia_pagamento == dia_vencimento){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros -= 12 * ( mes_pagamento - mes_vencimento);
                }
            }
            else if( mes_pagamento == mes_vencimento ){
                if( dia_pagamento > dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros += ( dia_pagamento - dia_vencimento);

                }
                else if( dia_pagamento == dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                }
                else if( dia_pagamento < dia_vencimento ){
                    p[*qtd_contas].juros = 360 * (ano_pagamento - ano_vencimento);
                    p[*qtd_contas].juros -= ( dia_pagamento - dia_vencimento);
                }
            
            }

        }
        else if( ano_pagamento == ano_vencimento ){
            if( mes_pagamento > mes_vencimento ){
                if( dia_pagamento > dia_vencimento ){
                    p[*qtd_contas].juros = 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros += ( dia_pagamento - dia_vencimento);
                }
                else if ( dia_pagamento == dia_vencimento ){
                    p[*qtd_contas].juros = 12 * ( mes_pagamento - mes_vencimento);
                }
                else if( dia_pagamento < dia_vencimento ){
                    p[*qtd_contas].juros = 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros -= ( dia_pagamento - dia_vencimento);
                }
            }
            else if ( mes_pagamento < mes_vencimento ){
                if( dia_pagamento > dia_vencimento ){
                    p[*qtd_contas].juros = 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros += ( dia_pagamento - dia_vencimento);
                }
                else if ( dia_pagamento < dia_vencimento){
                    p[*qtd_contas].juros = 12 * ( mes_pagamento - mes_vencimento);
                    p[*qtd_contas].juros -= ( dia_pagamento - dia_vencimento);
                }
                else if ( dia_pagamento == dia_vencimento){
                    p[*qtd_contas].juros = 12 * ( mes_pagamento - mes_vencimento);
                }
            }
            else if( mes_pagamento == mes_vencimento ){
                if( dia_pagamento > dia_vencimento ){
                    p[*qtd_contas].juros = ( dia_pagamento - dia_vencimento);
                }
                else if( dia_pagamento == dia_vencimento){
                    p[*qtd_contas].juros = 0; 
                }
            }
        }

    printf("Valor da Conta: ");
    do{ 
        scanf("%f", &p[*qtd_contas].valor_conta);
    }while( p[*qtd_contas].valor_conta < 0 );

    // Cálculo do total de juros a receber baseado na quantidade de 
    // dias contados 
    p[*qtd_contas].juros = p[*qtd_contas].juros * ( 0.02 * p[*qtd_contas].valor_conta );

    // passa para nova conta
    *qtd_contas +=1;

    }
    else
        printf("Não há espaço para cadastrar mais documentos.\n");
}

void mostrar_documentos( contas_receber_t p[], int qtd_contas){
    // Função para mostrar os documentos cadastrados.
    
    for( int i=0; i < qtd_contas; i++){
        printf("%i.\n", i+1);
        printf("Numero do Documento: %i\n",p[i].n_documento);
        printf("Numero do Cliente: %i\n", p[i].codigo_cliente);
        printf("Valor da Conta: %.2f\n", p[i].valor_conta);
        printf("Dia do Pagamento: %i/%i/%i\n", p[i].dia_pagamento, p[i].mes_pagamento, p[i].ano_pagamento);
        printf("Dia do Vencimento: %i/%i/%i\n", p[i].dia_vencimento, p[i].mes_vencimento, p[i].ano_vencimento);
        printf("Total a Receber: R$ %.2f\n", p[i].juros);
    }
}

void media_juros( contas_receber_t p[],  int qtd_contas ){
    // função para mostrar a media de juros
    
    float soma_juros=0;
    for( int i=0; i < qtd_contas; i++){
        soma_juros += p[i].juros;
    }

    printf("Média dos juros: %.2f\n", soma_juros/qtd_contas);
}

#endif

