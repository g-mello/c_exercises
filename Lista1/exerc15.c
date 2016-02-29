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

#include<stdio.h>

int main(void){
    
    float salario, conta1, conta2;
    float salarioRestante; 

    printf("Salário: ");
    scanf("%f", &salario );

    printf("Conta 1: ");
    scanf("%f", &conta1);

    printf("Cont 2: ");
    scanf("%f", &conta2);

    salarioRestante = salario - (conta1 + conta1*0.02 + conta2 + \
            conta2*0.02); 

    printf("Salário Restante R$ %.2f\n", salarioRestante);

	return 0;

}


