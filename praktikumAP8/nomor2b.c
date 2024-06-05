// Pembuat  : Fauzan Hadi
// NIM      : 24060123140176

#include<stdio.h>
#include<stdbool.h>

int main(){
    int i, N, X, IX, atas, bawah, tengah;
    bool found;
    int T[13] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};

    N = 13;
    X = 8;
    atas = 1;
    bawah = N;
    found = false;

    while((atas <= bawah) && (!found)){
        tengah = (atas + bawah) / 2;
        if (X == T[tengah]){
            found = true;
            IX = tengah;
        }
        else if (X < T[tengah]){
            bawah = tengah - 1;
        }
        else if (X > T[tengah]){
            atas = tengah + 1;
        }
    }
    if (found) {
        printf("data ada di indeks ke %d ", IX);
    } else {
        printf("data tidak ditemukan");
    }

    return 0;
}