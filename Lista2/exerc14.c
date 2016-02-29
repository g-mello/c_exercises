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

// Faça um programa que receba o salário de um funcionário e usando a 
// tabela calcule e mostre o novo salário 
//
#include<stdio.h>


int main(void){

    float salario;

    printf("Salário: ");
    scanf("%f", &salario );

    if(salario <= 300)
        printf("Novo Salário: R$ %.2f\n", salario + 0.5*salario);

        else if(salario > 300 && salario <= 500)
            printf("Novo Salário: R$ %.2f\n", salario + 0.4*salario);

            else if(salario > 500 && salario <= 700)
                printf("Novo Salário: R$ %.2f\n", salario + 0.3*salario);

                else if(salario > 700 && salario <= 800)
                    printf("Novo Salário: R$ %.2f\n", salario + 0.2*salario);

                    else if(salario > 800 && salario <= 1000)
                        printf("Novo Salário: R$ %.2f\n", salario + 0.1*salario);
    else
        printf("Novo Salário: R$ %.2f\n", salario + 0.05*salario);


	return 0;

}


