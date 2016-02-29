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

// Escreva um programa que receba o preço de um produto e seu código de origem e
// mostre a sua procedência de acordo com a tabela

#include<stdio.h>

int main(void){

    int codigo;
    float preco;

    printf("Código: ");
    scanf("%d", &codigo);

    printf("Preço: ");
    scanf("%f", &preco);
    
    if(codigo == 1)
        printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo, "Sul", preco);

        else if( codigo == 2)
            printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo,"Norte", preco);


            else if(codigo == 3)
                printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo, "Leste", preco);

                else if(codigo == 4)
                    printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo, "Oeste", preco);

                    else if(codigo == 5 || codigo == 6)
                        printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo, "Nordeste", preco);

                        else if( codigo == 7 || codigo == 8 || codigo == 9)
                            printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo, "Sudeste", preco);

                            else if( codigo >= 10 && codigo <= 20 )
                                printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo, "Centro-Oeste", preco);

                                else if( codigo >= 21 && codigo <= 30 )
                                    printf("Codigo: %d\tRegião: %s\tPreço: R$ %.2f\n", codigo, "Nordeste", preco);
                                    
	return 0;

}


