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

// Uma empresa decide dar um aumento 30% aos funcionários com salários
// inferiores a R$500,00. Escreva um programa que receba o salário do
// funcionário e mostre o valor do salário reajustado ou uma mensagem caso
// ele não tenha direito ao aumento



#include<stdio.h>

int main(void){

    float salario; 

    printf("Salario: ");
    scanf("%f", &salario );

    if ( salario < 500 )
        printf("Novo Salario: R$ %.2f\n", salario + 0.3*salario);  
   
    else
        printf("Você não tem direito ao aumento.\n");

	return 0;

}


