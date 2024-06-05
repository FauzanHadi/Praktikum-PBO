// Pembuat  : Fauzan Hadi
// NIM      : 24060123140176

#include<stdio.h>
#include<stdbool.h>

int main(){
    int N, X, i, IX;
    bool found;
    int T[20] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    N = 20;
    X = 60;

    found = false;
    i = 0;
    while ((i <= N) && (!found)){
        if (T[i] == X){
            found = true;
        }
        else{
            i++;
        }
    }

    if (found){
        IX = i;
    }
    else{
        IX = 0;
    }

    printf("%d", IX);
    return 0;
}