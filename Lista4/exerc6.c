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
#define SIZE 3 

int main(void){

    float vendas[ SIZE - 1 ];
    float comissao[ SIZE - 1];
    char nomes[ SIZE - 1][30];
    
    float total_vendas=0;

    float maior_valor;
    int maior_valor_nome_id; // Armazena o indice pro nome com maior valor 
                            // de comissão

    float menor_valor;
    int menor_valor_nome_id; // Armazena o indice pro nome com menor valor de 
                            // comissao

    // Recebe os nomes dos vendedores, o total de suas vendas
    // e o porcentual de comissao
    for( int i=0; i < SIZE; i++){

        //Nome
        printf("%i. Nome: ", i+1); 
        scanf("%s", &nomes[i]);

        //Total de Vendas
        printf("%i. Total de Vendas: ", i+1);
        do{
            scanf("%f", &vendas[i] );
        }while( vendas[i] < 0 );

        //Porcentagem da comissao
        printf("%i. Porcentagem de Comissão: ", i+1);
        do{
            scanf("%f", &comissao[i] );
        }while( comissao[i] < 0 );

    } // END FOR



    //Total de vendas de todos os vendedores.
    for( int i=0; i < SIZE; i++)
        total_vendas += vendas[i];
    

   // Maior Valor, Menor Valor
   // Maior Valor Nome, Menor Valor Nome 
   // Primeira Leitura
    maior_valor=vendas[0] * (comissao[0]/100);
    menor_valor=vendas[0] * (comissao[0]/100);

    maior_valor_nome_id = 0;
    menor_valor_nome_id = 0;

    // Demais Leituras
    for( int i=1; i < SIZE; i++){

        // Maior valor a receber e o nome.
        if( ( vendas[i] * (comissao[i]/100) ) > maior_valor ){
           maior_valor = vendas[i] * (comissao[i]/100); 
           maior_valor_nome_id = i;
        }
        

        // Menor valor a receber e o nome.
        if( ( vendas[i] * (comissao[i]/100) ) < menor_valor ){
           menor_valor = vendas[i] * (comissao[i]/100); 
           menor_valor_nome_id = i;
        }
    }


    // Mostra Relatorio
    printf("%-10s\t%-10s\n", "NOME", "Valor da Comissão");
    for(int i=0; i < SIZE;  i++)
        printf("%-10s\t%.2f\n", nomes[i], vendas[i]*(comissao[i]/100));
    
    // Mostra Nome e Maior Valor a Receber 
    printf("\n\n%-10s\t%-10s\n", "Nome", "Maior Valor a Receber");
    printf("%-10s\t%.2f\n", nomes[maior_valor_nome_id], maior_valor);
    
    // Mostra Nome e Menor Valor a Receber 
    printf("\n\n%-10s\t%-10s\n", "Nome", "Menor Valor a Receber");
    printf("%-10s\t%.2f\n", nomes[menor_valor_nome_id], menor_valor);

	return 0;

}


