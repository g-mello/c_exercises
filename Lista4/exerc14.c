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
#define TAMANHO 6
int main(void){

    char aluno[TAMANHO-1][20];
    float nota1[TAMANHO-1];
    float nota2[TAMANHO-1];
    float media[TAMANHO-1];

    float soma_medias=0;
    int alunos_aprovados=0;
    int alunos_de_exame=0;
    int alunos_reprovados=0;

    for( int i=0; i < TAMANHO; i++){
        printf("Aluno %i: ", i+1);
        scanf("%s", &aluno[i]);

        printf("Primeira Nota: ");
        do{ 
            scanf("%f", &nota1[i]);
        } while( nota1[i] < 0 || nota1[i] > 10 );

        printf("Segunda Nota: ");
        do{
            scanf("%f", &nota2[i]);
        } while( nota2[i] < 0  || nota2[i] > 10);
    }

    // medias
    for( int i=0; i < TAMANHO; i++)
        media[i] = ( nota1[i] + nota2[i])/2;

    for( int i=0; i < TAMANHO; i++)
        soma_medias += media[i];
    
    // Relatorio
    printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "Aluno", "1º Prova", "2º Prova", "Média", "Situação");
    for( int i=0; i < TAMANHO; i++ ){

        printf("%-10s\t%-10.2f\t%-10.2f\t%-10.2f", aluno[i], nota1[i], nota2[i], media[i]);

        if( media[i] > 6 ){
            printf("\t%-10s\n", "Aprovado");
            alunos_aprovados++;
        }
        else if( media[i] > 5 && media[i] <= 6 ){
            printf("\t%-10s\n", "Exame");
            alunos_de_exame++;

        } 
        else{
            printf("\t%-10s\n", "Reprovado");
            alunos_reprovados++;
        }

    }

    printf("\nMédia da Classe = %.2f\n", soma_medias/TAMANHO);
    printf("Percentual de Alunos Aprovados = %.2f%c\n", 100*(alunos_aprovados/TAMANHO), '%');
    printf("Percentual de Alunos de Exame= %.2f%c\n", 100*(alunos_de_exame/TAMANHO), '%');
    printf("Percentual de Alunos Reprovados= %.2f%c\n", 100*(alunos_reprovados/TAMANHO),'%');
    


    
	return 0;

}


