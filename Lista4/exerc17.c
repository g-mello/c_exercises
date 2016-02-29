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

    int v1[ TAMANHO - 1];
    int v2[ TAMANHO - 1];
    int resultante[ 2*(TAMANHO - 1) ];
    int aux=0, j=0;

    // V1
    for( int i=0; i < TAMANHO; i++){
        printf("Vetor1[%i]: ",i);
        scanf("%i", &v1[i] );
    }

    printf("\n");

    // V2
    for( int i=0; i < TAMANHO; i++){
        printf("Vetor2[%i]: ",i);
        scanf("%i", &v2[i] );
    }


    // Resultante 
    for( int i=0; i < 2*TAMANHO; i++){
        if( i < 10 )
            resultante[i] = v1[i];
        else // >=10
            resultante[i] = v2[ i - 10 ];
    }

    printf("Resultante não ordenado: ");
    for (int i = 0; i < 2*TAMANHO; ++i){
       printf("%i ", resultante[i]); 
    }


    // Insertion Sort
    for( int i=1; i < 2*TAMANHO; i++){
        aux=resultante[i];
        j = i-1;

        while( j >= 0 && aux < resultante[j] ){
            resultante[j+1] = resultante[j];
            j--; 
        } 
        resultante[j+1] = aux;
    }

    printf("\nResultante ordenado: ");
    for( int i = (2*TAMANHO) - 1; i >= 0; i--){
       printf("%i ", resultante[i] ); 
    }

	return 0;
        
}


