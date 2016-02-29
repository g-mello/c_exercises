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
#define LOGICA_TAMANHO 15
#define PC_TAMANHO 10 

int main(void){

    int logica[ LOGICA_TAMANHO - 1 ];
    int pc[ PC_TAMANHO - 1 ];
    int logica_pc[ LOGICA_TAMANHO - 1 ];
    int k=0; // index logica_pc

    printf("Lógica: Digite o número de matrícula: \n");
    for( int i=0; i < LOGICA_TAMANHO; i++){ 
       printf("%d: ", i+1);
       scanf("%d", &logica[i] );
    }

    printf("Programação: Digite o número de matrícula: \n");
    for( int i=0; i < PC_TAMANHO; i++){ 
       printf("%d: ", i+1);
       scanf("%d", &pc[i] );
    }

    
    for( int i=0; i < LOGICA_TAMANHO; i++){ 
       for( int j=0; j < PC_TAMANHO; j++){

            if( logica[i] == pc[j] ){
               logica_pc[k] = logica[i];
               k++;

            }
        }
    }

    printf("Alunos matrículados em ambos: ");
    for(int i=0; i < k; i++)
       printf("%d, ", logica_pc[i]);


	return 0;

}


