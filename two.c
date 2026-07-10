#include<stdio.h>

int main() {

    int left = 4;
    int right = 10;

    for(int i = left; i <= right; i++) {

        int prime = 1;

        if(i < 2)
            continue;

        for(int j = 2; j * j <= i; j++) {

            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime) {
            printf("%d ", i);
        }
    }

    return 0;
}