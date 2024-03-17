/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/
/* Deskripsi : untuk mencetak bilangan Sempurna sampai dengan bilangan integer sembarang.*/

#include<stdio.h>

int main(){
    int N, i, j, Semp;

    printf("Masukan nilai N: ");
    scanf("%d", &N);

    if (N > 0){
        for(i = 1; i <= N; i++){
            Semp = 0;
            for (j = 1; j < i; j++){
                if (i % j == 0){
                    Semp = Semp + j;
                }
            }
            if (Semp == i){
                printf("%d ", i);
            }
        }
    }
    else {
        printf("Masukan tidak boleh kurang dari sama dengan NOL");
    }

    return 0;
}
