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
#include "exerc7.h"

int main(void){

    int i=1;
    int escolha;
    const int tamanho_v = 5;

    cliente_t clientes[tamanho_v];
    int qtd_clientes=0;

    conta_t contas[tamanho_v];
    int qtd_contas=0;

    // Inicializa clientes
    init_clientes( clientes, tamanho_v);

    // Inicializa contas
    init_contas( contas, tamanho_v);

    // Menu
    while( i == 1 ){
        printf("================MENU===========\n");
        printf("1. Incluir Cliente. \n");
        printf("2. Incluir Conta. \n");
        printf("3. Remover Cliente. \n");
        printf("4. Sair. \n");
        printf(">>>> ");
        scanf("%d", &escolha );

        switch(escolha){

            case 1:
                incluir_cliente( clientes, tamanho_v, &qtd_clientes);
                system("clear");
                break;

            case 2:
                incluir_conta( contas, clientes, tamanho_v, &qtd_contas);
                system("clear");
                break;

            case 3:
                remover_cliente( clientes, contas, tamanho_v, &qtd_clientes);
                system("clear");
                break;

            case 4:
                i = 0; // Sair do Menu
                break;

            default:
                system("clear");
                printf("Valor inválido.\n");

        }
    }

	return 0;

}


