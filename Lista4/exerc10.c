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
#define tamanhoV1 10
#define tamanhoV2 5

int main(void){

   int v1[tamanhoV1-1];
   int v2[tamanhoV2-1];

   int resultante1[tamanhoV1-1];
   int k=0;
   int resultante2[tamanhoV2-1]; 
   int t=0;

// Leitura dos Vetores
   printf("Vetor 1: \n");
   for( int i=0; i < tamanhoV1; i++){
       printf("V1: ");
       scanf("%i", &v1[i]);
   }

   printf("Vetor 2: \n");
   for( int i=0; i < tamanhoV2; i++){
       printf("V2: ");
       scanf("%i", &v2[i]);
   }

//Mostra Vetores - DEBUG

   printf("\n");
   printf("V1: ");
   for(int i=0; i < tamanhoV1; i++)
       printf("%i ", v1[i]);

   printf("\n");

   printf("V2: ");
   for(int i=0; i< tamanhoV2; i++)
       printf("%i ", v2[i]);

   printf("\n\n");


// Calcula Resultante 1
   for( int i=0; i < tamanhoV1; i++) {
       if( v1[i] % 2 == 0 ){

            resultante1[k] = v1[i]; // inicializa a soma

            for( int j=0; j < tamanhoV2; j++){
                resultante1[k] += v2[j];
            }

            k++; // passa para o proximo indice do vetor resultante1
       }
   }

// Calcula Resultante 2
    for( int i=0; i < tamanhoV1; i++){

       if( v1[i] % 2 != 0 ){ // Faz a operação somente para os impares de v1 

             resultante2[t] = 0; // inicia o contador
 
            // calcula quantidade de divisores
            for( int j=0; j < tamanhoV2; j++){
               if( v1[i] % v2[j] == 0 ){
                   resultante2[t]++;
               }
            }
            t++; // incrementa para o próximo index do resultante2

        }
    }


// Mostra Resultantes 
    printf("Resultante1: ");
    for( int i=0; i < k ; i++)
        printf("%i ", resultante1[i]);

    printf("\nResultante2: ");
    for( int i=0; i < t ; i++)
      printf("%i ", resultante2[i]);

	return 0;

}


