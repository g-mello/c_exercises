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
#include "exerc8.h"

int main(void){

    const int tamanho_v = 4;
    dados_t acidentes[tamanho_v];
    int total_carros=0;
    int total_acidentes=0;

    // inicializa dos dados 
    init( acidentes, tamanho_v);

    // Ler os dados sobre os acidentes
    ler_dados( acidentes, tamanho_v);

    //Estado com o maior número de acidentes
    printf("Estado com o maior número de acidentes : ");
    maior_n_acidentes( acidentes, tamanho_v);

    //Estado com o menor número de acidentes
    printf("Estado com o menor número de acidentes : ");
    menor_n_acidentes( acidentes, tamanho_v);

    // Porcentual de carros em cada estado
    printf("\n\nPorcentual de carros em cada estado: ");
    total_carros = total_n_carros( acidentes, tamanho_v);
    porcentual_carros( acidentes, tamanho_v, total_carros);

    // Media de acidentes em cada estado
    printf("\n\nMedia de acidentes em cada estado: ");
    total_acidentes = total_n_acidentes( acidentes, tamanho_v);
    media_acidentes( acidentes, tamanho_v, total_acidentes);

	return 0;

}


