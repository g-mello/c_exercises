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
#define TAMANHO 15

int main(void){

    int v1[TAMANHO-1];
    int maior, maior_pos;
    int menor, menor_pos;

    // Entrada de dados
    for( int i = 0; i < TAMANHO; i++ ){
        printf("%i. Número: ", i);
        scanf("%d", &v1[i]);
    }

    maior=v1[0];
    maior_pos=0;
    menor=v1[0];
    menor_pos=0;

    for( int i=1; i < TAMANHO; i++){

        if( v1[i] > maior ){
            maior=v1[i];
            maior_pos=i;
        }
        else if( v1[i] < menor ){
            menor=v1[i];
            menor_pos=i;
        }
    }

    printf("\n\nMaior Número: %i\n", maior);
    printf("Posição Maior Número: %i\n", maior_pos);
    printf("Menor Número: %i\n", menor);
    printf("Posição Maior Número: %i\n", menor_pos);

	return 0;

}


