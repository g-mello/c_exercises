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
#include<stdlib.h>

int main(void){

    int age;
    float height, weight;
    char eyes_color, hair_color;
    
    int sum_skinny_people_plus50=0;

    int sum_age_short_people=0;
    int sum_short_people=0;

    int sum_blue_eyes_people=0;
    int sum_non_blue_eyes_red_head_people=0;


    for( int i=1; i <= 6; i++){
        printf("Age: ");
        scanf("%d", &age );
        printf("Height: ");
        scanf("%f", &height );
        printf("Weight: ");
        scanf("%f", &weight );
        printf("Eyes Color: ");
        scanf("\n%c", &eyes_color );
        printf("Hair Color: ");
        scanf("\n%c", &hair_color);

        //Verifying the consistance of the data
        if( age < 0  ){
            printf("Error: Invalid age.\n");
            continue;
        }

        if( height < 0  ){
            printf("Error: Invalid height.\n");
            continue;
        }

        if(weight < 0  ){
            printf("Error: Invalid weight.\n");
            continue;
        }

        if( eyes_color != 'A' && eyes_color != 'P' && eyes_color != 'V' &&
               eyes_color != 'C' ){
           printf("Erro: Invalid color to eyes.\n");
          continue;
        }

        if( hair_color != 'P' && hair_color != 'C' && hair_color != 'L' &&
               hair_color != 'R' ){
            printf("Erro: Invalid color to hair.\n");
            continue;
        } 

        if( eyes_color == 'a' || eyes_color == 'p' || eyes_color == 'v' || 
               eyes_color == 'c' ) eyes_color = toupper(eyes_color);

        if( hair_color == 'p' ||  hair_color == 'c' || hair_color == 'c' || 
               hair_color == 'r' )hair_color = toupper(hair_color);
     
        // End of verification
      

         // Processing data 
        if( age > 50 && weight < 60 )
            sum_skinny_people_plus50++;

        if( height < 1.5 ){
            sum_age_short_people=age;
            sum_short_people++;
        }

        if( eyes_color == 'A' )
            sum_blue_eyes_people++;

        if( hair_color == 'R' && eyes_color != 'A')
            sum_non_blue_eyes_red_head_people++;

        system("clear");
        // End Processing data
       
    } // End Loop

        // Output
        printf("Above 50 years old and Weight less than 60: %d person(s)\n", sum_skinny_people_plus50);
        printf("Average age of people under 1.5m: %2.f person(s)\n", (sum_age_short_people*1.0)/sum_short_people);
        printf("Average of blue eyes people: %2.f percent \n", 10*((sum_blue_eyes_people*1.0)/6) );
        printf("%d person(s) is/are red head, but do not has/have blue eyes", sum_non_blue_eyes_red_head_people);

	return 0;

}


