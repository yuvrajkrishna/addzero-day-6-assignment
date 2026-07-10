#include <stdio.h>

int main() {

    int n = 20;

    int prime[n + 1];

    for (int i = 0; i <= n; i++)
        prime[i] = 1;

    prime[0] = prime[1] = 0;

    for (int i = 2; i * i <= n; i++) {

        if (prime[i]) {

            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;

        }
    }

    for (int i = 2; i <= n; i++) {

        if (prime[i])
            printf("%d ", i);

    }

    return 0;
}