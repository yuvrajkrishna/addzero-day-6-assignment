#include<stdio.h>

int main()

{
    
    int n = 5 ;

    int num = 1 ;
    
    for ( int i = 0 ; i < n ; i++) {

        printf("%d ",num);

        num += i+1;

    }

    return 0;

}