/*
Copyright (C) 2015 copyright holder

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include "exerc5.h"
#include<ctype.h>

int main(void){

    const int tamanho_v = 1;
    dados_t produtos[tamanho_v]; 
    int opcao;
    int i;
    char continuar;

    // Inicializa a struct produtos 
    init(produtos, tamanho_v);
    
    i = 0;
    while( i == 0 ){
        // Menu
        printf("==================Menu==========================\n\n");
        printf("1. Cadastrar Produtos\n");
        printf("2. Alterar Descrição, Valor Unitário e Quantidade em Estoque\n");
        printf("3. Mostrar produto \n");
        printf("\nOpção: ");
        scanf("%i", &opcao );

        switch (opcao) {

            case 1:
                ler(produtos, tamanho_v);
                system("clear");
                break;

            case  2:
                alterar( produtos, tamanho_v);
                ordenar( produtos, tamanho_v);

                while(1){
                    printf("\n\nContinuar ? ( S ou N ): ");
                    do{
                        scanf("%c", &continuar );
                        continuar = toupper( continuar );
                    }while( continuar != 'S' && continuar != 'N' );

                    if( continuar == 'S' )
                        break;
                    else{
                        i=1; // finaliza o programa
                        break;
                    }
                }

                system("clear");
                break;

            case 3:
                mostrar( produtos, tamanho_v );

                while(1){

                    printf("\n\nContinuar ? ( S ou N ): ");
                    do{
                        scanf("%c", &continuar );
                        continuar = toupper( continuar );
                    }while( continuar != 'S' && continuar != 'N' );

                    if( continuar == 'S' )
                        break;
                    else{
                        i=1; // finaliza o programa
                        break;
                    }
                }

                system("clear");
                break;

            default:
                printf("Opção Inválida.\n");

                while(1){
                    printf("\n\nContinuar ? ( S ou N ): ");
                    do{
                        scanf("%c", &continuar );
                        continuar = toupper( continuar );
                    }while( continuar != 'S' && continuar != 'N' );

                    if( continuar == 'S' )
                        break;
                    else{
                        i=1; // finaliza o programa
                        break;
                    }
                }

                system("clear");
                break;

        }
    }


	return 0;

}


