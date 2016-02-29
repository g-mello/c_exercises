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

    int number;
    int sum_even=0;
    int sum_uneven=0;
    
    for(int i=1; i <= 10; i++){
        
        printf("Enter a number: ");
        scanf("%d", &number );

        if( number % 2 == 0)
            sum_even += number;
        else
            sum_uneven += number;
    }

    printf("Sum of even numbers: %.d\n", sum_even);
    printf("Sum of uneven numbers: %.d\n", sum_uneven);
    
	return 0;

}


