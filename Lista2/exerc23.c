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

// Escreva um programa que receba o código de um produto, a quantidade de
// produto comprada. Calcule e mostre:
// o preço unitário do produto
// o preço total da nota
// o valor do desconto
// o preço final da nota



#include<stdio.h>

int main(void){

    int codigo, quantidade;

    printf("Código: ");
    scanf("%d", &codigo );

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    float total_nota;
    if ( codigo >= 1 && codigo <=10 )
       total_nota=quantidade*10;

         else if( codigo > 10 && codigo <= 20)
            total_nota=quantidade*15;

             else if( codigo > 20 && codigo <= 30)
                total_nota=quantidade*20;


    else // codigo 31 a 40
       total_nota=quantidade*30;

    printf("Total da nota: R$ %.2f\n", total_nota);


    float desconto; 
    if ( total_nota <= 250 ){
        desconto = 0.05*total_nota;
        printf("Desconto: R$ %.2f\n", desconto);
    }
        
        else if ( total_nota > 250 && total_nota <= 500 ){
            desconto = 0.1*total_nota;
            printf("Desconto: R$ %.2f\n", desconto);
        }

    else{ // compras acima de 500 reais
       desconto = 0.15*total_nota;
       printf("Desconto: R$ %.2f\n", desconto);
    }  



    float preco_final;
    preco_final = total_nota - desconto;
    printf("Preço Final: R$ %.2f\n", preco_final);

	return 0;

}


