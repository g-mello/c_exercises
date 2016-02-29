#ifndef EXERC11_H_
#define EXERC11_H_

// System Includes
#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h> 

struct medicos{
    int cod_medico;
    char nome[20];
    char endereco[20];
    float salario;
};

struct pacientes{
    int cod_paciente;
    char nome[20];
    char endereco[20];
    int idade;
};

struct consultas{
    int num_prontuario;
    int dia_consulta;
    int mes_consulta;
    int ano_consulta;
    int cod_medico;
    int cod_paciente;
    char diagnostico[20];
};

typedef struct medicos medicos_t;
typedef struct pacientes pacientes_t;
typedef struct consultas consultas_t;

void init_medicos( medicos_t p[], int tamanho_v){
    // Função para inicializar os dados dos médicos
    
    for( int i=0; i < tamanho_v; i++){
        p[i].cod_medico = 0;
        strcpy(p[i].nome, "xxxxx");
        strcpy(p[i].endereco, "xxxxx");
        p[i].salario = 0.0;
    }
}

void init_pacientes( pacientes_t p[], int tamanho_v){
    // Função para inicializar os dados dos pacientes
    
    for( int i=0; i < tamanho_v; i++){
        p[i].cod_paciente= 0;
        strcpy(p[i].nome, "xxxxx");
        strcpy(p[i].endereco, "xxxxx");
        p[i].idade = 0;
    }
}

void init_consultas( consultas_t p[], int tamanho_v){
    // Função para inicializar os dados das consultas
    
    for( int i=0; i < tamanho_v; i++){
        p[i].num_prontuario = 0;
        p[i].dia_consulta = 0;
        p[i].mes_consulta = 0;
        p[i].ano_consulta = 0;
        p[i].cod_medico = 0;
        p[i].cod_paciente = 0;
        strcpy(p[i].diagnostico, "xxxxx");
    }
}

void incluir_medico( medicos_t p[], int tamanho_v, int *qtd_medicos){
    // Função para incluir um médico no cadastro

    if( *qtd_medicos < tamanho_v ){

        printf("Código do Médico: ");
        do{
           scanf("%i", &p[*qtd_medicos].cod_medico);
        }while( p[*qtd_medicos].cod_medico < 0 );

        // Limpar o buffer
        __fpurge(stdin);

        printf("Nome do Médico : ");
        fgets(p[*qtd_medicos].nome, 20, stdin);

        printf("Endereço do Médico : ");
        fgets(p[*qtd_medicos].endereco, 20, stdin);

        printf("Salário : ");
        do{
           scanf("%f", &p[*qtd_medicos].salario );
        }while( p[*qtd_medicos].salario < 0 );

        *qtd_medicos += 1;

    }
    else
        printf("Espaço insuficiente para novos médicos.\n");
}

void alterar_medico( medicos_t p[], int tamanho_v){
    // Função para alterar dos dados de um médico no cadastro
    
    int cod_medico; 
    int i,j;

    j=1;
    while( j == 1 ){

        printf("Código do Médico: ");
        do{
            scanf("%i", &cod_medico);
        }while( cod_medico < 0 );

        i=1; 
        while( i == 1 ){
            if( p[i].cod_medico == cod_medico ){
                break;
            }
            else
                i++;
        }

        if( i == tamanho_v ){
            printf("Código Inválido. Digite Novamente.\n");
        }
        else{
            // Leitura dos novos dados 
            printf("Código Atual: %i\n", p[i].cod_medico);
            printf("Novo Código: ");
            do{
                scanf("%i", &p[i].cod_medico);
            }while( p[i].cod_medico < 0 );

            printf("Nome Atual: %s\n", p[i].nome); 
            printf("Novo Nome: \n");
            fgets(p[i].nome,20,stdin);

            printf("Endereço Atual: %s\n",p[i].endereco);
            printf("Novo Endereço: \n");
            fgets(p[i].endereco,20,stdin);

            printf("Sálario Atual: %.2f\n", p[i].salario);
            printf("Novo Salário: \n");
            do{
                scanf("%f", &p[i].salario);
            }while( p[i].salario < 0 );
            
            j=0; // Termina o loop principal
        }
    }
}

void excluir_medico( medicos_t  p[], consultas_t pconsulta[], int tamanho_v, int *qtd_medicos){
    // Função para excluir um médico do cadastro
    int cod_medico; 
    int j; 


    printf("Código do Médico :");
    do{
        scanf("%i", &cod_medico);
    }while( cod_medico < 0 ); 

    // Procura se o código do médico existe e se já teve consultas
    j=0; 
    while( j < tamanho_v ){
            if( pconsulta[j].cod_medico == cod_medico && 
                    pconsulta[j].num_prontuario != 0 )
                    break;
        else{
            j++;
        }
    }

    if( j == tamanho_v ){
        // Médico encontrado e sem consulta realizada
        // Remover
        for( int i=j; i < *qtd_medicos; i++){

                // exclui médico
                p[i].cod_medico = p[i+1].cod_medico;
                memcpy(p[i].nome, p[i+1].nome, 20);
                memcpy(p[i].endereco, p[i+1].endereco, 20);
                p[i].salario = p[i+1].salario;
        } 

        // decrementa quantidade de médicos
        *qtd_medicos -= 1;

    }
    else{
        // Médico encontrado e com consulta marcada não
        // é possível removê-lo
        printf("Não é possível excluir o médico.\n");

    }
}

