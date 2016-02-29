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
#include<math.h>

int main(void){

    float n1, n2;
    char escolha;
    float pot=1.0/3.0;

    printf("n1: ");
    scanf("%f", &n1);
//    printf("n1: %.1f\n", n1);

    printf("n2: ");
    scanf("%f", &n2);
 //   printf("n2: %.1f\n", n2);

    printf("\n===============================================================\n");
    printf("Escolha\t\t\tOperação\n");
    printf("a\t\t O primeiro número elevado ao segundo número\n"); 
    printf("b\t\t Raiz quadrada de cada um dos números\n"); 
    printf("c\t\t Raiz cúbica de cada um dos números\n"); 
    printf("==============================================================\n");

    printf("Escolha: ");
    scanf("%s", &escolha);
                
        switch (escolha) {
            case 'a':
                printf("%.1f ^ %.1f = %.1f\n", n1, n2, powf(n1,n2) ); 
                break;

            case 'b':
                printf("Raiz de n1 = %.2f\n", sqrtf(n1) );
                printf("Raiz de n2 = %.2f\n", sqrtf(n2) );
                break;
            case 'c' :
                printf("Raiz cubica de n1 = %.1f\n", powf(n1,pot) );
                printf("Raiz cubica de n2 = %.1f\n", powf(n2,pot) );
                break;

            default :
               printf("Opção inválida.\n");
               break;
        } 

	return 0;

}


