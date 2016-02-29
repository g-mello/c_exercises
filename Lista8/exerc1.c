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

#include<stdio.h>
#include<stdlib.h>
#include "exerc1.h"
#include<ctype.h>

int main(void){

   const int tamanho_v=4;
   dados_t vendedores[tamanho_v]; 
   int qtd_vendedores=0;
   
   init_vendedores(vendedores, tamanho_v);
   
   int escolha;
   int controle;
   char c;
   int i = 1;

    while( i == 1 ){

        // Menu
        printf("==============Menu===========\n\n");
        printf("1. Cadastrar Vendedor \n");
        printf("2. Cadastrar Venda \n");
        printf("3. Consultar as vendas de um funcionário em determinado mês \n");
        printf("4. Consultar o total de vendas de determinado vendedor \n");
        printf("5. Mostrar vendedor que mais vendeu em determinado mês \n");
        printf("6. Mostrar o número do mês com mais vendas \n");
        printf("7. Finalizar o programa \n");

        printf("\nDigite sua escolha: ");
        scanf("%i",&escolha); 

    switch( escolha ) {

        case 1:
                    cadastrar_vendedor(vendedores, tamanho_v, &qtd_vendedores );
                    controle=1;
                    while( controle == 1 ){
                        printf("Continuar ? (S-Sim ou N-Não ): "); 
                        do{
                            scanf("%c", &c );
                            c = toupper(c);
                        }while( c != 'S' && c != 'N');

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
                    cadastrar_venda(vendedores, tamanho_v);
                    controle=1;
                    while( controle == 1 ){
                        printf("Continuar ? (S-Sim ou N-Não ): "); 
                        do{
                            scanf("%c", &c );
                            c = toupper(c);
                        }while( c != 'S' && c != 'N');

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
                    consultar_vendas( vendedores, qtd_vendedores );
                    controle=1;
                    while( controle == 1 ){
                        printf("Continuar ? (S-Sim ou N-Não ): "); 
                        do{
                            scanf("%c", &c );
                            c = toupper(c);
                        }while( c != 'S' && c != 'N');

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
                    total_vendas( vendedores, tamanho_v);
                    controle=1;
                    while( controle == 1 ){
                        printf("Continuar ? (S-Sim ou N-Não ): "); 
                        do{
                            scanf("%c", &c );
                            c = toupper(c);
                        }while( c != 'S' && c != 'N');

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
                    maior_vendas_vendedor( vendedores, tamanho_v);
                    controle=1;
                    while( controle == 1 ){
                        printf("Continuar ? (S-Sim ou N-Não ): "); 
                        do{
                            scanf("%c", &c );
                            c = toupper(c);
                        }while( c != 'S' && c != 'N');

                        if( c == 'S' )
                            controle = 0;
                        else{
                            controle = 0;
                            i = 0;
                        }

                    }
                    system("clear");
                    break;
        case 6:
                    maior_venda_mes( vendedores, tamanho_v);
                    controle=1;
                    while( controle == 1 ){
                        printf("Continuar ? (S-Sim ou N-Não ): "); 
                        do{
                            scanf("%c", &c );
                            c = toupper(c);
                        }while( c != 'S' && c != 'N');

                        if( c == 'S' )
                            controle = 0;
                        else{
                            controle = 0;
                            i = 0;
                        }

                    }
                    system("clear");
                    break;
        case 7:
                    i = 0;
                    break;
        default:
                    printf("Opção Inválida.\n");
                    controle=1;
                    while( controle == 1 ){
                        printf("Continuar ? (S-Sim ou N-Não ): "); 
                        do{
                            scanf("%c", &c );
                            c = toupper(c);
                        }while( c != 'S' && c != 'N');

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


