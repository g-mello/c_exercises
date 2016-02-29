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

// Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a
// tabela verifique e mostre qual grupo de risto essa pessoa se encaixa

#include<stdio.h>

int main(void){
    
    int idade; 
    float peso;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Peso: ");
    scanf("%f", &peso );

    if ( idade < 20 ) {
        if ( peso <= 60 )
            printf("Grupo de Risco 9\n");

            else if ( peso > 60 && peso <= 90)
                printf("Grupo de Risco 8\n");

        else // acima de 90
           printf("Grupo de Risco 7\n");
    }


    if ( idade >= 20 && idade <= 50 ){
        if ( peso <= 60 )
           printf("Grupo de Risco 6\n");

            else if ( peso > 60 && peso <= 90)
                printf("Grupo de Risco 5\n");

        else // acima de 90
           printf("Grupo de Risco 4\n");
    }


    if ( idade > 50 ) {
        if ( peso <= 60 )
           printf("Grupo de Risco 2\n");

            else if ( peso > 60 && peso <= 90)
                printf("Grupo de Risco 2\n");

        else // acima de 90
        printf("Grupo de Risco 1\n");
    }


	return 0;

}


