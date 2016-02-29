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

// Faça um programa que receba o tipo de investimento e seu valor, calcule
// e mostre o valor corrigido após um mês de investimento, de acordo com o 
// investimento

#include<stdio.h>

int main(void){
    
    float valor;
    int investimento;

    printf("=================================================================\n");
    printf("Tipo\tDescrição\tRendimento Mensal\n");
    printf("1\tPoupança\t\t3%\n");
    printf("2\tFundos de Renda Fixa\t4%\n");
    printf("=================================================================\n");

    printf("Valor: ");
    scanf("%f", &valor );

    printf("Tipo de Investimento: ");
    scanf("%d", &investimento);

    switch(investimento){
        case 1:
            printf("Valor Corrigido: R$  %.2f\n", valor + valor*0.03);
           break;
        case 2:
            printf("Valor Corrigido: R$  %.2f\n", valor + valor*0.04);
           break; 
    }

	return 0;

}


