/* Nama File    		: JumPrimaPro.c */
/* Deskripsi    		: Menampilkan output berupa nama bulan berdasarkan yang diinputkan,
dan apabila masukan tidak dalam rentang integer 1 sampai 12, maka akan menampilkan output "Masukan nomor bulan tidak tepat */
/* Pembuat      		: Arifatul Mayya Kholidha - 24060122120003 */
/*Tanggal Pembuatan		: 28 Maret 2023 */


#include <stdio.h>
#include <stdlib.h>

void JumPrima(int N){
    /*Kamus Lokal*/
    int i, j, faktor, jumlah = 0;

    /*Algoritma*/
    if (N>0){
    for (i = 1; i <= N; i++){
        faktor = 0;
        for (j = 1; j <= i; j++){
            if (i%j==0){
            faktor++;
            }
        }
    if (faktor == 2) {
       if (i==2){
        printf("%d",i);
       }
       else {
        printf("+%d",i);
       }
       jumlah = jumlah + i;
    }
    }
    printf("=%d",jumlah);
}
 else {
    printf("Tidak ada bilangan prima, sehingga jumlah Sn =0");
 }
    }

int main ()
{
    int N;
    printf("N:");
    scanf("%d",&N);
    JumPrima(N);
    return 0;
}
