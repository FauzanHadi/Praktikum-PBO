

#include<stdio.h>

int main(){
    int v0, t, a;
    float S;
    printf("Masukan kecepatan awal (v0): ");
    scanf("%d", &v0);
    printf("Masukan waktu (t): ");
    scanf("%d", &t);
    printf("Masukan percepatan (a): ");
    scanf("%d", &a);

    S = v0 * t + 0.5 * (a * t * t);

    printf("Jarak yang ditempuh: %f meter\n", S);

    return 0;
}