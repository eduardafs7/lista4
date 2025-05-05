#include <stdio.h>

float media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A') return (n1 + n2 + n3) / 3;
    else if (tipo == 'P') return (n1*5 + n2*3 + n3*2) / 10;
    else if (tipo == 'H') return 3 / (1/n1 + 1/n2 + 1/n3);
    else return -1;
}

int main() {
    float n1, n2, n3;
    char tipo;
    scanf("%f %f %f %c", &n1, &n2, &n3, &tipo);
    printf("Media: %.2f\n", media(n1, n2, n3, tipo));
    return 0;
}
