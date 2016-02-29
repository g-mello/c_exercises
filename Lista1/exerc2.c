
//Copyright (C) 2015 copyright holder

/* This program is free software: you can redistribute it and/or modify
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

//Project Name: Escreva um programa que receba 3 números, calcule a
//multiplicação destes números e mostre o resultado 
//Owner: gmello
//UID : 1000


#include<stdio.h>

int main(void){

    float n1,n2,n3;

    printf("Digite o n1: ");
    scanf("%f",&n1 );

    printf("Digite o n2: ");
    scanf("%f",&n2);

    printf("Digite o n3: ");
    scanf("%f",&n3);

    printf("%.1f * %.1f * %.1f = %.2f \n", n1, n2, n3, n1*n2*n3);

	return 0;

}


