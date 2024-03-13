#include <stdio.h>

int main(){
    int v0, t;
    const float g = 9.8;
    float y;

    printf("Masukan kecepatan awal (v0): ");
    scanf("%d", &v0);
    printf("Masukan waktu (t): ");
    scanf("%d", &t);

    y = (v0 * t) - 0.5 * (g * t * t);
    printf("y = %.2f \n", y);
    printf("Jarak yang ditempuh: %.2f meter\n", y);

    return 0;
}