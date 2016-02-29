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

   int codigo;
   int total_votos=0;
   int total_candidato1=0; 
   int total_candidato2=0; 
   int total_candidato3=0; 
   int total_candidato4=0; 
   int total_nulo=0, total_branco=0;

   do{
    printf("Codigo: ");
    scanf("%d", &codigo );   
    
    switch(codigo){
        case 1: total_candidato1++; break;
        case 2: total_candidato2++; break;
        case 3: total_candidato3++; break;
        case 4: total_candidato4++; break;
        case 5: total_branco++; break;
        case 6: total_nulo++; break;
        default: printf("Código Inválido\n"); break; 
    }

    total_votos++;
   }
   while( codigo != 0 );

   printf("Total Candidato 1: %d\n", total_candidato1);
   printf("Total Candidato 2: %d\n", total_candidato1);
   printf("Total Candidato 3: %d\n", total_candidato1);
   printf("Total Candidato 4: %d\n", total_candidato1);
   printf("Total Candidato 5: %d\n", total_candidato1);
   printf("Total Votos Nulo: %d\n", total_nulo);
   printf("Total Votos Branco: %d\n", total_branco);
   printf("Porcentagem Votos Nulo: %.2f %c\n", 100*((1.0*total_nulo)/total_votos),'%');
   printf("Porcentagem Votos Branco: %.2f %c\n", 100*((1.0*total_branco)/total_votos),'%');

	return 0;

}


