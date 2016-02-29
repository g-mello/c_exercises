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

//Write Here The Project Description
#include<stdio.h>
#include "exerc12.h"
#include<stdlib.h>
#include<ctype.h>

int main(void){

    const int tamanho_v=5;
    int controle;
    int i;
    int escolha;
    char c;

    cliente_t clientes[tamanho_v];
    int qtd_clientes=0;

    recebimentos_t recebimentos[tamanho_v];
    int qtd_recebimentos=0;

    // Inicializa as structs
    init_clientes(clientes, tamanho_v);
    init_recebimentos(recebimentos, tamanho_v);


    i=1;
    while( i == 1 ){
        printf("1. Incluir Cliente.\n");
        printf("2. Alterar Cliente.\n");
        printf("3. Incluir Recebimento.\n");
        printf("4. Mostrar Recebimento.\n");
        printf("5. Sair.\n");
        printf(">>> ");
        do{
            scanf("%i", &escolha );
        }while(escolha < 0 );

            switch (escolha) {
                case 1:
                    incluir_cliente(clientes, tamanho_v, &qtd_clientes);
                    controle = 1;
                    while( controle == 1){

                        printf("Deseja Continuar(S-Sim N-Não): ");
                        do{
                            scanf("%c", &c);
                            c = toupper(c);
                        }while( c != 'S' && c != 'N' );

                        if( c == 'S' ) 
                            controle = 0;
                        else{
                            controle = 0;
                            i = 0;
                        }
                    }
                    system("clear"); 
                    break;
                case 2:
                    alterar_cliente(clientes, tamanho_v);
                    controle = 1;
                    while( controle == 1){

                        printf("Deseja Continuar(S-Sim N-Não): ");
                        do{
                            scanf("%c", &c);
                            c = toupper(c);
                        }while( c != 'S' && c != 'N' );

                        if( c == 'S' ) 
                            controle = 0;
                        else{
                            controle = 0;
                            i = 0;
                        }
                    }
                    system("clear"); 
                    break;
                case 3:
                    incluir_recebimento(recebimentos, clientes, tamanho_v, &qtd_recebimentos);
                    controle = 1;
                    while( controle == 1){

                        printf("Deseja Continuar(S-Sim N-Não): ");
                        do{
                            scanf("%c", &c);
                            c = toupper(c);
                        }while( c != 'S' && c != 'N' );

                        if( c == 'S' ) 
                            controle = 0;
                        else{
                            controle = 0;
                            i = 0;
                        }
                    }
                    system("clear");
                    break;
                case 4:
                    mostrar_recebimento(recebimentos, clientes, tamanho_v, qtd_recebimentos);
                    controle = 1;
                    while( controle == 1){

                        printf("Deseja Continuar(S-Sim N-Não): ");
                        do{
                            scanf("%c", &c);
                            c = toupper(c);
                        }while( c != 'S' && c != 'N' );

                        if( c == 'S' ) 
                            controle = 0;
                        else{
                            controle = 0;
                            i = 0;
                        }
                    }
                    system("clear");
                    break;
                case 5:
                    i = 0; // Encerra o Menu
                    break;
                default:
                    printf("Código Inválido.\n");
                    controle = 1;
                    while( controle == 1){

                        printf("Deseja Continuar(S-Sim N-Não): ");
                        do{
                            scanf("%c", &c);
                            c = toupper(c);
                        }while( c != 'S' && c != 'N' );

                        if( c == 'S' ) 
                            controle = 0;
                        else{
                            controle = 0;
                            i = 0;
                        }
                    }
                    system("clear");
            }
    }

	return 0;

}




















