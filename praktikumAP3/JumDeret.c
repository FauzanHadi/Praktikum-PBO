/* Pembuat   : Fauzan Hadi*/
/* NIM       : 24060123140176*/
/* Deskripsi : Menghitung dan menampilkan jumlah total deret sembarang integer N, dengan N > 0*/

#include <stdio.h>

int main() {
    int N, i;
    int total = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Nilai N harus positif. ");
    }
    else{
        for (i = 1; i <= N; i++){
            total += i;
        }
        printf("Jumlah total deret bilangan adalah %d", total);
    }

    return 0;
}
