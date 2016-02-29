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

int main(void){

    float car_value;
    int installment;

    printf("Price of the Car: ");
    scanf("%f", &car_value);

    printf("\nPayCash:\t%7.2f\n", car_value - car_value * 0.2);

    for( int i=1; i <=10 ; i++){

        installment = i * 6;
        
            switch (installment) {
                case 6: printf("\n%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.03)/installment); break;
                case 12: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.06)/installment); break;
                case 18: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.09)/installment); break;
                case 24: printf("%dX:\t\t$%-10.2f\n",installment, (car_value + car_value * 0.12)/installment); break;
                case 30: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.15)/installment); break;
                case 36: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.18)/installment); break;
                case 42: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.21)/installment); break;
                case 48: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.24)/installment); break;
                case 54: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.27)/installment); break;
                case 60: printf("%dX:\t\t$%-10.2f\n", installment, (car_value + car_value * 0.30)/installment); break;
                    
            } // End switch
         
    } // End for 


	return 0;

}


