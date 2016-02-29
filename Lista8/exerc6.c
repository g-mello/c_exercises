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

#include "exerc6.h"

int main(void){

    const int tamanho_v=5;
    conta_bancaria_t clientes[tamanho_v];
    int qtd_contas=0;
    int escolha;
    char c;
    int i=0;

    // inicializa a struct 
    init(clientes, tamanho_v);

    while( i == 0 ) {
            printf("================MENU=================\n\n");
            printf("1. Cadastrar/Alterar Conta.\n");
            printf("2. Mostrar Contas.\n");
            printf("3. Finalizar. \n");
            printf("Escolha: ");
            scanf("%i", &escolha);

            switch( escolha ){

                case 1: 
                        // cadastra os clientes
                        system("clear");
                        cadastrar(clientes, tamanho_v, &qtd_contas);
                        //qtd_contas = qtd_cadastros( clientes, tamanho_v); 

                        system("clear");
                        break;

                case 2: 
                        // mostra os clientes
                        if( qtd_contas == 0 ){
                            system("clear");
                            printf("Nenhuma conta bancária cadastrada ainda. \n");
                        }
                        else{
                            system("clear");
                             mostrar_contas(clientes, &qtd_contas);
                        }

                        printf("Deseja continuar ? \n");
                        printf("S-Sim ou N-Não: ");
                        do{ 
                            scanf("\n%c", &c);
                            c= toupper(c);
                        }while( c != 'S' && c != 'N');

                        if( c == 'N') 
                            i = 1;

                        system("clear");
                        break;

                case 3:
                        // Finaliza menu
                        i = 1; 
                    break;

                default:
                        printf("Opção Inválida.\n");

                        printf("Deseja continuar ? \n");
                        printf("S-Sim ou N-Não: ");
                        do{ 
                            scanf("\n%c", &c);
                            c= toupper(c);
                        }while( c != 'S' && c != 'N');

                        if( c == 'N') 
                            i = 1;

                        system("clear");
                        break;
            }
    }

	return 0;

}








