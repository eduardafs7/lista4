#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("Distancia: %.2f\n", distancia(x1, y1, x2, y2));
    return 0;
}
