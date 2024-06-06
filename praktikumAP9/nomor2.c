// Nama : Fauzan Hadi
// Nim  : 24060123140176

#include<stdio.h>

int main(){
    int N, i, Pass, Temp, IMax;

    N = 7;
    int T[7] = {7, 1, 6, 5, 3, 7, 6};

    for(Pass = 0; Pass <= N-1; Pass++){
        IMax = Pass;
        for(i = Pass + 1; i < N; i++){
            if (T[IMax] < T[i]){
                IMax = i;
            }
        }
        Temp = T[IMax];
        T[IMax] = T[Pass];
        T[Pass] = Temp;
    }
    for(i = 0; i < N; i++){
        printf("%d ",T[i]);
    }

    return 0;
}