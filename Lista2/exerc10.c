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


//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

// Escreva um programa que receba o custo de fábrica de um carro e mostre
// o preço final ao consumidor.
// Custo de Fábrica + Porcentagem da Distribuidora + Impostos  

#include<stdio.h>

int main(void){

    float custo_fabrica;

    printf("Custo de Fábrica: ");
    scanf("%f", &custo_fabrica );

        if (custo_fabrica <= 12000 )
           printf("Preço Final: %.2f\n", custo_fabrica + 0.05*custo_fabrica ); 

           else if (custo_fabrica > 12000 && custo_fabrica <= 25000 ) 
           printf("Preço Final: %.2f\n", custo_fabrica + 0.10*custo_fabrica 
                                            + 0.15*custo_fabrica); 

        else
           printf("Preço Final: %.2f\n", custo_fabrica + 0.15*custo_fabrica 
                                            + 0.20*custo_fabrica); 

	return 0;

}


