// Nama : Fauzan Hadi
// NIM  : 24060123140176

#include<stdio.h>

int main(){
    int N, i, K, Pass, Temp;

    N = 7;
    int T[7] = {7, 1, 6, 5, 3, 7, 6};
    K = 0;

    for(Pass = 0; Pass < N - 1; Pass++){
        for(K = N - 1; K >= Pass + 1; K--){
            if(T[K] < T[K - 1]){
                Temp = T[K];
                T[K] = T[K - 1];
                T[K - 1] = Temp;
            }
        }
    }
    for(i = 0; i < N; i++){
        printf("%d ",T[i]);
    }
}