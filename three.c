#include <stdio.h>
#include <stdbool.h>

int main() {

    int n = 111011;

    if (n < 0) {
        printf("Not a Binary Number");
        return 0;
    }

    while (n > 0) {

        int digit = n % 10;

        if (digit != 0 && digit != 1) {
            printf("Not a Binary Number");
            return 0;
        }

        n /= 10;
    }

    printf("Binary Number");

    return 0;
}