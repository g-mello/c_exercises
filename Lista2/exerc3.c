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

// Escreva um programa que receba dois números e mostre o menor
#include<stdio.h>

int main(void)
        {
           
            int n1, n2;
            
            printf("n1: ");
            scanf("%d", &n1);

            printf("n2: ");
            scanf("%d", &n2);
           
                if ( n1 < n2) 
                    printf("%d\n",n1);

                else
                    printf("%d\n",n2);     
                
        return 0;
    }


