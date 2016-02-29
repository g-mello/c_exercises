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

// Faça um programa que receba duas notas, calcule e mostre a média
// aritmética e a mensagem que se encontra na tabela.

#include<stdio.h>

int main(void){

    float nota1, nota2;
    float media;

    // Entrada dos dados sobre as notas
    printf("Nota1: ");
    scanf("%f", &nota1 );

    printf("Nota2: ");
    scanf("%f", &nota2 );

    // calculo da média
    media = (nota1+nota2)/2;

    // Estrutura de decisão sobre aprovado, de exame ou reprovado
    if ( media >= 7 && media <=10 )
        printf("Aprovado com média %.1f\n", media);    
   
        else if ( media >= 5 && media < 7)
           printf("De exame, média %.1f\n", media); 
        
    else
       printf("Reprovado com média %.1f\n", media);  


	return 0;

}


