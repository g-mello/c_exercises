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

    int number;
    int primenumbers;
    int j;

    primenumbers = 0;

    for(int i=1; i <= 10; i++){
        printf("Number: ");
        scanf("%d", &number );

        // verify if the number is prime
        j=2;
        while( j < number) {
            if( ( number % j ) == 0 ) break; 
            j++;
        }
        
        // increment if the number is prime
        if ( j == number ) primenumbers++;
    }

    printf("Primes: %d\n", primenumbers);

	return 0;

}


