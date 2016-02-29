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

    int age=1;
    int total_ages=0, counter_ages=0;

    while( age != 0){
        printf("Enter an age or 0 to finish: ");
        scanf("%d", &age );

        if( age == 0 ) 
            break; 

        total_ages += age;
        counter_ages++;
    }

    printf("Average of ages: %.2f years old.\n", (total_ages*1.0)/counter_ages);

	return 0;

}


