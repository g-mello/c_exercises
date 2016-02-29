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
#include<stdlib.h>
#include "exerc11.h"

int main(void){

    int i;
    int escolha;
    int controle;
    char c;

    const int tamanho_v = 5; 

    pacientes_t pacientes[tamanho_v];
    int qtd_pacientes=0;

    medicos_t medicos[tamanho_v];
    int qtd_medicos=0;

    consultas_t consultas[tamanho_v]; 
    int qtd_consultas=0;;

    // Inicializa as structs
    init_pacientes( pacientes, tamanho_v);
    init_medicos( medicos, tamanho_v);
    init_consultas( consultas, tamanho_v);

    i=1;
    
    while( i == 1 ){
        printf("=======MENU=====\n");
        printf("1. Incluir Paciente.\n");
        printf("2. Alterar Paciente.\n");
        printf("3. Incluir Médico.\n");
        printf("4. Alterar Médico.\n");
        printf("5. Excluir Médico.\n");
        printf("6. Cadastrar Consulta.\n");
        printf("7. Mostrar Consultas.\n");
        printf("8. Sair.\n");
        printf(">>> ");
        scanf("%i", &escolha );

        switch(escolha){
            case 1:
                incluir_paciente( pacientes, tamanho_v, &qtd_pacientes); 
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }

                system("clear");
                break;
            case 2:
                alterar_paciente( pacientes, tamanho_v); 
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }
                system("clear");
                break;
            case 3:
                incluir_medico( medicos, tamanho_v, &qtd_medicos);
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }
                system("clear");
                break;
                
                break;
            case 4:
                alterar_medico( medicos, tamanho_v);
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }
                system("clear");
                break;
            case 5:
                excluir_medico( medicos,consultas, tamanho_v, &qtd_medicos );
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }
                system("clear");
                break;
            case 6:
                incluir_consulta( consultas, tamanho_v,  &qtd_consultas);
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }
                system("clear");
                break;
            case 7:
                mostrar_consultas( consultas, &qtd_consultas);
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }
                break;
            case 8:
                i=0; // Sair d Loop Principal
                break;
            default: 
                printf("Código Inválido.\n");
                controle=1;
                while( controle == 1 ){
                    printf("Deseja continuar(S-Sim N-Não)?: ");
                    do{
                        scanf("%c", &c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S' ){
                        controle = 0;
                    }
                    else{
                        controle = 0;
                        i = 0;
                    }
                }

        }
    }

	return 0;

}


