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

    int client_code, investment_code;
    float value, total_tax=0,total_value=0;

    printf("%-10s\t%-20s\t%-10s\n", "Code", "Description", "Monthly Income");
    printf("%-10d\t%-20s\t%10.1f%c\n", 1, "Savings" , 1.5,'%');
    printf("%-10d\t%-20s\t%10d%c\n", 2, "Savings Plus", 2,'%');
    printf("%-10d\t%-20s\t%10d%c\n", 3, "Fixed Income Funds ", 4,'%');

    for(;;){

        printf("\nClient Code >> ");
        scanf("%d", &client_code );

        if(client_code <= 0)
            break;

        printf("Investment Code >> ");
        scanf("%d", &investment_code );

        printf("Value of Investiment >> $");
        scanf("%f", &value );


        // Verifying data

        if(( investment_code != 1) && (investment_code != 2) && (investment_code != 3)){
            printf("Error: Invalid Investment Code.\n");
            continue;
        }

        if( value < 0 ){
            printf("Error: Invalid Value of Investment\n");
            continue;
        }
        // End Verifying data
       

       total_value += value;
       switch(investment_code){
               case 1:
                   printf("Income: $%.2f\n", value + value * 0.015);
                   total_tax += value * 0.015;
                   break;

               case 2:
                   printf("Income: $%.2f\n", value + value * 0.02);
                   total_tax += value * 0.02;
                   break;

               case 3:
                   printf("Income: $%.2f\n", value + value * 0.04);
                    total_tax += value * 0.04;
                   break;

       } // End Switch


    }// End For
    printf("===========================================\n");
    printf("Total of Investment: $%.2f\n", total_value);
    printf("Total of Taxes: $%.2f\n", total_tax);
	return 0;

}


