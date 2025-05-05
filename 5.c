#include <stdio.h>

int lerPositivo() {
    int n;
    do {
        scanf("%d", &n);
    } while (n <= 0);
    return n;
}

int somaDivisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    return soma;
}

int main() {
    for (int i = 0; i < 5; i++) {
        int n = lerPositivo();
        printf("Soma dos divisores de %d: %d\n", n, somaDivisores(n));
    }
    return 0;
}
