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

   int numeros[ TAMANHO - 1]; 
   int posicoes[ TAMANHO -1]; 
   int k=0;

   // input
   printf("Digite 15 números: \n");
   for( int i=0; i < TAMANHO; i++){
       printf("%d: ", i);
       scanf("%d", &numeros[i] );

   }

   // Calcula as posições de 30
   for( int i=0; i < TAMANHO; i++){
       if( numeros[i] == 30 ){
           posicoes[k] = i;
           k++;
       }
   }

   // Mostra as posições de 30
   printf("Posições de 30: ");
   for( int i=0; i < k; i++)
       printf("%d, ", posicoes[i]);

	return 0;

}