void incluir_paciente( pacientes_t p[], int tamanho_v, int *qtd_pacientes){
    // Função para incluir um paciente no cadastro
    
    if( *qtd_pacientes < tamanho_v ){

        printf("Código do Paciente: ");
        do{
            scanf("%i", &p[*qtd_pacientes].cod_paciente);
        }while( p[*qtd_pacientes].cod_paciente < 0 );

        // Limpar o buffer 
        __fpurge(stdin);

        printf("Nome do Paciente: ");
        fgets(p[*qtd_pacientes].nome, 20, stdin);

        printf("Endereço do Paciente: ");
        fgets(p[*qtd_pacientes].endereco, 20, stdin);

        printf("Idade do Paciente: ");
        do{
            scanf("%i", &p[*qtd_pacientes].idade );
        }while( p[*qtd_pacientes].idade < 0 );

        *qtd_pacientes += 1;

    }
    else
        printf("Espaço insuficiente para novos pacientes.\n");
}

void alterar_paciente( pacientes_t p[], int tamanho_v){
    // Função para alterar dos dados de um paciente no cadastro

    int cod_paciente;
    int i, j;

    i=1;
    while( i == 1 ){
        printf("Código do Paciente: ");
        do{
            scanf("%i", &cod_paciente);
        }while( cod_paciente < 0 );

        // Procura se o Código do Paciente existe 
        j=0;
        while( j < tamanho_v ){
            if( p[j].cod_paciente == cod_paciente )
                break;
            else
                j++;
        }

        if( j == tamanho_v )
            // Código do paciente não encontrado
            printf("Código inválido, digite novamente.\n");
        else{
            // Código encontrado, altera o paciente
            
            printf("Novo Código do Paciente: ");
            do{
                scanf("%i", &p[j].cod_paciente);
            }while( p[j].cod_paciente < 0 );

            //Limpar o buffer
            __fpurge(stdin);

            printf("Novo Nome do Paciente: ");
            fgets(p[j].nome, 20, stdin);

            printf("Novo Endereço do Paciente: ");
            fgets(p[j].endereco, 20, stdin);

            printf("Nova Idade do Paciente: ");
            do{
                scanf("%i", &p[j].idade);
            }while( p[j].idade < 0 );

            // Termina o loop principal
            i=0; 
        }
    }
}

void incluir_consulta( consultas_t p[], int tamanho_v, int *qtd_consultas ){
    // Função para incluir uma consulta

    if( *qtd_consultas < tamanho_v ){

        printf("Numero do Prontuário: ");
        do{
            scanf("%i", &p[*qtd_consultas].num_prontuario);
        }while( p[*qtd_consultas].num_prontuario < 0 );

        printf("Data da Consulta(dia/mês/ano): ");
        scanf("%i/%i/%i", &p[*qtd_consultas].dia_consulta, 
             &p[*qtd_consultas].mes_consulta, &p[*qtd_consultas].ano_consulta);

        // Limpar o buffer
        __fpurge(stdin);

        printf("Diagnostico: ");
        fgets(p[*qtd_consultas].diagnostico, 20, stdin);

        printf("Código do Médico: ");
        do{
            scanf("%i", &p[*qtd_consultas].cod_medico);
        }while( p[*qtd_consultas].cod_medico < 0 );

        printf("Código do Paciente: ");
        do{
            scanf("%i", &p[*qtd_consultas].cod_paciente);
        }while( p[*qtd_consultas].cod_paciente < 0 );

        *qtd_consultas += 1;
    }
    else
        printf("Espaço insuficiente para novas consultas.\n");
}


void mostrar_consultas( consultas_t p[], int *qtd_consultas){
    // Função para mostrar as consultas em uma data determinada 
    // pelo usuário
 
    int dia, mes, ano;
    printf("Data das consultas (dia/mês/ano): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    for( int i=0; i < *qtd_consultas; i++){
        if( p[i].dia_consulta == dia && p[i].mes_consulta == mes &&
                p[i].ano_consulta == ano ){

            // Mostra os dados das consultas
            printf("%i.\n", i+1);
            printf("Número do Prontuário: %i\n", p[i].num_prontuario);
            printf("Data da Consulta: \n");
            printf("%i/%i/%i\n", p[i].dia_consulta, p[i].mes_consulta, p[i].ano_consulta);
            printf("Diagnostico: %s\n", p[i].diagnostico );
            printf("Código do Médico: %i\n", p[i].cod_medico);
            printf("Código do Paciente: %i\n", p[i].cod_paciente);

        }
    }
}

#endif

