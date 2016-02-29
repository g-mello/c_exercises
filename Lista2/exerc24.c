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

// vide enunciado exerc 24
#include<stdio.h>
#include<ctype.h>

int main(void){

    float preco;
    int categoria; // 1 ou 2 ou 3
    char situacao; // R ou N

    float aumento;
    float imposto;
    float novo_preco;

    printf("Preço: ");
    scanf("%f", &preco );

    printf("Categoria: 1 Limpeza 2 Alimentação 3 Vestuário: ");
    scanf("%d", &categoria);

    printf("Situação: (R) Refrigerado (N) Não Refrigerado ");
    scanf("\n%c", &situacao);
    
    // Transforma em uppercase caso o usuário entre com lowercase
    situacao=toupper(situacao); 
    
    // Faz a validação da Categoria
    if ( categoria != 1 && categoria != 2 && categoria != 3 ){
        printf("ERRO: Categoria inválida, digite 1 ou 2 ou 3.\n");
        return 1;
    }
    
    // Faz a validação da Situação
    if ( situacao != 'R' && situacao != 'N' ){
        printf("ERRO: Situação inválida, digite R ou N. \n");
        return 1;
    }

   // Calcula e mostra o valor aumento a partir do preço e da categoria 
    if ( preco <= 25 ){
            switch (categoria) {
                case 1:
                     aumento = preco*0.05; printf("Aumento: R$ %.2f\n", aumento);
                    break;
                case 2:
                     aumento = preco*0.08; printf("Aumento: R$ %.2f\n", aumento);
                    break;
                case 3:
                     aumento = preco*0.1; printf("Aumento: R$ %.2f\n", aumento);
                    break;
                    
            } 
    } 

    else{ // preço > 25
            switch (categoria) {
                case 1: 
                     aumento = preco*0.12; printf("Aumento: R$ %.2f\n", aumento);
                    break;
                case 2: 
                     aumento = preco*0.15; printf("Aumento: R$ %.2f\n", aumento);
                    break;
                case 3: 
                     aumento = preco*0.18; printf("Aumento: R$ %.2f\n", aumento);
                    break;
                    
            }
    }

    // Calcula e mostra o valor do imposto a partir da categoria e 
    // Situação
    if ( categoria == 2 || situacao == 'R' )
        { imposto = 0.05*preco; printf("Imposto: R$ %.2f\n", imposto); }

    else
         { imposto = 0.08*preco; printf("Imposto: R$ %.2f\n", imposto); }


    // Calcula e mostra o novo preço
     novo_preco=preco + aumento - imposto;

     printf("Novo Preço: R$ %.2f\n", novo_preco);

    // Mostra a classificação a partir do novo preço
    if ( novo_preco <= 50 )
        printf("Classificação: Barato\n");
        else if ( novo_preco > 50 && novo_preco < 120 )
            printf("Classificação: Normal\n");

    else //  novo preco >= 120
        printf("Classificação: Caro\n");

	return 0;
}


