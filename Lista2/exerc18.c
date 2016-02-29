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

// Faça um programa que verifique a validade de uma senha fornecida
// pelo usuário. O programa deve mostrar uma mensagem de permissão de
// acesso ou não.

#include<stdio.h>

int main(void){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if ( idade >= 18 ) 
       printf("Maioridade.\n"); 
    
    else 
        printf("Não Maioridade. \n");
    
	return 0;

}


