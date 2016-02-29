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

// Escreva um programa que mostre as tabuadas dos números de 1 a 10.
#include<stdio.h>

int main(void){

    for(int i=0; i <= 10; i++){

        for(int j=0; j <= 10; j++){
            printf("%-2dx %-2d = %-2d\n", i, j, i*j);
            if( j == 10 )
                printf("\n");        
        }
    }
	return 0;

}


