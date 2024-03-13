/* Pembuat   : Fauzan Hadi*/
/* NIM       : 24060123140176*/
/* Deskripsi : menentukan integer sembarang i, apakah bilangan bulat positif, nol, atau bilangan bulat negative*/


#include<stdio.h>

int main(){
    int i;
    printf("Masukan bilangan i: ");
    scanf("%d", &i);

    if (i > 0) {
        printf("Bilangan bulat positif. \n");
    }
    else if (i == 0) {
        printf("Bilangan nol. \n");
    }
    else {
        printf("Bilangan bulat negatif. \n");
    }
    return 0;
}