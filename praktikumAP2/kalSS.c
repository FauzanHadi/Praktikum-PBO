/* Pembuat   : Fauzan HADI*/
/* NIM       : 24060123140176*/
/* Deskripsi : Menghitung dan menampilkan beberapa hasil operasi aritmatika terhadap dua bilangan. */


#include<stdio.h>

int main(){
    int iA, iB;
    float hasil;
    char operasi;

    printf("Masukan nilai bilangan (iA): ");
    scanf("%d", &iA);

    printf("Masukan nilai bilangan (iB): ");
    scanf("%d", &iB);

    printf("Masukan pilihan operasi aritmatika: ");
    scanf(" %c", &operasi);

    if (operasi == 'a' || operasi == 'b' || operasi == 'c' || operasi == 'd' || operasi == 'e' || operasi == 'f'){
        if (operasi == 'a'){
            hasil = iA + iB;
            printf("Hasil dari operasi Penjumlahan: %d \n", (int)hasil);
        }
        else if (operasi == 'b'){
            hasil = iA - iB;
            printf("Hasil dari operasi Pengurangan: %d \n", (int)hasil);
        }
        else if (operasi == 'c'){
            hasil = iA * iB;
            printf("Hasil dari operasi Perkalian: %d \n", (int)hasil);
        }
        else if (operasi == 'd'){
            hasil = (float)iA / iB;
            printf("Hasil dari operasi Pembagian: %.2f \n", hasil);
        }
        else if (operasi == 'e'){
            hasil = iA / iB;
            printf("Hasil dari operasi div: %d \n", (int)hasil);
        }
        else if (operasi == 'f'){
            hasil = iA % iB;
            printf("Hasil dari operasi mod: %d \n", (int)hasil);
        } 
        else {
            printf("Bukan pilihan menu yang benar \n");
        } 
    }
    else {
        printf("Bukan pilihan menu yang benar \n");
    }
    
    return 0;
}