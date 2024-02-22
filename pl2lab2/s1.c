#include <stdio.h>

/* Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “hesapla” fonksiyonuna
gönderen bir “main” fonksiyonu hazırlayınız. “hesapla” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden
okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak
fonksiyondan geri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main” ve
“hesapla” fonksiyonlarını yazınız. */

int ogrenciSayisi, toplam = 0, ortalama, gecmeNotu, ogrenciNotlari[100], kalan = 0;
int hesapla(int, int);
int main(){

    printf("Ogrenci sayisini girin:");
    scanf("%d", &ogrenciSayisi);
    
    printf("Dersin gecme notunu giriniz: ");
    scanf("%d", &gecmeNotu);
    
    if(ogrenciSayisi > 100 || ogrenciSayisi < 1){
        printf("Ogrenci sayisi en fazla 100 en az 1 olabilir.");
    }else{
        int sonuc =  hesapla(ogrenciSayisi, gecmeNotu);
        printf("Sinifta kalan ogrenci : %d", sonuc);
    }

    return 0;
}

int hesapla(int ogrenciSayisi, int gecmeNotu){
    for(int i = 0; i < ogrenciSayisi; i++){
        printf("%d. ogrencinin notunu giriniz: ", i + 1);
        int ogrenciNot;  
        scanf("%d", &ogrenciNot);
        ogrenciNotlari[i] = ogrenciNot;  
        if(ogrenciNot < gecmeNotu){  
            kalan++;
        }
        toplam = toplam + ogrenciNot;  
    }
    ortalama = toplam / ogrenciSayisi;
    printf("Sinif ortalamasi : %d \n", ortalama);
    return kalan;
}
