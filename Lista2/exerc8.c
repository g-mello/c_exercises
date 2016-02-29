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

// Escreva um programa para calcular e mostrar o salário de um
// funcionário. O percentual de aumento encontra-se na tabela.


#include<stdio.h>

int main(void){

    float salario; 

    printf("Salario: ");
    scanf("%f", &salario );

    if ( salario <= 300 )
        printf("Novo Salario: R$ %.2f\n", salario + 0.35*salario);  
   
    if ( salario > 300 )
        printf("Novo Salario: R$ %.2f\n", salario + 0.15*salario);  

	return 0;

}


