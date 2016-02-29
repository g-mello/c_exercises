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
#define tamanho 3

int main(void){

    char produtos[tamanho - 1][20];;
    int codigos[tamanho - 1];
    float precos[tamanho - 1];

    for(int i=0; i < tamanho; i++){

        printf("%i. Produto: ", i+1);
        scanf("%s", &produtos[i]);

        printf("%i. Código: ", i+1);
        scanf("%i", &codigos[i]);

        printf("%i. Preço: ", i+1);
        scanf("%f", &precos[i]);
        
    }

    printf("%-10s\t%-10s\t%-10s\t%-10s\n", "Código", "Produto", "Preço", "Novo Preço"); 
    for( int i=0; i < tamanho; i++){

        if(  codigos[i] % 2 == 0 && precos[i] > 1000 ) 
            printf("%-10s\t%-10i\t%-10.2f\t%-10.2f\n", produtos[i], codigos[i], precos[i], (precos[i] + 0.2 * precos[i]) ); 

        if(  codigos[i] % 2 == 0  ) 
            printf("%-10s\t%-10i\t%-10.2f\t%-10.2f\n", produtos[i], codigos[i], precos[i], (precos[i] + 0.15 * precos[i]) );

        if( precos[i] > 1000 ) 
            printf("%-10s\t%-10i\t%-10.2f\t%-10.2f\n", produtos[i], codigos[i], precos[i], (precos[i] +0.1 * precos[i])); 
    }

	return 0;

}


