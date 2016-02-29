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
#define TAMANHO 5

int main(void){

    int v1[TAMANHO-1];
    int v2[TAMANHO-1];
    int acumulador=0;

    // Entrada de dados
    for (int i = 0; i < TAMANHO; ++i){
       printf("v1[%i]= ", i);
       scanf("%i", &v1[i]); 
    }

    for (int i = 0; i < TAMANHO; ++i){
       printf("v2[%i]= ", i);
       scanf("%i", &v2[i]); 
    }

    // Calculo
    for (int i = 0; i < TAMANHO; ++i)
       acumulador += v1[i] - v2[ (TAMANHO-1) - i]; 
   
     printf("\nAcumulador: %i", acumulador); 
    
	return 0;

}


