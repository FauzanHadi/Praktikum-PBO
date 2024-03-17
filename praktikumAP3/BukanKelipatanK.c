/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/

#include<stdio.h>

int main(){
    int k, n, i = 1, count =0;
   
    printf("Masukkan nilai k: ");
    scanf("%d", &k);
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    while(count < n){
        if(i % k != 0){
            printf("%d ", i);
            count++;
        }
        i++;
    }

    return 0;
}
