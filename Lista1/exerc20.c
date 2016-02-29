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

// Faça um programa que receba a medida do angulo formado por uma escada
// apoiada no chão e a distância em que a escada está da parede, calcule e 
// moestre a medida da escada que possa alcançar sua ponta.

#include<stdio.h>
#include<math.h>

int main(void){

    float medidaEscada, distancia, angulo;

    printf("Digite a distância da escada até a parede: ");
    scanf("%f", &distancia);

    printf("Digite o ângulo formado pela escada apoiada no chão: ");
    scanf("%f", &angulo );

    medidaEscada=distancia/cosf(angulo);

    printf("Media da escada: %.2f\n", medidaEscada);

	return 0;

}


