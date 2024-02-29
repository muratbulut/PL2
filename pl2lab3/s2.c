
/* Girilen dizideki en büyük elemanı bulan programı C dilinde Rekürsif olarak yazınız.
    Write a recursion program that finds the largest element in the entered array in C language
*/

#include <stdio.h>

int enBuyukBul(int array[], int n);

int main() {
    int sayi;
    printf("Kac adet sayi gireceksiniz: ");
    scanf("%d", &sayi);
    int array[sayi], enBuyuk, i;

    for (i = 0; i < sayi; i++) {
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%d", &array[i]);
    }

    enBuyuk = enBuyukBul(array, sayi);
    printf("En buyuk sayi: %d\n", enBuyuk);

    return 0;
}

int enBuyukBul(int array[], int n) {
    if (n == 0) {
        return array[0];
    }

    int enBuyukGeri = enBuyukBul(array, n - 1);


    if (array[n - 1] > enBuyukGeri) {
        return array[n - 1];
    } else {
        return enBuyukGeri;
    }

}
