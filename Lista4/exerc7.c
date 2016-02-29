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
#define TAMANHO 10
int main(void){

    float numeros[TAMANHO-1];
    int negativos=0;
    float soma_positivos=0;

    printf("Digite 10 numeros: \n");
    for( int i=0; i < TAMANHO; i++)
        scanf("%f", &numeros[i] );

    for( int i=0; i < TAMANHO; i++){

        if( numeros[i] < 0 )
            negativos++;
        else
            soma_positivos += numeros[i];
    }

    printf("Qtd Negativos: %d\n", negativos);
    printf("Soma Positivos: %.2f\n", soma_positivos);

	return 0;

}


