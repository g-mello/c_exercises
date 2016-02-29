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

int main(void){

   char alunos[6][20];
   float media[6]; 

   float maior_media=0;
   int nome_maior_media_id=0;

   for( int i=0; i < 7; i++){
       printf("%i. Nome do Aluno: ", i+1);
       scanf("%s", &alunos[i] );
       printf("%i. Média: ", i+1);
       scanf("%f", &media[i] );
   }

    for( int i=0; i < 7; i++){
        if( media[i] > maior_media) {
            maior_media = media[i];
            nome_maior_media_id=i;
        }
    }
    
    printf("%-10s\t%-10s\n", "Aluno", "Maior Média");
    printf("%-10s\t%.2f\n", alunos[nome_maior_media_id], maior_media);

    printf("%-10s\t%-10s\n", "Aluno", "Precisa Tirar no Exame");
    for( int i=0; i < 7; i++){
        if( media[i] < 7 ){
            printf("%s\t\t%-10.2f\n", alunos[i], 10 - media[i]);
        }
    }

    

	return 0;

}


