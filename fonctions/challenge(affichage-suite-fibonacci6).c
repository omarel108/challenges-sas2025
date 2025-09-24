#include <stdio.h>

void afficherSuiteFibonacci(int n) {

    int i, u, upp = 0, up = 1;

    printf("u0 = %d\n", upp);
    printf("u1 = %d\n", up);

    for (i = 2; i <= n; i++) {
        u = upp + up;
        printf("u%d = %d\n", i, u);

        upp = up;
        up = u;
    }
}

int main() {
    int n;

    do {
        printf("Entrez un nombre  : ");
        scanf("%d", &n);
    } while (n < 2);

    afficherSuiteFibonacci(n);

    return 0;
}
