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

// Vide enunciado Exerc6
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void){

    char codigo;
    float valor;
    float total_avista=0;
    float  total_aprazo=0;

    for(int i=1; i <= 15; i++){

        printf("Codigo V ou P: ");
        scanf("\n%c", &codigo);
        codigo=toupper(codigo);

        // Faz a validação do codigo
        if( codigo != 'P' && codigo != 'V'){
            printf("Erro: Codigo Invalido\n");
            continue;
        }
        if( valor < 0 ) {
            printf("Erro: Valor Invalido\n");
            continue;
        }
        // Fim validação



        //  Processo para vendas a prazo
        switch(codigo){
            case 'P':
                        //  Processo para vendas a prazo
                        for(int i=1; i <= 3 ; i++){
                            printf("Parcela %d: ", i);
                            scanf("%f", &valor);
                            total_aprazo += valor;
                        }
                        system("clear");
                        break;

            case 'V':
                    //  Processo para vendas a vista 
                        printf("Valor: ");
                        scanf("%f", &valor );
                        total_avista += valor;
                        system("clear");
                        break;

        } // end Switch 


    } //End-For

    printf("Total Compras à Vista: R$ %.2f\n", total_avista);
    printf("Total Compras à Prazo: R$ %.2f\n", total_aprazo);
    printf("Total Primeira Prestação: R$ %.2f\n", total_aprazo/3);

	return 0;

}


