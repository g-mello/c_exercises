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

#include<stdio.h>
#define TAMANHO 5

int main(void){

    char nome_produtos[TAMANHO - 1][20];
    float preco_produtos[TAMANHO - 1];

    int qtd_menor500=0; // itemA
    float soma_produtos_sup100=0; // itemC
    int qtd_produtos_sup100=0; // itemC


    // entrada dos dados
     for(int i=0; i < TAMANHO; i++){

         printf("%i. Nome do produto: ", i+1);
         scanf("%s", &nome_produtos[i]);

         printf("%i. Preço do produto: ", i+1);
         do{
             scanf("%f", &preco_produtos[i]);
         }while( preco_produtos[i] <= 0 );

     }

    //Item A
     for( int i=0; i < TAMANHO; i++ ){
        if( preco_produtos[i] < 50 ) 
            qtd_menor500++;
     }
    printf("ItemA: %i\n", qtd_menor500);


     // Item B
     printf("Produtos com preço entre R$50 e R$100: ");
     for (int i = 0; i < TAMANHO; ++i){
        if( preco_produtos[i] > 50 && preco_produtos[i] <= 100 )
           printf("%-10s ", nome_produtos[i]); 
     }


     // Item C
     for (int i = 0; i < TAMANHO; ++i){
         if( preco_produtos[i] > 100 ) 
            soma_produtos_sup100 += preco_produtos[i];
            qtd_produtos_sup100++;
     }

     printf("\nMedia %.2f\n", soma_produtos_sup100/qtd_produtos_sup100); 

	return 0;
}


