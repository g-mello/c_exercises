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

    int option;
    float arith_mean, weighted_mean;
    float arith_grade1, arith_grade2;
    float weighted_grade1, weighted_grade2, weighted_grade3;
    float weight1, weight2, weight3;


    for( ; ; ){
        printf("%-10s\n", "Menu of Options");
        printf("%-10s\n", "1. Arithmetic Mean");
        printf("%-10s\n", "2. Weighted Mean");
        printf("%-10s\n", "3. Exit");
        printf("%-10s", "Type the choosen option: ");
        scanf("%d", &option );
        if( option == 3) break; 

        if( option != 1 && option != 2 && option != 3){
            printf("Error: Invalid Option\n");
            continue;
        }

            switch (option) {
                case 1: 
                        printf("Grades: ");
                        scanf("%f %f", &arith_grade1, &arith_grade2);
                        arith_mean = ( arith_grade1 + arith_grade2 )/2;
                        printf("\nResult: %.2f\n", arith_mean);
                        
                        break;
                case 2:
                        printf("Grades: ");
                        scanf("%f %f %f", &weighted_grade1, &weighted_grade2, &weighted_grade3);
                        printf("Weights: ");
                        scanf("%f %f %f", &weight1, &weight2, &weight3 );
                    
                        weighted_mean = (weighted_grade1 * weight1 + weighted_grade2 * weight2 
                               +  weighted_grade3 * weight3)/ (weight1 + weight2 + weight3);

                        printf("\nResult: %.2f\n", weighted_mean );

                        break;
                    
            } // End Switch


        } // End For 

	return 0;

}


