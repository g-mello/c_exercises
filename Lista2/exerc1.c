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

// Escreva que receba quatro notas de um aluno, calcule e mostre a
// média aritmética das notas e a mensagem de aprovado ou reprovado,
// considerando para aprovação média 7

#include<stdio.h>

int main(void){

    float nota1, nota2, nota3, nota4;
    float media;

    // Entrada dos dados sobre as notas
    printf("Digite a nota 1: " );
    scanf("%f", &nota1 );

    printf("Digite a nota 2: " );
    scanf("%f", &nota2 );
    
    printf("Digite a nota 3: " );
    scanf("%f", &nota3 );

    printf("Digite a nota 4: " );
    scanf("%f", &nota4 );

    //calculo da média
    media = (nota1+nota2+nota3+nota4)/4;

    // Decisão se média é sufuciente para ser aprovado
    if ( media >= 7 )
        printf("Aprovado com média: %.1f\n", media);
    
    else 
        printf("Reprovado com média %.1f\n", media);
    
	return 0;

}


