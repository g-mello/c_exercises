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
#include<stdlib.h>

int main(void){

    int age;
    float weight, height;
    int sum_age=0;
    int sum_p1=0, sum_p2=0, sum_p3=0;

    for (int i=1; i <= 3; i++){

        printf("Age: ");
        scanf("%d", &age );

        if( age < 0){
            printf("ERROR: Invalid age.\n");
            continue;
        }

        printf("Weight: ");
        scanf("%f", &weight);

        if( weight < 0){
            printf("ERROR: Invalid Weight.\n");
            continue;
        }

        printf("Height: ");
        scanf("%f", &height);


        if( height < 0){
            printf("ERROR: Invalid Height.\n");
            continue;
        }

        sum_age += age;
        if( weight > 90 && height < 1.5)
            sum_p1++;

        if( age >= 10 && age <= 30 && height > 1.90 )
            sum_p2++;

        if( height > 1.90 )
            sum_p3++;
           
       system("clear"); 
    }
    
    // Output 
    printf("Average age: %.2f\n", (sum_age*1.0)/3);
    printf("People weighting above 90 kg and height under 1,50 m: %d person(s)\n", sum_p2);
    printf("People aging between 10 and 30 years among 1.90 m people: %.2f percent \n ", 10*((sum_p2*1.0)/sum_p3) );

	return 0;

}


