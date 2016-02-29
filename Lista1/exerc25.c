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

// Faça um programa que receba uma hora e calcule
// a hora em minutos
// o total de minutos 
// o total de minutos em segundos

#include<stdio.h>

int main(void){
    
    int hora, minutos;
    
    printf("Hora: ");
    scanf("%d", &hora);
   
    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("Horas -> Minutos: %d min\n", hora * 60);
    printf("Minutos Totais : %d min\n", hora * 60 + minutos);
    printf("Segundos Totais : %d segundos\n", (hora * 60 + minutos)*60);

	return 0;

}


