
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


//Project Name: Escreva um programa que receba o preço de um produto e dê um
//desconto de 10% em cima deste preço e moestre o novo preço
//Owner: gmello
//UID : 1000


#include<stdio.h>

int main(void){

      float price;

      printf("Entre com o preço : ");
      scanf("%f", &price );

      printf("O novo preço com desconto é : $ %.1f\n", price - price*0.1); 


	return 0;

}


