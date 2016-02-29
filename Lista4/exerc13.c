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

//Write Here The Project Description
#include<stdio.h>


int main(void){

    char aluno[7][20]; 
    float nota[7];

    for( int i=0; i < 8 ; i++){
        printf("Digite o nome do %iº aluno: ",i+1);
        scanf("%s", &aluno[i]);
        printf("Digite a nota do %s: ", aluno[i]);
        scanf("%f", &nota[i] ); 
    }

    printf("\nRelatório de notas\n");
    for( int i=0; i < 8 ; i++){
        printf("%-10s\t%-10.2f\n", aluno[i], nota[i]);
    }

	return 0;

}


