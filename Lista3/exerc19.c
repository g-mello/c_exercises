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

    char paper;
    float buy_price, sell_price;
    int papers_income_above_1k=0, papers_income_below_200=0;
    float total_profit=0;

        for( ; ; ){
            printf("Paper: ");
            scanf("\n%c", &paper);
            paper=toupper(paper);
            if( paper == 'F' ) break; 

            printf("Buy Price: ");
            scanf("%f", &buy_price );

            printf("Sell Price: ");
            scanf("%f", &sell_price );

            // Verifying the constance of the data
            if( buy_price < 0 ) {
                printf("Error: Invalid Buy Price\n");
                continue;
            }
            if( sell_price < 0 ) {
                printf("Error: Invalid Sell Price\n");
                continue;
            }
            // End Verification
           
            //
            // Processing  
            if ( sell_price  - buy_price > 10000 ) papers_income_above_1k++;
            if ( sell_price - buy_price < 200 ) papers_income_below_200++; 
            total_profit += sell_price - buy_price;


            // Output per paper
            if( sell_price - buy_price > 0) 
                printf("Paper: %c \nProfit: $%.2f\n", paper,  sell_price - buy_price); 
            else
                printf("Paper: %c \nDeficit: -$%.2f\n", paper,  -1 * (sell_price - buy_price)); 
            

        } // End For

       // Output  
       printf("\n=============================================================\n");
       printf("Papers with income above $1000: %d\n", papers_income_above_1k);
       printf("Papers with income below $200: %d\n", papers_income_below_200);
       printf("Total Profit: %.2f\n", total_profit);

}


