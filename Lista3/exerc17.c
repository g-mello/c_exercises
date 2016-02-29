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

    int channel=1;
    int audience;

    int total_audience=0;
    int total_audience_ch4=0, total_audience_ch5=0;
    int total_audience_ch7=0, total_audience_ch12=0;

    for( ; ; ){

        printf("Channel: ");
        scanf("%d", &channel );
        if( channel == 0 )break; // Finish the loop

        printf("Audience: ");
        scanf("%d", &audience );
       
        // Verify the consistance of the data 
        if( channel != 4 && channel != 5 && channel != 7 && channel != 12){
            printf("Error: Invalid channel\n");
            continue;
        }

        if( audience < 0 ){ 
            printf("Error: Invalid Audience\n");
            continue;
        }
        // End verification 


        if( audience == 0 ) continue; // The TV is turned off
        total_audience += audience; // Sum all the entering audience.

        switch(channel){
            case 4: total_audience_ch4 += audience; break; 
            case 5: total_audience_ch5 += audience; break;
            case 7: total_audience_ch7 += audience; break;
            case 12: total_audience_ch12 += audience; break;
        } // End switch

    } // End for

    printf("\n\n");
    printf("%-10s\t%-10s\n", "Channel", "Percent of Total Audience");
    printf("%-10d\t%.2f%-10c\n", 4, 100 * ((total_audience_ch4*1.0)/total_audience),'%');
    printf("%-10d\t%.2f%c\n", 5, 100 * ((total_audience_ch5*1.0)/total_audience),'%');
    printf("%-10d\t%.2f%c\n", 7, 100 * ((total_audience_ch7*1.0)/total_audience),'%');
    printf("%-10d\t%.2f%c\n", 12, 100 * ((total_audience_ch12*1.0)/total_audience),'%');


	return 0;

}


