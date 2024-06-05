// Pembuat  : Fauzan Hadi
// NIM      : 24060123140176

#include<stdio.h>
#include<stdbool.h>

int main(){
    int i, N, X, IX, atas, bawah, tengah;
    bool found;
    int T[13] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};

    N = 13;
    X = 41;
    atas = 1;
    bawah = N;
    tengah = (atas + bawah)/2;

    while((atas < bawah) && (X != T[tengah])){
        if (X < T[tengah]){
            bawah = tengah - 1;
        }
        else if (X > T[tengah]){
            atas = tengah + 1;
        }
    tengah = (atas + bawah)/2;
    }
    if (X = T[tengah]) {
        found = true;
        IX = tengah;
    } else {
        found = false;
        IX = 0;
    }

    printf("IX = %d\n", IX);
    return 0;
}