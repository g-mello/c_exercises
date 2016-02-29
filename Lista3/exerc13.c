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

   int age;
   float weight;

   int total_people_range1=0, total_people_range2=0;
   int total_people_range3=0, total_people_range4=0; 

   float total_weight_range1=0, total_weight_range2=0;
   float total_weight_range3=0, total_weight_range4=0;

    for( int i=1; i <= 15; i++){
        printf("Age: ");
        scanf("%d", &age);
        printf("Weight: ");
        scanf("%f", &weight );

        if( age >=1 && age <= 10 ){
            total_weight_range1 += weight;
            total_people_range1++; 
        }

            else if( age > 10 && age <= 20 ){
                total_weight_range2 += weight;
                total_people_range2++; 
            }

            else if( age > 20 && age <= 30 ){
                total_weight_range3 += weight;
                total_people_range3++;
            }

        else{ // age > 30
          total_weight_range4 += weight;
          total_people_range4++; 
        }
    }
    
    printf("%-10s\t%-10s\n\n", "Range", "Average" );
   ( total_people_range1 == 0 || total_weight_range1 == 0)? printf("%-10s\t%-10.2fKg\n","1-10", 0.0) : printf("%-10s\t%-10.2fKg\n", "1-10",total_weight_range1/total_people_range1 );
   ( total_people_range2 == 0 || total_weight_range2 == 0)? printf("%-10s\t%-10.2fKg\n","11-20", 0.0) : printf("%-10s\t%-10.2fKg\n", "11-20",total_weight_range2/total_people_range2 );
   ( total_people_range3 == 0 || total_weight_range3 == 0)? printf("%-10s\t%-10.2fKg\n","21-30", 0.0) : printf("%-10s\t%-10.2fKg\n", "21-30",total_weight_range3/total_people_range3 );
   ( total_people_range4 == 0 || total_weight_range4 == 0)? printf("%-10s\t%-10.2fKg\n","> 30", 0.0) : printf("%-10s\t%-10.2fKg\n", "> 30",total_weight_range4/total_people_range4 );
	return 0;

}


