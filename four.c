#include<stdio.h>

int main () {

    int n = 12345;
    int sum = 0 ;
    int count = 0;
    while(n > 0){
        int lastdigit = n % 10 ;
        sum += lastdigit;
        count++;
        n /= 10;
    }

    printf("%d",sum/count);

    return 0 ;
}