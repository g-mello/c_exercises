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

// Faça um programa que receba o número de horas trabalhadas, o valor do
// sálario mínimo e o número de horas extras trabalhadas, calcule e mostre 
// o salário a receber

#include<stdio.h>

int main(void){
    
    float hora_trabalhada, hora_extra, salario_min;
    float salario_total; 

    printf("Horas Trabalhadas: ");
    scanf("%f", &hora_trabalhada );

    printf("Horas Extra: ");
    scanf("%f", &hora_extra);

    printf("Salário Mínimo: ");
    scanf("%f", &salario_min);

    salario_total = hora_trabalhada*(salario_min/8) + hora_extra*\
                      (salario_min/4);

    printf("Sálario Total: R$ %.2f\n", salario_total);

	return 0;

}


