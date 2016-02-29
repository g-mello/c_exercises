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
    
    float bonus;
    int horas_extra, horas_faltas;
    float minutos_totais;

    
    printf("Horas Extra: ");
    scanf("%d", &horas_extra );

    printf("Horas Faltadas: ");
    scanf("%d", &horas_faltas);


    if ( horas_faltas< 0 || horas_extra < 0 ){
        printf("ERRO: Horas Extras ou Horas Faltas devem ser maior que zero \n");
        return 1;
    }

    minutos_totais = 60 * horas_extra - (( horas_faltas * 60 ) * (2/3) );

    if ( minutos_totais < 600 )
      bonus = 100;
        else if ( minutos_totais >= 600 && minutos_totais < 1200 ) 
            bonus = 200;
            else if ( minutos_totais >= 1200 && minutos_totais < 1800 )
                bonus = 300; 
                else if ( minutos_totais >= 1800 && minutos_totais < 2400 )
                    bonus = 400;

    else // >= 2400
      bonus = 500;

    printf("Prêmio: R$ %.2f\n", bonus);
    
	return 0;

}


