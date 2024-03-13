/* Pembuat   : Fauzan Hadi*/
/* NIM       : 24060123140176*/
/* Deskripsi :  Menampilkan nama-nama bulan dari nomor bulan 1 s.d 12 */

#include<stdio.h>

int main(void){

    int bulan;

    printf("Masukan nomor bulan (1-12): ");
    scanf("%d", &bulan);

    if (bulan >= 1 && bulan <= 12){
        if (bulan == 1){
            printf("Januari \n");
        }
        else if (bulan == 2){
            printf("Febuari \n");
        }
        else if (bulan == 3){
            printf("Maret \n");
        }
        else if (bulan == 4){
            printf("April \n");
        }
        else if (bulan == 5){
            printf("Mei \n");
        }
        else if (bulan == 6){
            printf("Juni \n");
        }
        else if (bulan == 7){
            printf("Juli \n");
        }
        else if (bulan == 8){
            printf("Agustus \n");
        }
        else if (bulan == 9){
            printf("Semptember \n");
        }
        else if (bulan == 10){
            printf("Oktober \n");
        }
        else if (bulan == 11){
            printf("November \n");
        }
        else if (bulan == 12){
            printf("Desember \n");
        }
    }
    else {
        printf("Masukan bulan tidak tepat. \n");
    }
    
    return 0;
}