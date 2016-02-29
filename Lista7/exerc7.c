
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

#include<stdio.h>

void populacao( int qtd_pessoas){

     float salario;
     float filhos;
     float soma_salarios=0;
     int soma_filhos=0;
     float maior_salario;
     int soma_pessoas_salario_350=0;

     for( i=0; i < qtd_pessoas; i++){
         printf("Sálario: R$ ");
         scanf("%f", &salario);
         printf("Numero de filhos: ");
         scanf("%f", &filhos);
    
         soma_salarios += salario;
         soma_filhos += filhos;

        if( salario >= 350 )
          soma_pessoas_salario_350++;  


     }
}
int main(void){

    

	return 0;

}


