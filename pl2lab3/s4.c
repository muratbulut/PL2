/*  Main fonksiyonu içerisinde verilen iki pozitif sayıyı kullanarak bu sayıların en büyük ortak bölenini rekürsif bir fonksiyon kullanarak bulunuz.
    Using the two positive numbers given in the main function, find the largest common divisor of these numbers using a recursive function.
*/

#include <stdio.h>

int ebobBul(int sayi1, int sayi2);

int main() {
    int sayi1, sayi2;
    
    printf("Iki pozitif sayi giriniz:\n");
    scanf("%d %d", &sayi1, &sayi2);

    if (sayi1 > 0 && sayi2 > 0) {
        int enBuyukOrtakBolen = ebobBul(sayi1, sayi2);
        printf("En Buyuk Ortak Bolen (EBOB): %d\n", enBuyukOrtakBolen);
    } else {
        printf("Girilen sayilar pozitif olmalidir.\n");
    }

    return 0;
}

int ebobBul(int sayi1, int sayi2) {
    
    if (sayi2 == 0) {
        return sayi1;
    } else {
        
        return ebobBul(sayi2, sayi1 % sayi2);
    }
}
