
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>
#define LINHAS 15
#define COLUNAS 5 

int main(void){

    char nomes_alunos[LINHAS][20];
    float notas_alunos[LINHAS][COLUNAS];
    float notas_soma[LINHAS]; // Soma das notas de cada aluno para o cálculo da média
    float soma_medias=0;
  
   // Leitura dos nomes dos alunos e notas 
    for( int i=0; i < LINHAS; i++){
        
           // Leitura do nome dos alunos
           printf("%i. Nome do Aluno: ",i+1);
           scanf("%s", &nomes_alunos[i]);
        
           // Leitura das notas do aluno
           for(int j=0; j < COLUNAS; j++){
               do{
                printf("Informe a nota %i: ",j+1);
                scanf("%f", &notas_alunos[i][j]);
               }while( notas_alunos[i][j] < 0 || notas_alunos[i][j] > 10);

           } 
    }
   // Fim da leitura
 

   // Calculo da média das notas 
   for( int i=0; i < LINHAS; i++){
           notas_soma[i] = 0; // inicializa a soma para a média de cada aluno

       for( int j=0; j < COLUNAS; j++){
           notas_soma[i] += notas_alunos[i][j]; 
       }
   } 


   // Soma todas as médias da sala
   for(int i=0; i < LINHAS; i++){
       soma_medias += notas_soma[i]/LINHAS;
   }
 

   // Relatório final 
    printf("\n\n%-10s\t%-10s\t%-10s\n", "Nome", "Média", "Situação"); 
    for(int i=0; i < LINHAS; i++){
            printf("%-10s\t%-10.1f\t", nomes_alunos[i], notas_soma[i]/LINHAS); 

            // Situação para cada aluno
            if( notas_soma[i]/LINHAS >= 6 ) 
               printf("%-10s\n", "Aprovado"); 

            else if( notas_soma[i]/LINHAS >= 3 && notas_soma[i]/LINHAS < 6 )
               printf("%-10s\n", "Exame"); 
            
            else
               printf("%-10s\n", "Reprovado"); 

     }
    

    printf("\nMédia da sala: %.1f\n", soma_medias/LINHAS);

	return 0;

}


