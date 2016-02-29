
//Project Name: DefaultProject
//Owner: gmello
//UID : 1000

//Write Here The Project Description
#include<stdio.h>
void gerar_primos(){
   
    int i = 100;
    int contador=0;
    while ( i <= 200 && contador < 10 ){
        
       // Verificar se é primo 
        int j = 2;
        while( j < i ){
            if( i % j == 0 )
                break;
            else
                j++;
        }

        // mostra primo
        if( j == i ){ 
            printf("%d ", i);
            contador++;
        }

        i++;
    }    
            
}

int main(void){

    printf("Os 10 primos depois de 100 são: ");
    gerar_primos();

	return 0;

}


