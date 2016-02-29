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

//Write Here The Project Description
#include<stdio.h>
#define PRODUTOS 10

int main(void){

    
    int codigo_produtos[ PRODUTOS - 1];
    int estoque_produtos[ PRODUTOS - 1];

    int codigo_cliente;
    int codigo;
    int quantidade;
    int i;

    // Entrada dos Dados
    for( int i=0; i < PRODUTOS; i++){

        printf("Código Produto %d: ", i+1);
        do{
            scanf("%d", &codigo_produtos[i]);
        }while( codigo_produtos[i] < 0 );

        printf("Quantidade em Estoque: ");
        do{
            scanf("%d", &estoque_produtos[i]);
        }while( estoque_produtos[i] <= 0 );

    } // end For

    // Processamento
    for( ; ; ){
 
        printf("Código do Cliente: ");
        scanf("%d", &codigo_cliente); 

         if( codigo_cliente == 0 ) 
             break;


        printf("Código do Produto: ");
        do{
            scanf("%d", &codigo);
        }while( codigo < 0 ); 

        printf("Quantidade: ");
        do{ 
            scanf("%d", &quantidade );
        }while( quantidade < 0 );

        i = 0;
        while( i < PRODUTOS ){

            if( codigo == codigo_produtos[i] ){
                if( quantidade <= estoque_produtos[i] ){

                    //Realiza o Pedido e dá baixa no estoque
                    printf("Pedido Concedido.Obrigado e volte sempre.\n");
                    estoque_produtos[i] -= quantidade;
                    break;
                }
                else
                    printf("Não temos estoque suficiente dessa mercadoria.\n");
                    break;

             }
            
            i++;

        } // end While

        if( i == PRODUTOS )
            printf("Código Inexistente.\n");

     } // end For

     return 0;
}
