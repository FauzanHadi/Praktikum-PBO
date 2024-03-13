/* Pembuat   : Fauzan Hadi*/
/* NIM       : 24060123140176*/
/* Deskripsi : menghasilkan dan menampilkan total tahanan jika dirangkai seri */

#include<stdio.h>

int main(){
    int T1, T2, T3, total;

    printf("Masukan nilai T1: ");
    scanf("%d", &T1);
    
    printf("Masukan nilai T2: ");
    scanf("%d", &T2);

    printf("Masukan nilai T3: ");
    scanf("%d", &T3);



    if ((T1 < 0) || (T2 < 0) || (T3 < 0)){
        printf("Masukan tahanan tidak boleh negatif. \n");
    }
    else {
        total = T1 + T2 + T3;
        printf("Total tahanan jika dirangkai seri adalah: %d \n", total);
    }
    
    return 0;
}