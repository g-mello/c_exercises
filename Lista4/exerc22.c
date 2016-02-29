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

    int v1[TAMANHO-1];
    int B[TAMANHO-1];
    int k=0; // contador de indices do vetor B

    // Entrada de Dados
    for (int i = 0; i < TAMANHO; ++i){
       printf("v1[%i]= ",i); 
       scanf("%i", &v1[i] ); 
    }

    // Calculo do Vetor B
    for (int i = 0; i < TAMANHO; ++i){
       
       if( v1[i] > 0 ){
           B[k]= v1[i]; 
           k++;
       } 

    }

    // Mostrar vetor v1
    printf("V1: ");
    for (int i = 0; i < TAMANHO; ++i)
        printf("%i ", v1[i]); 
    
    printf("\nB: ");
    for (int i = 0; i < k; ++i)
        printf("%i ", B[i]); 

	return 0;

}


