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
#include "exerc2.h"

int main(void){

    const int tamanho_v=1;
    dados_t habitantes[tamanho_v - 1];

    // inicaliza a struct 
    init( habitantes, tamanho_v);

    // leitura dos dados 
    ler_dados( habitantes, tamanho_v);

    // Calculos 
    media_salario( habitantes, tamanho_v);
    media_filhos( habitantes, tamanho_v);
    maior_salario( habitantes, tamanho_v);
    porcentual_m_sal_1000( habitantes, tamanho_v);

	return 0;

}
