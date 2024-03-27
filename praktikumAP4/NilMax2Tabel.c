/* Pembuat : Fauzan Hadi*/
/* NIM     : 24060123140176 */
/* Deskripsi : Untuk menampilkan nilai yang muncul lebih dari satu kali*/

int main(){
    int N, i, Max1, Max2;

    printf("Masukan nilai N :");
    scanf("%d", &N);
    printf("Elemen di tabel: ");
    int TN[N];
    for (i = 0; i < N; i++){
        scanf("%d", &TN[i]);
    }
    Max1 = 0;
    Max2 = 0;
    for (i = 0; i < N; i++){
        if (TN[i] > Max1){
            Max2 = Max1;
            Max1 = TN[i];
        }else if ((TN[i] > Max2) && (TN[i] < Max1)){
            Max2 = TN[i];
        }
    } printf("Nilai maksimum kedua adalah : %d", Max2);

    return 0;
}