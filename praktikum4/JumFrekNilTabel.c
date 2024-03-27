/* Pembuat : Fauzan Hadi*/
/* NIM     : 24060123140176 */
/* Deskripsi : Untuk menampilkan dan menjumlahkan nilai muncul lebih dari satu kali */

#include<stdio.h>

int main(){
    int N, i, j, frek, sum = 0;

    printf("Masukan nilai N: ");
    scanf("%d", &N);
    printf("Elemen di tabel: ");
    int TN[N];
    for(i = 0; i < N; i++){
        scanf("%d", &TN[i]);
    }
    
    for (i = 0; i < N; i++){
        frek = 0;
        for (j = 0; j < N; j++){
            if (TN[j] == TN[i]){
                frek++;
            }
        }
        if (frek > 1){
            sum += TN[i]; 
        }
    }
    printf("Jumlah frekuensinya adalah %d \n", sum);

    return 0;
}