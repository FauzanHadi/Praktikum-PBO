// Pembuat  : Fauzan Hadi
// NIM      : 24060123140176

#include<stdio.h>

int main(){
    int i, X, N, IX;

    int T[10] = {19 , 1, 28, 5, 20, 15, 52, 13, 16, 29};
    N = 10;
    X = 10;

    T[N] = X;
    i = 0;

    while(T[i] != X){
        i++;
    }

    if (i < N){
        IX = i;
    }
    else{
        IX = 0;
    }

    printf("%d", IX);
    return 0;
}