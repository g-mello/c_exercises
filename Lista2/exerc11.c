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

// Escreva um programa que receba o salário atual de um funcionário e usando
// a tabela, calcule e mostre o valor do aumento do salario.

#include<stdio.h>

int main(void){

    float salario;

    printf("Salário: ");
    scanf("%f", &salario);

        if ( salario <= 300 ){ 
          printf("Aumento: R$ %.2f\n", 0.15*salario); 
          printf("Novo Salário:  R$ %.2f\n", 0.15*salario + salario); 
        }

            else if ( salario > 300 && salario < 600 ){
                printf("Aumento: R$ %.2f\n", 0.1*salario); 
                printf("Novo Salário:  R$ %.2f\n", 0.1*salario + salario); 
            }

                else if ( salario >= 600 && salario <= 900 ){
                    printf("Aumento: R$ %.2f\n", 0.05*salario); 
                    printf("Novo Salário:  R$ %.2f\n", 0.05*salario + salario); 
                }

         else {
           printf("Aumento: %.2f\n", 0.0*salario); 
           printf("Novo Salário:  R$ %.2f\n", salario); 
         }    
                  
        
	return 0;

}


