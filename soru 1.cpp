#include <stdio.h>

#define MAX_SIZE 100   // dizinin maksimum boyutu

int main() {
    int sayi[] = {24,32,15,40,59,12,72,18,23,37,42};   // �rnek bir dizi
    int dizi[MAX_SIZE];
    int size = sizeof(arr) / sizeof(arr[0]);  // dizinin boyutu
    int i, j, count;

    // frekans dizisi ba�lang��ta -1 ile doldurulur
    for (i = 0; i < size; i++) {
      dizi[i] = -1;
    }

    // her eleman�n frekans� hesaplan�r
    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i+1; j < size; j++) {
            if (dizi[i] == dizi[j]) {
                count++;
                dizi[j] = 0;   // tekrar eden elemanlar� i�aretle
            }
        }
        if (dizi[i] != 0) {
            dizi[i] = count;
        }
    }

    // dizinin elemanlar� ve frekanslar� yazd�r�l�r
    printf("Dizinin elemanlari ve frekanslari:\n");
    for (i = 0; i < size; i++) {
        if (dizi[i] != 0) {
            printf("%d --> %d\n", sayi[i], dizi[i]);
        }
    }

    return 0;
}
