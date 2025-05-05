#include <stdio.h>

int menor(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Menor: %d\n", menor(x, y));
    return 0;
}
