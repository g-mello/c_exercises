
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

//Write Here The Project Description
#include<stdio.h>
#include "sala.h"

int main(void){
    
    const int tamanho_v=50;
    dados_t sites[tamanho_v];
    int qtd_cadastro;
    int opcao; 
    int i=1;

    init(sites, tamanho_v);
    qtd_cadastro=0;

    while( i == 1 ){
        printf("======== MENU ===========\n");
        printf("1. Cadastra um site. \n");
        printf("2. Consulta todos os sites. \n");
        printf("3. Remove um site pela url. \n");
        printf("4. Atualiza um site pela url. \n");
        printf("5. Sair. \n");
        printf(">> ");
        scanf("%i", &opcao);

        switch(opcao) {

            case 1:
                cadastra(sites, tamanho_v, &qtd_cadastro); 
                break;

            case 2:
                consulta( sites, &qtd_cadastro);
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                i = 0;
                break;

            //default:
                
            }
    }

	return 0;

}


