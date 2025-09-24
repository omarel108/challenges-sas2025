#include <stdio.h>


int fibonacci(int n) {


    int i, u, upp = 0, up = 1;

    for (i = 2; i <= n; i++) {
        u = upp + up;
        upp = up;
        up = u;
    }

    return u;
}

int main() {
    int n;

    do {
        printf("Entrez un nombre : ");
        scanf("%d", &n);
    } while (n < 2);

    printf("Le %d-ieme terme de la suite de Fibonacci est : %d\n", n, fibonacci(n));

    return 0;
}
