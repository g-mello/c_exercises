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

// Vide enunciado Exerc7
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int age;
    float height, weight;

    int old_people=0, sum_teens=0, skinnies=0;
    float sum_teens_height=0;

    for( int i=1; i <= 5 ; i++){
        printf("Age: ");
        scanf("%d", &age );
        printf("Height: ");
        scanf("%f", &height );
        printf("Weight: ");
        scanf("%f", &weight );

        if( age > 50)
            old_people++;

        if( age >= 10 && age <= 20){
            sum_teens_height += height;
            sum_teens++;
        }

        if( weight <= 40 )
            skinnies++;

        system("clear");
    }
    
    printf("There is/are %d person(s) older than 50\n", old_people);
    printf("Average of the teens' height is: %.2f\n meters", sum_teens_height/sum_teens);
    printf("There is/are %.2f percent of skinny people\n", 100*( skinnies /5.0) );

	return 0;

}


