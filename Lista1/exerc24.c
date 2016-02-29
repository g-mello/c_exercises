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

// Faça um programa que receba a quantidade de dinheiro em reais e faça
// a conversão para dólar, libra esterlina e marco alemão.

#include<stdio.h>

#define DOLAR 1.80
#define LIBRA_ESTERLINA 3.57
#define MARCO_ALEMAO 2.00

int main(void){

    float reais;

    printf("Digite seu montante em R$ ");
    scanf("%f", &reais );

    printf("\n======Conversão=====\n");
    printf("Dólar: $%.2f\n", reais * DOLAR);
    printf("Libra Esterlina: £%.2f\n", reais * LIBRA_ESTERLINA);
    printf("Marco Alemão: €%.2f\n\n", reais * MARCO_ALEMAO);

	return 0;
}


