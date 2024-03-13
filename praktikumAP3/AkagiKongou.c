#include<stdio.h>

int main(){
    int A, B, C, babak;

    printf("Masukkan angka yang dipilih Akagi: ");
    scanf("%d", &A);
    
    printf("Masukkan angka yang dipilih Kongou: ");
    scanf("%d", &B);
    
    while (B > 0){
        babak ++;
        printf("babak: %d\n", babak);
        C = A - B;
        printf("C + %d", C);
    }

    // Tampilkan hasil
    if (B == 0) {
        printf("Kongou menang!\n");
    } else {
        printf("Akagi menang!\n");
    }

    return 0;
}