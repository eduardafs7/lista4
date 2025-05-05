#include <stdio.h>

int par(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", par(n));
    return 0;
}
