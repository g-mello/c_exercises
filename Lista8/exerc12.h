//Custom User Header

#ifndef EXERC12_H_
#define EXERC12_H_
// System Includes
#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

struct cliente{
    int cod_cliente;
    char nome[20];
    char endereco[20];
    char telefone[20];
    int qtd_cadastro;
};

struct recebimentos{
    int num_doc;
    float valor_doc;
    int dia_recebimento;
    int mes_recebimento;
    int ano_recebimento;
    int dia_vencimento;
    int mes_vencimento;
    int ano_vencimento;
    int cod_cliente;
};

typedef struct cliente cliente_t; 
typedef struct recebimentos recebimentos_t; 


void init_clientes( cliente_t p[], int tamanho_v){
    // Função para inicializar os clientes
    
    for( int i=0; i < tamanho_v; i++){
        p[i].cod_cliente = 0;
        strcpy(p[i].nome, "xxxxx");
        strcpy(p[i].endereco, "xxxxx");
        strcpy(p[i].telefone, "00000");
        p[i].qtd_cadastro=0;
    }
}

void init_recebimentos( recebimentos_t p[], int tamanho_v){
    // Função para inicializar os recebimentos 
    
    for( int i=0; i < tamanho_v; i++){
        p[i].num_doc = 0;
        p[i].valor_doc = 0.0;

        p[i].dia_recebimento = 0;
        p[i].mes_recebimento = 0;
        p[i].ano_recebimento = 0;

        p[i].dia_vencimento = 0;
        p[i].mes_vencimento = 0;
        p[i].ano_vencimento = 0;
        p[i].cod_cliente = 0;
    }
}

