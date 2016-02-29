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
#include<stdlib.h>
#include<ctype.h>
#include "exerc10.h"

int main(void){

    const int tamanho_v = 15;
    contas_receber_t contas[tamanho_v];
    int qtd_contas=0;
    int escolha;
    int controle;
    char c;
    int i=1;

    init(contas, tamanho_v);

    while( i == 1 ){
       printf("=======MENU=======\n");
       printf("1. Cadastrar Documento.\n");
       printf("2. Mostrar Documentos Lidos.\n");
       printf("3. Mostrar Média dos juros.\n");
       printf("4. Sair.\n");
       printf(">>> ");
       scanf("%d", &escolha);

       switch (escolha) {
            case 1:
                cadastrar(contas, tamanho_v, &qtd_contas);
                controle=1;
                while( controle == 1){
                    printf("Deseja Continuar(S-Sim N-Não) ? : ");
                    do{
                        scanf("%c", &c);
                        c=toupper(c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S'){
                        controle = 1;
                    }
                    else{
                        controle = 1;
                        i = 0; 
                }
                system("clear");
                break;
            case 2:
                mostrar_documentos(contas, qtd_contas);
                controle=1;
                while( controle == 1){
                    printf("Deseja Continuar(S-Sim N-Não) ? : ");
                    do{
                        scanf("%c", &c);
                        c=toupper(c);
                    }while( c != 'S' && c != 'N' );


                    if( c == 'S'){
                        controle = 1;
                    }
                    else{
                        controle = 1;
                        i = 0; 
                }
                system("clear");
                break;
            case 3:
                media_juros(contas, qtd_contas);
                controle=1;
                while( controle == 1){
                    printf("Deseja Continuar(S-Sim N-Não) ? : ");
                    do{
                        scanf("%c", &c);
                        c=toupper(c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S'){
                        controle = 1;
                    }
                    else{
                        controle = 1;
                        i = 0; 
                }
                system("clear");
                break;
            case 4:
                i=0;
                break;

            default:
                printf("Opção Inválida.\n");
                controle=1;
                while( controle == 1){
                    printf("Deseja Continuar(S-Sim N-Não) ? : ");
                    do{
                        scanf("%c", &c);
                        c=toupper(c);
                    }while( c != 'S' && c != 'N' );

                    if( c == 'S'){
                        controle = 1;
                    }
                    else{
                        controle = 1;
                        i = 0; 
                }
                system("clear");
              }
    } 

	return 0;

}





























