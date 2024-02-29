/*  Main fonksiyonu içerisinde verilen sayının basamaklarını toplamını rekürsif bir fonksiyon kullanarak bulunuz.
    Write a recursion function to sum the digits of the number given in the main function.
*/

#include <stdio.h>

int basamakToplami(int sayi);

int main() {
    int girilenSayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &girilenSayi);

    int toplam = basamakToplami(girilenSayi);

    printf("Sayinin basamaklari toplami: %d\n", toplam);

    return 0;
}

int basamakToplami(int sayi) {
    if (sayi < 10) {
        return sayi;
    } else {
        return sayi % 10 + basamakToplami(sayi / 10);
    }
}
