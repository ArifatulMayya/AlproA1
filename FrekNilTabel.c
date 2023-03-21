/* Nama File    		: FrekNilTabel */
/* Deskripsi    		: Menampilkan nilai elemen tabel T yang kemunculannya lebih dari 1 kali */
/* Pembuat      		: Arifatul Mayya Kholidha - 24060122120003 */
/*Tanggal Pembuatan		: 21 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
int N;
int count;
int i;
int j;
int T[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};

/* Algoritma */
for (i = 0; i <= 10 ; i++) {
        count = 1 ;
for (j = i + 1; j <= 10 ; j++) {
    if (T[i] == T[j] && T[i] != 0) {
        count = count + 1;
            T[j] = 0 ;
}
}
if (count>1) {
    printf ("%d " , T[i]);
}
}
    return 0 ;
}

