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
#include "exerc3.h"
#include<stdlib.h>

int main(void){

    const int tamanho_v = 2;
    dados_t habitantes[tamanho_v-1];

    init(habitantes, tamanho_v);
    cadastra( habitantes, tamanho_v);

    printf("A media das idades : %2.f\n", media_idade( habitantes, tamanho_v));
    printf("A maior idade: %i\n", maior_idade( habitantes, tamanho_v));
    printf("Item C: %i\n", qtd_feminino(habitantes, tamanho_v));
    printf("Percentual de homens: %i %c\n", percentual_homens( habitantes, tamanho_v), '%');


	return 0;

}



















