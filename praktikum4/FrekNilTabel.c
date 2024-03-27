/* Pembuat : Fauzan Hadi*/
/* NIM     : 24060123140176 */
/* Deskripsi : Untuk menampilkan niLai maksimum ke-2 di Tabel T */

#include <stdio.h>

int main() {
    int N, i, j, frek;

    printf("Masukan nilai N: ");
    scanf("%d", &N);
    printf("Elemen di tabel: ");
    int TN[N];
    for (i = 0; i < N; i++){
        scanf("%d", &TN[i]);
    }

    for(i = 0; i < N; i++){
        if (TN[i] != 0){
            frek = 1;
            for(j = i + 1; j < N; j++){
                if(TN[j] == TN[i]){
                    frek++;
                    TN[j] = 0;
                }
            } 
            if(frek != 1){
                printf("%d ", TN[i]);
            }
        }
    }

    return 0;
}
