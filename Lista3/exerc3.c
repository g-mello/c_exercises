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

//Vide enunciado Exercicio 3
#include<stdio.h>


int main(void){

    int faixa1, faixa2, faixa3, faixa4, faixa5;
    int idade;

    faixa1=faixa2=faixa3=faixa4=faixa5=0;

    for( int i=1; i <= 8; i++){
        printf("Idade: ");
        scanf("%d", &idade);

        if( idade <= 0){
            printf("ERRO: Idade inválida");
            return 1;
        }


        if( idade < 15 )
            faixa1++;
            else if( idade >= 16 && idade <= 30)
                faixa2++;
            else if( idade >= 31 && idade <= 45)
                faixa3++;
            else if( idade >= 46 && idade <= 60)
                faixa4++;
        else // acima de 60
                faixa5++;
    
    }

    printf("Faixa Etária 1: %d pessoas\n", faixa1);
    printf("Faixa Etária 2: %d pessoas\n", faixa2);
    printf("Faixa Etária 3: %d pessoas\n", faixa3);
    printf("Faixa Etária 4: %d pessoas\n", faixa4);
    printf("Faixa Etária 5: %d pessoas\n\n", faixa5);

    printf("Porcentagem de pessoas na Faixa Etária 1: %.1f\%\n", (faixa1/8.0)*100);
    printf("Porcentagem de pessoas na Faixa Etária 5: %.1f\%\n", (faixa5/8.0)*100);

	return 0;

}


