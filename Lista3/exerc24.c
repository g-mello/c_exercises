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
    int loop=0;
    int smaller=0, larger=0;

    for(;;){
        printf("Number: ");
        scanf("%d", &number );

        // Verifying the data
        if( number == 0) 
          break;

        if(number < 0 ){
            printf("ERROR: Invalid Number\n");
            continue;
        }

        if(loop == 0 ){
            smaller = number;
            larger = number;
            loop=1;
        }
        //END Verifying the data
        
        if(number < smaller )
            smaller = number; 

        if(number > larger )
            larger = number;
    }

    printf("Smaller Number: %d\n", smaller);
    printf("Larger Number: %d\n", larger);

	return 0;
}


