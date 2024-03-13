/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/
/* Deskripsi :  Menampilkan dan Menentukan nilai segitiga sama sisi, segitiga sama kaki, segitiga sembarang*/

#include<stdio.h>

int main(){
    int S1, S2, S3;

    printf("Masukan nilai sisi 1 (S1): ");
    scanf("%d", &S1);
    
    printf("Masukan nilai sisi 2 (S2): ");
    scanf("%d", &S2);

    printf("Masukan nilai sisi 3 (S3): ");
    scanf("%d", &S3);

    if ((S1 + S2 > S3) && (S1 + S3 > S2) && (S2 + S3 > S1)){
        if ((S1 > 0) && (S2 > 0) && (S3 > 0)){
            if ((S1 == S2) && (S2 == S3)){
                printf("Segitiga Sama Sisi");
            }
            else if ((S1 == S2) && (S1 != S3)){
                printf("Segitifa Sama Kaki");
            }
            else if ((S1 == S3) && (S1 != S2)){
                printf("Segitiga Sama Kaki");
            }
            else if ((S2 == S3) && (S2 != S1)){
                printf("Segitiga Sama Kaki");
            }
            else {
                printf("Segitiga Sembarang");
            }
        }
        else {
            printf("Terdapat nilai yang bukan sisi segitiga");
        }
    }
    else{
        printf("Sisi Segitiga tidak terpenuhi");
    }

    return 0;
}