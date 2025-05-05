#include <stdio.h

int sinal(int n) {
    if (n > 0) return 1;
    else if (n < 0) return -1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sinal(n));
    return 0;
}
