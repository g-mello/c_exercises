
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

//Project Name: Escreva um programa, que receba o sálario fixo do vendedor, 
//o total de suas vendas e calcule o seu salário final + Comissão e o valor da
//Comissão.
//Owner: gmello
//UID : 1000


#include<stdio.h>

int main(void){
    
    float salario,vendas; 

    printf("Salário: "); 
    scanf("%f", &salario );

    printf("Vendas: "); 
    scanf("%f", &vendas);

    printf("Salario Final: $ %.2f\n", salario+0.04*vendas);
    printf("Comissão: $ %.2f\n", 0.04*vendas);

	return 0;

}


