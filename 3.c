#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;
    scanf("%d %d", &base, &expoente);
    printf("Potencia: %d\n", potencia(base, expoente));
    return 0;
}
