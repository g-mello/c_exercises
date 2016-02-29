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

// Faça um programa que receba o salário bruto de um funcionário e, usando
// a tabela calcule o valor a receber. Sabe-se que este é composto pelo
// salário bruto acrescido de gratificações e descontado o
// imposto de 7% sobre o salário 

#include<stdio.h>

int main(void){
    
    float salario; 
    float imposto;

    printf("Salário: ");
    scanf("%f", &salario);

    imposto=salario-0.07*salario;

       if ( salario <= 350 )
           printf("Receber: R$ %.2f\n", salario + 100 - imposto );

         else if ( salario > 350 && salario < 600 )
            printf("Receber: R$ %.2f\n", salario + 75 - imposto );


            else if ( salario >= 600 && salario <= 900 )
               printf("Receber: R$ %.2f\n", salario + 50 - imposto );

       else 
          printf("Receber: R$ %.2f\n", salario + 35 - imposto );

	return 0;

}


