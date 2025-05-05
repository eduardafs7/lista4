#include <stdio.h>

int absoluto(int n) {
    return n < 0 ? -n : n;
}

int main() {
    int n;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        printf("Absoluto: %d\n", absoluto(n));
    }
    return 0;
}
