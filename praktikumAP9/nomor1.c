// Nama : Fauzan Hadi
// Nim  : 24060123140176

#include<stdio.h>

int main(){
    int N, i, K, ValMin, ValMax, j;

    N = 7;
    int T[7] = {7, 1, 6, 5, 3, 7, 6};
    ValMin = 1;
    ValMax = 7;
    int TabCount[ValMax - ValMin + 1];

    for(i = 0; i < ValMax - ValMin + 1; i++){
        TabCount[i] = 0;
    }

    for(i = 0; i < N; i++){
        TabCount[T[i]] = TabCount[T[i]] + 1;
    }
    K = 0;
    for(i = 0; i <= ValMax - ValMin + 1; i++){
        for(j = 0; j < TabCount[i]; j++){
            T[K] = i;
            K++;
        }
    }
    for(i = 0; i < N; i++){
        printf("%d ",T[i]);
    }
    return 0;
}