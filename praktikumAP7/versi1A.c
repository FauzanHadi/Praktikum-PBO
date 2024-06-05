// Pembuat  : Fauzan Hadi
// NIM      : 24060123140176

#include<stdio.h>

int main(){
    int N, X, i, IX;

    N = 20;
    int T[20] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    X = 10;

    i = 0;
    while ((i < N) && (T[i] != X)){
        i++;
    }
    
    if (T[i] == X){
        IX = i;
    }
    else{
        IX = 0;
    }

    printf("%d", IX);
    return 0;
}