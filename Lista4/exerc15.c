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
#define TAMANHO 8

int main(void){

    char clientes[TAMANHO-1][20];
    int dvd_locados[TAMANHO-1];
    int locacoes_gratis[TAMANHO-1];

    for( int i=0; i < TAMANHO; i++){
        printf("%i. Nome do Cliente: ", i+1);
        scanf("%s", &clientes[i] );
        printf("%i. DVD Locados : ", i+1);
        scanf("%i", &dvd_locados[i] );
    }

    for( int i=0; i < TAMANHO; i++){
        locacoes_gratis[i]=0;

        if ( dvd_locados[i] >= 10 )
            locacoes_gratis[i] = dvd_locados[i]/10;

    }

    printf("%-10s\t%-10s\t%-10s\n", "Cliente", "DVDs Locados", "Locações Grátis");
    for( int i=0; i < TAMANHO; i++)
        printf("%-10s\t%-10i\t%-10i\n", clientes[i], dvd_locados[i], locacoes_gratis[i]);
    


	return 0;

}


