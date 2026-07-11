#include<stdio.h>
int main ( ) {
    
    int n = 8;
    int isprime = 1;
    for(int i = 2 ; i < n ; i++){

        if(n % i == 0){
            isprime = 0;
            break;
        }
    }
    if(isprime){
        printf("It is prime");
    }

    else{
        printf("It is not prime");
    }
    return 0;
}