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

// Faça um programa que receba o raio, calcule e mostre
// o comprimento da esfera
// a area da esfera
// o volume da esfera

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(void){

    float raio;

    printf("Raio da esfera: ");
    scanf("%f", &raio);

    printf("Comprimento da esfera %.2f\n", 2*PI*raio );
    printf("Area da esfera:  %.2f\n", PI*pow(raio,2));
    printf("Volume da esfera:  %.2f\n", (PI*pow(raio,3))/4.0f);

	return 0;

}


