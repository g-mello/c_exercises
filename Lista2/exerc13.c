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

// Faça um programa que receba o preço de um produto e mostre de acordo
// com as tabelas o novo preço e a classificação 

#include<stdio.h>

int main(void){

    float preco, novo_preco;

    printf("Preço: ");
    scanf("%f", &preco);

    if( preco <= 50 )
        novo_preco = preco + 0.05*preco;

        else if( preco > 50 && preco <= 100 )
            novo_preco = preco + 0.1*preco;
   else
       novo_preco = preco + 0.15*preco;


   if(novo_preco <= 80 ){
       printf("Novo Preço: R$ %.2f\n", novo_preco);
       printf("Classificação: Barato\n");
   }

       else if ( novo_preco > 80 && novo_preco <= 120 ){ 
            printf("Novo Preço: R$ %.2f\n", novo_preco);
            printf("Classificação: Normal\n");
       }

          else if ( novo_preco > 120 && novo_preco <= 200){
            printf("Novo Preço: R$ %.2f\n", novo_preco);
            printf("Classificação: Caro\n");
          }

   else{
      printf("Novo Preço: R$ %.2f\n", novo_preco);
      printf("Classificação: Muito Caro\n");
   }           
             
	return 0;

}


