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

    float numeros[TAMANHO-1];
    int maior;

    // Entrada de Dados
    for (int i = 0; i < TAMANHO; ++i){
        printf("numeros[%i]= ",i);
        scanf("%f", &numeros[i] );
    }

    // Calcular o maior
    maior=numeros[0];
    for( int i=1; i < TAMANHO; i++){
        if( numeros[i] > maior )
            maior=numeros[i];
    }

    // Dividir cada um valor do vetor  pelo maior
    for (int i = 0; i < TAMANHO; ++i){
       numeros[i] = numeros[i]/maior; 
    }

    // Mostrar o vetor apos o calculo
    printf("\nVetor: ");
    for (int i = 0; i < TAMANHO; ++i)
        printf("%.2f ", numeros[i]);

	return 0;

}


