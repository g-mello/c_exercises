
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


//Project Name: Escreva um programa que receba as notas da P1 e P2 e calcule a 
// média ponderada, sabendo que a P1 tem peso 2 e a P2 tem peso 3.
//Owner: gmello
//UID : 1000


#include<stdio.h>
    
int main(void){
    
        float p1, p2, mp;

        printf("Digite a nota da P1: ");
        scanf("%f", &p1 );

        printf("Digite a nota da P2: ");
        scanf("%f", &p2 );
        
        mp=(p1*2+p2*3)/5;
        
        printf("Sua média é: %.1f\n", mp);

	return 0;

}


