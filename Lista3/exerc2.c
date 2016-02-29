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

// Vide enunciado Exerc2
#include<stdio.h>

int main(void){

    float despesa=200, lucro_esperado;
    int ingressos_vendidos=120;


    //Tabela
    printf("%-10s\t%-10s\t%-10s\n\n","Lucro Máximo","Preço Ingresso", 
               "Qtd de Ingressos");

    for(float preco=5; preco >= 1.00; preco-=0.5){

       lucro_esperado=(preco * ingressos_vendidos) - despesa;
       printf("R$ %-10.2f\tR$ %-10.2f\t%-10d\n",lucro_esperado, preco, ingressos_vendidos );
       ingressos_vendidos += 26;

    }


	return 0;

}


