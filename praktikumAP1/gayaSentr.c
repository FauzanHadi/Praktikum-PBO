#include<stdio.h>

int main(){
    float m, v, r, F;
    printf("Masukan nilai massa (m): ");
    scanf("%f", &m);
    printf("Masukan nilai kecepatan (v): ");
    scanf("%f", &v);
    printf("Masukan nilai jari-jari (r): ");
    scanf("%f", &r);

    F = m * (v * v / r);

    printf("Gaya yang didapat: %.2f \n", F);

    return 0;
}