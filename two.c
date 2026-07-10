#include<stdio.h>

int main () {

    int left = 4 ; 
    
    int right = 10;

    for ( int i = left ; i <= right ; i++ ){

        for( int j = 2 ; j < i ; j++ ){

            if( i % j == 0 ){
                break;
            }
            else{
                if(j == i -1){
                    printf("%d ", i);
                }
                else{
                    continue;
                }
            }

        }

        

        

    }

    return 0 ;

}