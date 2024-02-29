/* Main fonksiyonu içerisinde verilen bir doğal sayıya kadar olan (bu sayı dahil) tüm sayıların toplamını 
rekürsif bir fonksiyon kullanarak hesaplayanız.*/
/* Calculate the sum of all numbers (including this number) up to a natural number given in the main function using a recursive function. */

#include <stdio.h>

int toplamHesapla(int n) {
    if (n == 0) {
        return 0;
    } else {
        
        return n + toplamHesapla(n - 1);
    }
}

int main() {
    int sayi;
    
    printf("Bir dogal sayi giriniz: ");
    scanf("%d", &sayi);
    
    printf("1'den %d'e kadar olan sayilarin toplami: %d\n", sayi, toplamHesapla(sayi));

    return 0;
}
