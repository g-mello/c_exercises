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
// Faça um programa que receba as duas dimensões de um cômodo em metros
// calcule e mostrea area em m² e a potência da iluminação que deverá ser 
// utilizada.

#include<stdio.h>

int main(void){

    float ladoA, ladoB, area, potencia; 

    printf("Digite a medida dos lados da casa\n");
    printf("LadoA: ");
    scanf("%f", &ladoA);

    printf("LadoB: ");
    scanf("%f", &ladoB);

    area=ladoA*ladoB;
    potencia=area*18;
    
    printf("Area: %.2fm²\n", area);
    printf("Potência: %.2fW\n", potencia);

	return 0;

}


