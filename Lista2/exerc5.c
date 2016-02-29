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

// Escreva um programa que receba dois números e execute as operações listadas
// de acordo com as escolhas do usuário

#include<stdio.h>

int main(void){

    int n1, n2;
    int c;

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    printf("\n=======================================================\n");
    printf("Escolha\t\t\tOperação\n");
    printf("1\t\t Média entre os números digitados\n");
    printf("2\t\t Diferença do maior pelo menor\n");
    printf("3\t\t Produto entre os números digitados\n");
    printf("4\t\t Divisão do primeiro pelo segundo\n");
    printf("=======================================================\n");

    printf("Escolha: ");
    scanf("%d", &c );
                
        switch (c) {
            case 1:
                printf("Media = %.2f\n", (n1+n2)/2.0); 
                break;

            case  2 :
                if (n1 > n2)
                    printf("n1 - n2 = %d\n", n1 - n2 );    
                else
                    printf("n2 - n1 = %d\n", n2 - n1 );    
                break;

            case 3 :
                printf("n1 * n2 = %d\n", n1 * n2);
                break;

            case 4 :
                printf("n1/n2 =  %.1f\n", (float)n1/n2);
                break;

        } 

	return 0;

}


