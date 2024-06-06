// Nama : Fauzan Hadi
// NIM  : 24060123140176

#include<stdio.h>

int main(){
    int N, i, Pass, Temp;

    N = 7;
    int T[7] = {7, 1, 6, 5, 3, 7, 6};
    
    for(Pass = 1; Pass < N; Pass++){
        Temp = T[Pass];
        i = Pass - 1;
        while((Temp < T[i]) && (i > 1)){
            T[i + 1] = T[i];
            i = i - 1;
        }
        if(Temp >= T[i]){
            T[i + 1] = Temp;
        }
        else if(Temp < T[i]){
            T[i + 1] = T[i];
            T[i] = Temp;
        }
    }
    for(i = 0; i < N; i++){
        printf("%d ",T[i]);
    }
}