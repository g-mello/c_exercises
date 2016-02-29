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

// Faça um programa que receba a altura e o sexo de uma pessoa e calcule
// e mostre o seu peso idela utilizando as formulas. 

#include<stdio.h>

int main(void){
    
    float altura;
    char sexo;

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Sexo (m)Masculino (f)Feminino: ");
    scanf("%s", &sexo);


     if( sexo == 'm') 
         printf("Peso ideal: %.2f Kg\n", 72.7*altura - 58);
            
        else if( sexo == 'f')
            printf("Peso ideal: %.2f Kg\n", 62.1*altura - 44.7);

    else
        printf("Sexo Inválido.\n");

	return 0;



}


