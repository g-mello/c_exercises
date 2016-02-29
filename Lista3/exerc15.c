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

    char gender, answer;

    int total_yes=0, total_no=0;
    int total_yes_woman=0, total_no_men=0;
    int total_men=0;

    for(int i=1; i <= 15; i++){
        printf("Gender ( M-Male F-Female): ");
        scanf("\n%c", &gender );
        printf("Answer (Y-Yes N-No): ");
        scanf("\n%c", &answer);

        gender=toupper(gender);
        answer=toupper(answer);

        if( gender != 'M' && gender != 'F'){
            printf("Error: Invalid Gender\n");
            continue;
        }

        if( answer != 'Y' && answer != 'N') {
            printf("Error: Invalid Answer \n");
            continue;
        }

        if( answer == 'Y' ) total_yes++;
        if( answer == 'N' ) total_no++;
        if( answer == 'Y' && gender == 'F') total_yes_woman++;
        if( answer == 'N' && gender == 'M' )  total_no_men++; 
        if( gender == 'M' ) total_men++;
    }

    printf("\n\nTotal Yes: %d\n", total_yes);
    printf("Total No: %d\n", total_no);
    printf("Total woman who anserwed yes: %d\n", total_yes_woman);
    printf("%.2f %c of men answered no.\n", 100*((total_no_men * 1.0)/total_men), '%');

	return 0;

}


