/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/
/* Deskripsi : mencetak bilangan Prima sampai dengan bilangan integer sembarang N (N>0).*/

#include<stdio.h>

int main(){
    int N, i, j, prima;

    printf("Masukan nilai N: ");
    scanf("%d", &N);

    if (N > 0){
        for(i = 1; i <= N; i++){
            prima = 0;
            for(j = 1;j <= i; j++){
                if(i % j == 0){
                    prima++;
                }
            }
            if (prima == 2){
                printf("%d ", i);
            }
        }
    }
    else{
        printf("Masukan tidak boleh kurang dari sama dengan NOL");
    }
    
    return 0;
}