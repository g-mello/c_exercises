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
#include<stdlib.h>

int main(void){

        float wage;
        int mounths_of_work;
        int option;
   

        printf("Menu of Options.\n");
        printf("1. New Salary.\n");
        printf("2. Vacation.\n");
        printf("3. 13th Salary.\n");
        printf("4. Exit.\n");
        printf(">> ");
        scanf("%d", &option);

        while( option != 4 ){ 
        
            switch (option) { 
                
                case 1: // New Salary

                    printf("Your Wage: ");
                    scanf("%f", &wage );

                    if(wage <= 210){
                        printf("New Salary: R$ %.2f\n", wage + wage * 0.15);
                    }

                    else if ( wage > 210 && wage <= 600 ){
                        printf("New Salary: R$ %.2f\n", wage + wage * 0.10);
                    }

                    else if ( wage > 600 ){
                        printf("New Salary: R$ %.2f\n", wage + wage * 0.05);
                    }

                    break;

                case 2: // Vacation 

                    printf("Your Wage: ");
                    scanf("%f", &wage );
                    printf("Vacation: R$ %.2f\n", wage + wage/3 );

                    break;

                case 3: // 13th salary

                    printf("Your Wage: ");
                    scanf("%f", &wage );
                    printf("Mounths of Work: ");
                    scanf("%d", &mounths_of_work);

                    if( mounths_of_work > 12 && mounths_of_work < 0 ){
                        printf("ERROR: Invalid Value for Mounths of Work\n");
                        continue;
                    }
                    else
                        printf("13th Salary: R$ %.2f\n", wage + (mounths_of_work*wage)/12);

                    break;

                case 4:
                    break;

                default: 
                    printf("ERROR: Invalid Option\n");
                
            } // End Switch

            do{
            printf("New Option >> ");
            scanf("\n%d", &option);
            }while( option != 1 && option != 2 && option != 3 && 
                    option != 4 ); 


            //system("clear");

       }// End For 


	return 0;

}


