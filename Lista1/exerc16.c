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

// Faça um programa que receba o valor dos catetos de um triângulo, 
// calcule e mostre o valor da hipotenusa.

#include <stdio.h>
#include <math.h>

int main(void){
    
    float cateto1, cateto2;
    double resultado;

    printf("Cateto1: ");
    scanf("%f", &cateto1 );

    printf("Cateto2: ");
    scanf("%f", &cateto2 );
    
    cateto1=powf(cateto1,2);
    cateto2=powf(cateto2,2);
    resultado=sqrtf(cateto1 + cateto2);

    printf("Hipotenusa =  %.2f\n", resultado); 
	return 0;

}


