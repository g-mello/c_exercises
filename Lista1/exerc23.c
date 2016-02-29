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

// Faça um programa que receba a medida de dois angulos de um triângulo,
// calcule e mostre a medida do terceiro angulo. Sabe-se que a soma 
// dos anguls de um triângulo é 180 graus.

#include<stdio.h>

int main(void){
    
    int angulo1, angulo2;
    
    printf("Entre o angulo1: ");
    scanf("%d", &angulo1 );

    if ( angulo1 >= 180 || angulo1 <= 0 ){
       printf("ERRO: angulo inválido \n"); 
       return 1; 
    }
    
    printf("Entre o angulo2: ");
    scanf("%d", &angulo2 );
    
    if ( angulo2 >= (180 - angulo1) || angulo2 <= 0 ){
       printf("ERRO: angulo inválido \n"); 
       return 1;
    }
   
    printf("angulo3 =  %d\n", 180 - angulo1 - angulo2); 


	return 0;

}


