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
#include<ctype.h>

int main(void){

    int age;
    char gender;
    float wage;

    int total_people=0;
    float total_wage=0;

    int minor_age=1000, major_age=0;
    int woman_below200wage=0;

    float lowest_wage=100000;
    int lowest_wage_age;
    char lowest_wage_gender;

    for( ; ; ){

        printf("Age ( or any negative number to finish ): ");
        scanf("%d", &age );
        if( age < 0 ) break;

        printf("Gender( M-Male F-Female): ");
        scanf("\n%c", &gender );
        gender=toupper(gender);

        printf("Wage: ");
        scanf("%f", &wage);

        // Verifying the consistance of the data
        if( gender !='M' && gender != 'F'){
            printf("Error: Invalid Gender\n");
            continue;
        }

        if( wage < 0 ){
            printf("Error: Invalid Wage\n");
            continue;
        }
        // End of verification
        
        total_people ++; 
        total_wage += wage;

        if( age < minor_age) minor_age = age; 
        if( age > major_age) major_age = age;
        if( gender == 'F' && wage <= 200 ) woman_below200wage++;
        if( wage < lowest_wage) { lowest_wage_age = age; lowest_wage_gender = gender; }

    } // End for 

    printf("\n\nAverage Wage: $%.2f\n", total_wage/total_people);
    printf("Major age: %d\n", major_age);
    printf("Minor age: %d\n", minor_age);
    printf("Number of women who has a wage below or equal to $200.00: %d\n", woman_below200wage);
    printf("Lowerst wage person: Age: %d -- gender %c\n", lowest_wage_age, lowest_wage_gender);


	return 0;

}


