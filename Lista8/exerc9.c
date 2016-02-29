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
#include<stdlib.h>

int main(void){

    float salario;
    float comissao;
    float total_vendas;

    printf("Salario: ");
    do{
        scanf("%f", &salario );
    }while( salario < 0 );

    printf("Total Vendas: ");
    do{
        scanf("%f", &total_vendas);
    }while( total_vendas < 0 );

    comissao = 0.06 * total_vendas;

    system("clear");
    printf("Salario: R$ %.2f\n", salario);
    printf("Total Vendas: R$ %.2f\n", total_vendas);
    printf("Comissão: R$ %.2f\n", comissao);
    printf("Salario Final: R$ %.2f\n", salario + comissao);


	return 0;

}


