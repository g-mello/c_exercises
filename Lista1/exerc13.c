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

//Project Name: Escreva um programa que calcule e mostre a tabuada de um número
//digitado pelo usuario
//Owner: gmello
//UID : 1000

#include<stdio.h>

int main(void){
    
    int numero, i;
    
        printf("Tabuada de: ");
        scanf("%d", &numero );

        // calcula a tabuada do numero desejado
        for (i = 0; i < 10; i++) {
            printf("%d * %d =  %d \n", numero, i, numero * i);
            }


	return 0;

}


