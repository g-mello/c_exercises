
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

//Project Name: Escreva um programa que receba o peso de uma pessoa e mostre
//seu novo peso se a pessoa engordar 15% do seu peso ou perder 20% do seu peso.
//Owner: gmello
//UID : 1000

#include<stdio.h>

int main(void){
        
        float peso; 

        printf("Peso: ");
        scanf("%f", &peso);

        printf("Se você engordar 15 por cento seu novo peso será:  %.2f kg\n", peso+peso*0.15);
        printf("Se você emagrecer 20 por cento seu novo peso será::  %.2f kg\n", peso-peso*0.2);
    
	return 0;

}


