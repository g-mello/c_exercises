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

//Project Name: Escreva um programa que calcule a area de um losango
//Owner: gmello
//UID : 1000

#include<stdio.h>

int main(void){
    
    float diagonal_maior, diagonal_menor; 
    
        printf("Diagonal Maior: ");
        scanf("%f", &diagonal_maior);

        printf("Diagonal Menor: ");
        scanf("%f", &diagonal_menor);

        printf("Area = %.2f\n", (diagonal_maior + diagonal_menor)/2 );


	return 0;

}


