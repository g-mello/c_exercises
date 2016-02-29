/* Copyright (C) 2015 copyright holder

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

//Project Name: Escreva um Programa que receba 2 numeros n1 e n2. Subtraia o
//primeiro pelo segundo e mostre o resultado
//Owner: gmello
//UID : 1000


#include<stdio.h>

int main(void){
        
        float n1,n2;
        
        printf("Digite n1: ");
        scanf("%f",&n1);
       
        printf("Digite n2: ");
        scanf("%f",&n2);
        
        printf("%.1f - %.1f = %.1f \n", n1, n2, n1-n2 );

        
    
	return 0;

}

