
#ifndef EXERC3_H_
#define EXERC3_H_

#include<ctype.h>
#include<stdlib.h>

struct dados{ 
    char sexo;
    float altura;
    int idade; 
    char cor_olhos;
};
typedef struct dados dados_t;


void init( dados_t p[], int tamanho_v){
    // Função para inicializar a struct 
   
    for(int i=0; i < tamanho_v; i++){

        p[i].sexo = 'X';
        p[i].altura = 0;
        p[i].idade = 0;
        p[i].cor_olhos = 'X';
    } 
}

void cadastra( dados_t p[], int tamanho_v){
      // Função para cadastrar os habitantes

      for( int i=0; i < tamanho_v; i++){

          printf("%i. Sexo(M ou F): ", i+1);
          do{
            scanf("%c", &p[i].sexo);
            p[i].sexo = toupper(p[i].sexo);
          }while( p[i].sexo != 'M' && p[i].sexo != 'F' );

          printf("%i. Altura: ", i+1);
          do{
              scanf("%f", &p[i].altura);
          }while( p[i].altura < 0 );

          printf("%i. Idade: ", i+1);
          do{
              scanf("%i", &p[i].idade);
          }while( p[i].idade < 0 );

          printf("%i. Cor dos olhos( A-Azul, C-Castanho, V-Verde) : ", i+1);
          do{
            scanf("\n%c", &p[i].cor_olhos);
            p[i].cor_olhos = toupper(p[i].cor_olhos);
          }while( p[i].cor_olhos != 'A' && p[i].cor_olhos != 'C' && p[i].cor_olhos != 'V'  );

          system("clear");

      }
}

float media_idade( dados_t p[], int tamanho_v){
    // função para calcula a media das idades das pessoas com olhos castanhos
    // e altura superior a 1,60
    int qtd=0;
    float media_idades=0;

    for( int i=0; i < tamanho_v; i++){
        if( p[i].cor_olhos == 'C' && p[i].altura > 1.6 ){
            qtd++;
            media_idades += p[i].idade;
        }
    }
    media_idades = media_idades/qtd;

     return (qtd == 0)  ? 0 : media_idades;    
}

int maior_idade( dados_t p[], int tamanho_v){
    // Função para calcular a maior idade 
    int maior_idade;

    maior_idade = p[0].idade;
    for(int i=0; i < tamanho_v; i++){
        if( p[i].idade > maior_idade ){
            maior_idade = p[i].idade;
        }
    }
    return maior_idade;
}

int qtd_feminino( dados_t p[], int tamanho_v){
    // Função para calcular a quantidade de individuos do sexo feminino
    // com idade entre 20 e 45 com os olhos verdes e altura inferior a 1.7m 
    int quantidade=0;

    for(int i=0; i < tamanho_v; i++){
        if( p[i].sexo == 'M' && p[i].idade > 20 && p[i].idade <= 45 && p[i].cor_olhos && p[i].altura < 1.7 ){
            quantidade++;
        }
    }

    return quantidade;
}

int percentual_homens( dados_t p[], int tamanho_v){
    // Função para calcular o percentual de homens
    
    int qtd_homens=0;

    for( int i=0; i < tamanho_v; i++){
        if( p[i].sexo == 'M' ) 
            qtd_homens++;
    }
    
    if( qtd_homens > 0 )
        return 100*((qtd_homens*1.0)/tamanho_v);
    else
        return 0;

}

#endif

