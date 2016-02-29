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

//Project Name: 
// Escreva um programa que receba o valor do salario minimo e o valor do
// salario minimo de um funcionario e mostre a quantidade de salarios que esse
// funcionario ganha
//Owner: gmello
//UID : 1000

#include<stdio.h>

int main(void){

    float salario_minimo, salario_funcionario;
    float n_salarios;

          printf("Salario Minimo: ");
          scanf("%f", &salario_minimo);

          printf("Salario do Funcionario: ");
          scanf("%f", &salario_funcionario);
    
          n_salarios=salario_funcionario/salario_minimo;

          printf("O funcionario recebe:  %.1f salarios \n", n_salarios );

	return 0;

}


