/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/

#include<stdio.h>

int main(){
    int k, n, i;
   
    printf("Masukkan nilai k: ");
    scanf("%d", &k);

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    int count =1;
    if (n <= 0){
        printf("Nilai n harus positif. ");
    }
    else {
        for (i = 1; count <= n; i++){
            if(i % k != 0);
            {printf("%d", i);
            count++;}
        }
    }

    return 0;
}