/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/
/* Deskripsi : Menentukan dan menampilkan integer sembarang N apakah bilangan sempurna, dengan N > 0*/

#include<stdio.h>

int main(){
    int N, i, total = 0;

    printf("Masukan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Nilai N harus positif");
    }
    else{
        for(i = 1; i <= N/2; i++){
            if(N % i == 0){
            total += i;
            }
        }
    }
        if(total == N){
            printf("%d adalah bilangan sempurna", N);
        }
        else{
            printf("%d adalah bukan bilangan sempurna", N);
        }

    return 0;
}