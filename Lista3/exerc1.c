#include <stdio.h>

int main(void)
    {
        int n1, n2, n3, n4, aux;
        int i;       
        int j;


       i=1;      
       while( i <= 5 ){
            printf("Group %d\n", i);
            printf("Enter 4 Numbers: ");
            scanf("%d %d %d %d", &n1, &n2, &n3, &n4 );

            printf("Entering Order: ");
            printf("%d %d %d %d\n", n1, n2, n3, n4);
            
            j=1;    
            while( j <= 3 ){

                if( n1 > n2 ){
                    aux = n1;
                    n1 = n2;
                    n2 = aux;
                }

                if( n2 > n3 ){
                    aux = n2;
                    n2 = n3;
                    n3 = aux;
                }

                if( n3 > n4 ){
                    aux = n4;
                    n4 = n3;
                    n3 = aux;
                } 

                j++;
            }
        i++;
        printf("Ascending Order: %d %d %d %d\n", n1, n2, n3, n4);
        printf("Descending Order: %d %d %d %d\n", n4, n3, n2, n1);
     }   


        return 0;
    }
