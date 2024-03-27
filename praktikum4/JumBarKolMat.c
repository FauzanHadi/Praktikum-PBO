/* Pembuat : Fauzan Hadi*/
/* NIM     : 24060123140176 */
/* Deskripsi : Untuk menjumlahkan dan menampilkan semua elemen pada baris dan kolomnya */

#include <stdio.h>

int main() {
    int baris, kolom, i, j;

    printf("Masukkan jumlah baris matriks T: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom matriks T: ");
    scanf("%d", &kolom);

    int T[baris][kolom];

    printf("Masukkan elemen-elemen matriks T:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    printf("Jumlah elemen pada setiap baris:\n");
    for (i = 0; i < baris; i++) {
        int jumbaris = 0;
        for (j = 0; j < kolom; j++) {
            jumbaris += T[i][j];
        }
        printf("Baris ke-%d = %d\n", i+1, jumbaris);
    }

    printf("Jumlah elemen pada setiap kolom:\n");
    for (int j = 0; j < kolom; j++) {
        int jumkolom = 0;
        for (int i = 0; i < baris; i++) {
            jumkolom += T[i][j];
        }
        printf("Kolom ke-%d = %d\n", j+1, jumkolom);
    }

    return 0;
}
