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

int main(void){

    int idade;
    float altura;
    int total_pessoas50=0;
    int total_altura50=0;

    for( ; ; ){

        printf("Idade ( Digite 0 para terminar ): ");
        scanf("%d", &idade );
        printf("Altura: ");
        scanf("%f", &altura);

        if( idade <= 0 )
             break;
        
        if( idade < 0 ){
            printf("Erro: Altura Inválida\n");
            continue;
        }

        if( idade >= 50 ){
            total_altura50 = total_altura50 + altura;
            total_pessoas50++;
        }


    }
    printf("Média das Alturas para idade > 50 %.2f\n", (1.0 * total_altura50)/total_pessoas50); 


	return 0;

}


