/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/
/* Deskripsi : Mengecek dan menampilkan faktor bilangan dari integer sembarang N, dengan N > 0*/

#include<stdio.h>

int main(){
    int N, i;

    printf("Masukan nilai N: ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Nilai N harus positif");
    }
    else{
        printf("Faktor bilangannya adalah: ");
        for (i = 1; i <= N; i++){
            if (N % i == 0)
            printf(" %d", i);
        }
    }

    printf("\n");
    return 0;
}