void incluir_recebimento( recebimentos_t precebimento[], cliente_t pcliente[], int tamanho_v, int *qtd_recebimentos){
    // Função para incluir um recebimento
    int cod_cliente; 
    int i; 

    if( *qtd_recebimentos < tamanho_v){
        printf("Código do Cliente: ");
        do{
            scanf("%i", &cod_cliente);
        }while( cod_cliente < 0 );

        // Verificar se o código do cliente já se encontra 
        // cadastrado       
        i=0;
        while(i < tamanho_v ){
            if( cod_cliente == pcliente[i].cod_cliente )
                break;
            else
                i++;
        } 

        if(i == tamanho_v ){
            printf("Cliente não cadastrado.\n");
        }
        else{

            if( pcliente[i].qtd_cadastro < 3 ){
                    precebimento[*qtd_recebimentos].cod_cliente = cod_cliente;

                    printf("Número do documento: ");
                    do{
                        scanf("%i", &precebimento[*qtd_recebimentos].num_doc);
                    }while( precebimento[*qtd_recebimentos].num_doc < 0 );

                    printf("Valor do Documento: ");
                    do{
                        scanf("%f", &precebimento[*qtd_recebimentos].valor_doc);
                    }while( precebimento[*qtd_recebimentos].valor_doc < 0 );

                    printf("Data da emissão(dia/mês/ano): ");
                    scanf("%i/%i/%i", &precebimento[*qtd_recebimentos].dia_recebimento,
                        &precebimento[*qtd_recebimentos].mes_recebimento, &precebimento[*qtd_recebimentos].ano_recebimento ); 

                    printf("Data de vencimento(dia/mês/ano): ");
                    scanf("%i/%i/%i", &precebimento[*qtd_recebimentos].dia_vencimento,
                        &precebimento[*qtd_recebimentos].mes_vencimento, &precebimento[*qtd_recebimentos].ano_vencimento); 

                    // Incrementa quantidade de cadastro
                    pcliente[i].qtd_cadastro++;

                    *qtd_recebimentos += 1;
            }
            else
                printf("Quantidade máxima de 3 recebimentos atingida.\n");
        }
    }
    else
        printf("Espaço insuficiente para novos recebimentos.\n"); 
}
int quantidade_dias(int dia_v, int mes_v, int ano_v, int dia_p, int mes_p, int ano_p){
    // Função para calcular a quantidade dias a data de vencimento e a data de
    // pagamento
        
    int dias=0;

    if( ano_p > ano_v ){

        if( mes_p > mes_v ){
            if( dia_p > dia_v ){
                dias += 360 * ( ano_p - ano_v );
                dias += 12 * ( mes_p - mes_v );
                dias += dia_p - dia_v;
            }
            else if( dia_p < dia_v ){
                dias += 360 * ( ano_p - ano_v );
                dias += 12 * ( mes_p - mes_v );
                dias -= dia_p - dia_v;
            }
            else{ // dia_p == dia_p
                dias += 360 * ( ano_p - ano_v );
                dias += 12 * ( mes_p - mes_v );
            }
        }
        else if( mes_p < mes_v ){
            if( dia_p > dia_v ){
                dias += 360 * ( ano_p - ano_v );
                dias -= 12 * ( mes_p - mes_v );
                dias += dia_p - dia_v;
            }
            else if( dia_p < dia_v ){
                dias += 360 * ( ano_p - ano_v );
                dias -= 12 * ( mes_p - mes_v );
                dias -= dia_p - dia_v;
            }
            else // dia_p == dia_p
                dias += 360 * ( ano_p - ano_v );
                dias -= 12 * ( mes_p - mes_v );
                dias -= dia_p - dia_v;
        }
        else{ // mes_p == mes_v

            if( dia_p > dia_v ){
                dias += 360 * ( ano_p - ano_v );
                dias += dia_p - dia_v;
            }
            else if( dia_p < dia_v ){
                dias += 360 * ( ano_p - ano_v );
                dias -= dia_p - dia_v;
            }
            else{ // dia_p == dia_p
                dias += 360 * ( ano_p - ano_v );
            }
        }
    } 
    else if( ano_p == ano_v ){

        if( mes_p > mes_v ){
            if( dia_p > dia_v ){
                dias += 12 * ( mes_p - mes_v );
                dias += dia_p - dia_v;
            }
            else if( dia_p < dia_v ){
                dias += 12 * ( mes_p - mes_v );
                dias -= dia_p - dia_v;
            }
            else{ // dia_p == dia_p
                dias += 12 * ( mes_p - mes_v );
            }
        }
        else if( mes_p < mes_v ){
            if( dia_p > dia_v ){
                dias += 12 * ( mes_p - mes_v );
                dias += dia_p - dia_v;
            }
            else if( dia_p < dia_v ){
                dias += 12 * ( mes_p - mes_v );
                dias -= dia_p - dia_v;
            }
            else{ // dia_p == dia_p
                dias += 12 * ( mes_p - mes_v );
            }
        }
        else// mes_p == mes_v 
            if( dia_p > dia_v ){
                dias += dia_p - dia_v;
            }
            else if( dia_p ==  dia_v ){
                dias = 0;
            }
    }
    
    return dias; 
}
void mostrar_recebimento( recebimentos_t precebimento[], cliente_t pcliente[], int tamanho_v,  int qtd_recebimentos){
    // Função para mostrar os recebimentos com data de vencimento dentro
    // de um período qualquer.
    
    int dia, mes, ano;
    int cod_cliente;
    int qtd_dias;
    int i;

    printf("Data de Vencimento(dia/mês/ano): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    // Procura pela data de vencimento
    for( i=0; i <= qtd_recebimentos; i++){
        if( (dia == precebimento[i].dia_vencimento) && 
                (mes == precebimento[i].mes_vencimento) && 
                    (ano == precebimento[i].ano_vencimento) ){

            cod_cliente = precebimento[i].cod_cliente;

            // Mostra os dados do recebimento
            printf("Número do Documento: %i\n", precebimento[i].num_doc);
            printf("Valor do Documento: %.2f\n", precebimento[i].valor_doc);
            printf("Data da Emissão: %i/%i/%i\n", precebimento[i].dia_recebimento, 
                    precebimento[i].mes_recebimento, precebimento[i].ano_recebimento);
            printf("Data do Vencimento: %i/%i/%i\n", precebimento[i].dia_vencimento, 
                    precebimento[i].mes_vencimento, precebimento[i].ano_vencimento);
            printf("Código do Cliente: %i\n", precebimento[i].cod_cliente);

            for( int j=0; j < tamanho_v; j++){
                if(pcliente[j].cod_cliente == cod_cliente ){
                    printf("Nome do Cliente: %s\n", pcliente[j].nome);
                    break;
                }
            }
            // Calculo do total de dias em atraso
            qtd_dias = quantidade_dias(precebimento[i].dia_vencimento, precebimento[i].mes_vencimento, precebimento[i].ano_vencimento, precebimento[i].dia_recebimento, precebimento[i].mes_recebimento, precebimento[i].ano_recebimento);

            printf("Quantidade de dias em atraso: %i\n", qtd_dias);
            break;
        }
    }

    if( i > qtd_recebimentos ){
        printf("Não existe recebimentos desta data.\n");
    }
}

void incluir_cliente( cliente_t pcliente[], int tamanho_v, int *qtd_cliente){
    // Função para incluir um cliente no cadastro
    
    int cod_cliente;
    int i;

    if( *qtd_cliente < tamanho_v ){

        printf("Código do Cliente: ");
        do{
            scanf("%i",&cod_cliente );
        }while( cod_cliente < 0);

        // Verifica se o código do cliente já foi cadastrado
        i=0;
        while( i < tamanho_v ){
            if( cod_cliente == pcliente[i].cod_cliente )
               break; 
            else
                i++;
        }

        if( i == tamanho_v ){
            // Cliente não cadastrado.
            
            pcliente[*qtd_cliente].cod_cliente = cod_cliente; 

            __fpurge(stdin); // Limpa o buffer do teclado
            
            printf("Nome do Cliente: ");
            fgets(pcliente[*qtd_cliente].nome, 20, stdin);

            printf("Endereço do Cliente: ");
            fgets(pcliente[*qtd_cliente].endereco, 20, stdin);

            printf("Telefone do Cliente: ");
            fgets(pcliente[*qtd_cliente].endereco, 20, stdin);

            *qtd_cliente += 1;
        }
        else{
            printf("Cliente já cadastrado.\n");
        }
    }
    else
        printf("Espaço insuficiente para novos clientes.\n");
}


void alterar_cliente( cliente_t pcliente[], int tamanho_v){
    // Programa para alterar cliente cadastrado
   
    int cod_cliente;
    int i;

    printf("Código do Cliente: ");
    do{
       scanf("%i", &cod_cliente);
    }while( cod_cliente < 0 );

    for( i=0; i < tamanho_v; i++){
        if( cod_cliente == pcliente[i].cod_cliente){
            printf("Novo Código do Cliente: ");
            do{
                scanf("%i", &pcliente[i].cod_cliente);
            }while( pcliente[i].cod_cliente < 0 );

            __fpurge(stdin); // Limpa o buffer do teclado

            printf("Novo Nome do Cliente: ");
            fgets(pcliente[i].nome, 20, stdin);

            printf("Novo Endereço do Cliente: ");
            fgets(pcliente[i].endereco, 20, stdin);

            printf("Novo Telefone do Cliente: ");
            fgets(pcliente[i].endereco, 20, stdin);

            break;
        }    
    }

    if( i == tamanho_v ){
        printf("Código do Cliente Inválido.\n");
    } 
}

#endif

