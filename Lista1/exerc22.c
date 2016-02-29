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

// Faça um programa que receba o número de lados de um polígono convexo
// calcule e mostre o número de diagonais desse polígono. Sabe-se que
// ND=N*(N-3)/2 em que N é número de lados do polígono.

#include<stdio.h>
int main(void){

    int n_lados,n_diagonais;

    printf("Número de lados do poligono: ");
    scanf("%d", &n_lados);

    n_diagonais=n_lados/2*(n_lados - 3);

    printf("Número de diagonais do polígono:  %d\n", n_diagonais);


	return 0;

}


