/* Pembuat : Fauzan Hadi*/
/* NIM     : 24060123140176 */
/* Deskripsi : Untuk menentukan dan menampilkan bahwa tabel T1 dan tabel T2 simetri atau tidak.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N1, N2, i;

    printf("Masukkan ukuran tabel T1: ");
    scanf("%d", &N1);
    printf("Masukkan ukuran tabel T2: ");
    scanf("%d", &N2);

    if (N1 != N2){
        printf("Tabel T1 dan T2 Tidak Simetri\n");
        return 0;
    }

    int simetri = 1;

    printf("Masukkan elemen-elemen tabel T1: ");
    int T1[N1], T2[N2];
    for(i = 0; i < N2; i++){
        scanf("%d", &T1[i]);
    }

    printf("Masukkan elemen-elemen tabel T2: ");
    for (i = 0; i < N2; i++){
        scanf("%d", &T2[i]);
    }

    for (i = 0; i < N1; i++){
        if (T1[i] != T2[i]){
            simetri = 0;
            break;
        }
    }
    if (simetri == 1){
        printf("Tabel T1 dan T2 simetri\n");
    } else {
        printf("Tabel T1 dan T2 tidak simetri\n");
    }
    return 0;
    
}