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

// Faça um programa que receba a idade de um nadador e mostre sua categoria
// usando as regras da tabela. Para idade inferior a 5 deve mostrar mensagem.

#include<stdio.h>

int main(void){

    int idade; 

    printf("Idade: ");
    scanf("%d", &idade );

    if( idade < 5 )
        printf("Muito jovem. Sem categoria.\n");

        else if ( idade >= 5 && idade <= 7 )
            printf("Infantil\n"); 

            else if ( idade >= 8 && idade <= 10) 
                printf("Juvenil\n"); 

                else if ( idade >= 11 && idade <= 15 ) 
                    printf("Adolescente\n"); 

                    else if ( idade >= 16 && idade <= 30 ) 
                        printf("Adulto\n"); 

     else  
        printf("Sênior\n");

        
         
	return 0;

}


