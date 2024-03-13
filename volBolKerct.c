#include<stdio.h>

int main(){
    float r, Vb, Vk;
    const float phi = 3.1415;
    printf("Masukan nilai jari-jari lingkaran (r): ");
    scanf("%f", &r);
    
    Vb = (4 / 3) * (phi * r * r * r);
    Vk = 0.5 * Vb;

    printf("Volume bola = %.2f meter \n", Vb);
    printf("Volume kerucut = %.2f meter \n", Vk);

    return 0;
}