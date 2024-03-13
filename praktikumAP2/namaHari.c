/* Pembuat   : Fauzan Hadi*/
/* NIM       : 24060123140176*/
/* Deskripsi : Menampilkan nama-nama hari dari nomor hari 1 samapi 7 */

#include<stdio.h>

int main(){

    int hari;

    printf("Masukan nomor hari (1-7): ");
    scanf("%d", &hari);

    if (hari >= 1 && hari <= 7){
        if (hari == 1){
            printf("Senin \n");
        }
        else if (hari == 2){
            printf("Selasa \n");
        }
        else if (hari == 3){
            printf("Rabu \n");
        }
        else if (hari == 4){
            printf("Kamis \n");
        }                    
        else if (hari == 5){
            printf("Jumat \n");
        }
        else if (hari == 6){
            printf("Sabtu \n");
        }
        else if (hari == 7){
            printf("Minggu \n");
        }  
    }    
    else {
        printf("Masukan hari tidak tepat. \n");
    }    

    return 0;
}
