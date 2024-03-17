/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/
/* Deskripsi : Menentukan dan menampilkan integer sembarang N apakah prima atau bukan, dengan N > 0*/

#include<stdio.h>

int main(){
    int N, i, prima;

    printf("Masukan nilai N: ");
    scanf("%d", &N);

    if (N > 0){
        prima = 0;
        for(i=1; i<=N; i++){
            if(N % i == 0)
            prima++;
        }
        if (prima == 2){
            printf("Bilangan Prima");
        }
        else {
            printf("Bukan bilangan Prima");
        }
    }
    else{
        printf("Masukan tidak boleh kurang dari sama dengan NOL")
    }
        
    return 0;
}
