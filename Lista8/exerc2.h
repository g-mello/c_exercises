//Custom User Header

#ifndef EXERC2_H_
#define EXERC2_H_
// System Includes
#include<stdio.h>

struct dados{
    float salario;
    int idade;
    int n_filhos;
    char sexo;
};
typedef struct dados dados_t;

void init( dados_t p[], int tamanho_v){
    // função para inicializar a struct
    
    for(int i=0; i < tamanho_v; i++){
        p[i].salario = 0;
        p[i].idade = 0;
        p[i].n_filhos = 0;
        p[i].sexo = 'X';
    }
}

void ler_dados( dados_t p[], int tamanho_v){
    // função para ler os dados dos habitantes 

    for( int i =0; i < tamanho_v; i++){

        printf("%i. Salario: ", i+1);
        do{
            scanf("%f", &p[i].salario);
        }while( p[i].salario < 0 );

        printf("%i. Idade: ", i+1);
        do{
            scanf("%i", &p[i].idade);
        }while( p[i].idade < 0 );

        printf("%i. Número de filhos: ", i+1);
        do{
            scanf("%i", &p[i].n_filhos);
        }while( p[i].n_filhos< 0 );

        printf("%i. Sexo(M ou F): ", i+1);
        do{
            scanf("%c", &p[i].sexo);
        }while( p[i].sexo != 'M' && p[i].sexo != 'F' );

        
    }
}

void media_salario( dados_t p[], int tamanho_v){
    // função para calcular a media de salario da população
    
    float total=0;
    for( int i = 0; i < tamanho_v; i++){
        total += p[i].salario;
    }

    if( total == 0 )
        printf("Média salário: R$ %i\n", 0);
    else 
        printf("Média salário: R$ %.2f\n", total/tamanho_v);
}

void media_filhos( dados_t p[], int tamanho_v){
    // função para calcular a media de salario da população
    
    int total=0;
    for( int i = 0; i < tamanho_v; i++){
        total += p[i].n_filhos;
    }

    if( total == 0 )
        printf("Média de filhos : %i \n", 0);
    else
        printf("Média de filhos : %.2f \n", (1.0*total)/tamanho_v);
}

void maior_salario( dados_t p[], int tamanho_v){
    // função para calcular o maior salario
    
    float maior_salario;

    maior_salario = p[0].salario;

    for( int i=0; i < tamanho_v; i++){
        if( p[i].salario > maior_salario ) {
            maior_salario = p[i].salario;
        }
    }

    printf("Maior salário: R$ %.2f\n", maior_salario);
}

void porcentual_m_sal_1000( dados_t p[], int tamanho_v){
    // Função para calcular a porcentagem de com sálario acima de R$ 1000
    
   int  total_mulheres=0;
   int qtd_mulheres_salario=0;

    for(int i=0; i < tamanho_v; i++){
        if( p[i].sexo == 'F' ){
            total_mulheres++;
        }
    }

    for(int i=0; i < tamanho_v; i++){
        if( p[i].sexo == 'F' && p[i].salario > 1000 ){
            qtd_mulheres_salario++;
        }
    }

    if( total_mulheres == 0 || qtd_mulheres_salario == 0 )
        printf("Porcentual de mulheres com salário acima de R$ 1000: %i %c\n", 0,'%');
    else
        printf("Porcentual de mulheres com salário acima de R$ 1000: %.2f %c\n", 100* (qtd_mulheres_salario*1.0)/total_mulheres,'%');
}

#endif

