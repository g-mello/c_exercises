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

    int n[9];
    int resultante1[9];
    int k=0;
    int resultante2[9];
    int t=0;

    printf("Digite 10 numeros: \n");
    for( int i=0; i < 10; i++)
        scanf("%i", &n[i] );

    for( int i=0; i < 10; i++){

        if( n[i] % 2 == 0) {
            resultante1[k]=n[i];
            k++;
        }
        else{
            resultante2[t]=n[i];
            t++;
        }
    }

    printf("Resultante 1: ");
    for( int i=0; i < k; i++)
        printf("%d ", resultante1[i]);

    printf("\nResultante 2: ");
    for( int i=0; i < t; i++)
        printf("%d ", resultante2[i]);
    

	return 0;

}


