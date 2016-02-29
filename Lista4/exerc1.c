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
#define SIZE 6

int main(void){

    int num[SIZE - 1];

    int par[SIZE - 1];
    int impar[SIZE - 1];

    int j=0,k=0; // j - contador par, k - contador impar 

    printf("Digite 6 numeros: \n");
    for( int i=0; i < SIZE; i++){
        scanf("%i", &num[i]);
    }

   for( int i=0; i < SIZE; i++ ) {

       if( num[i] % 2 == 0 ){
           par[j] = num[i];
           j++;
       }
      else{ //impares
           impar[k] = num[i];
           k++;
       }
   } 

    printf("Quantidade de pares: %d\n", j);
    printf("Pares: ");
    for( int i=0; i < j; i++)
        printf("%d, ", par[i] );

    printf("\nQuantidade de impares: %d\n", k);
    printf("Impares: ");
    for( int i=0; i < k; i++)
        printf("%d, ", impar[i] );

    
	return 0;

}



















