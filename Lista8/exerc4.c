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

#include "exerc4.h"

int main(void){

    const int tamanho_v = 2;
    dados_t habitantes[tamanho_v-1];
   
    // inicializa a struct 
    init(habitantes, tamanho_v); 

    // leitura dos dados
    ler(habitantes, tamanho_v); 


    printf("Media salarial: %.2f\n", media_salarial(habitantes, tamanho_v)); 
    printf("Maior idade: %i\n", maior_idade(habitantes, tamanho_v));
    printf("Menor idade: %i\n", menor_idade(habitantes, tamanho_v));
    printf("Quantidade de mulheres: %i\n", qtd_mulheres(habitantes, tamanho_v));

	return 0;

}


