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

//Faça um Programa que receba o ano de nascimento de uma pessoa e o
//ano atual calcule e mostre :
//-a idade dessa pessoa em anos
//-a idade dessa pessoa em dias
//-a idade dessa pessoa em semanas


#include<stdio.h>

int main(void){
    
        int anoNascimento;
        int anoAtual;

        printf("ano de nascimento: ");
        scanf("%d", &anoNascimento);

        printf("ano atual: ");
        scanf("%d", &anoAtual);

        printf("Idade em anos: %d\n", anoAtual - anoNascimento);
        printf("Idade em meses: %d\n", 12*anoAtual - 12*anoNascimento);
        printf("Idade em dias: %d\n", 365*anoAtual - 365*anoNascimento);
        printf("Idade em semanas: %f\n", (365*anoAtual - 365*anoNascimento)/7.0f);
        

	return 0;

}


