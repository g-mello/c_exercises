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

// Faça um programa que receba o preço atual de um produto, calcule e
// mostre o valor do desconto  e o novo preço de acordo com a tabela.
//
//
#include<stdio.h>

int main(void){

    float preco;

    printf("Preço: ");
    scanf("%f", &preco);

    if(preco <= 30){
        printf("Sem desconto\n");
        printf("Novo Preço %.2f\n", preco);
    }

        else if(preco > 30 && preco <= 100){
            printf("Desconto:  %d%\n", 10);
            printf("Novo Preço:  %.2f\n", preco - 0.1*preco);
        }
        
    else{
       printf("Desconto:  %d%\n", 15);
       printf("Novo Preço:  %.2f\n", preco - 0.15*preco);
    }
	return 0;

}


