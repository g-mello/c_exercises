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

//Write Here The Project Description
#include<stdio.h>

int main(void){

    int numeros[6];

    printf("Digite 6 numeros: \n");
    for(int i=0; i < 6; i++)
        scanf("%d", &numeros[i]);


    printf("Multiplos de 2: ");
    for(int i=0; i < 6; i++ ){
        if( numeros[i] % 2 == 0 ) 
            printf("%d, ", numeros[i]);
    }

    printf("\nMultiplos de 3: " );
    for(int i=0; i < 6; i++ ){
        if( numeros[i] % 3 == 0 ) 
            printf("%d, ", numeros[i]);
    }

    printf("\nMultiplos de 2 e 3: ");
    for(int i=0; i < 6; i++ )
      if( numeros[i] % 3 == 0 && numeros[i] % 2 == 0 ) 
            printf("%d, ", numeros[i]);
    

	return 0;

}


