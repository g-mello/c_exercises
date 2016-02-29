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

//Project Name: Escreva um programa que calcule a area de um trapézio
//Owner: gmello
//UID : 1000

#include<stdio.h>

int main(void){

    float base_menor, base_maior, altura;

        printf("Base Menor: ");
        scanf("%f", &base_menor );

        printf("Base Maior: ");
        scanf("%f", &base_maior);

        printf("Altura: ");
        scanf("%f", &altura );

        printf("Area = %.2f\n", ((base_maior+base_menor)*altura)/2);

	return 0;

}


