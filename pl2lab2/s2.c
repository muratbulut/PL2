#include <stdio.h>
/* Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yazınız. Bu fonksiyon aşağıda
verilen tabloya göre değer döndürmektedir. Yazdığınız fonksiyonu main fonksiyonunda çağırarak kullanın ve bir
program yazınızl */

int boy, kilo, indeks;
int kitleIndeks(int, int);

int main(){
    printf("Boyunuzu giriniz:(cm cinsinden) ");
    scanf("%d", &boy);

    printf("Kilonuzu giriniz:");
    scanf("%d", &kilo);

    int sonuc = kitleIndeks(boy, kilo);
    switch (sonuc)
    {
    case 1:
        printf("Zayif");
        break;
    case 2:
        printf("Normal");
        break;
    case 3:
        printf("Kilolu");
        break;
    case 4:
        printf("Obez");
        break;
    }

    return 0;
}

int kitleIndeks(int b, int k){
    indeks = kilo / (boy * boy);
    
    if(indeks >= 0 && indeks <= 18){
        return 1;
    }
    else if(indeks >= 19 && indeks <= 25){
        return 2;
    }
    else if(indeks >= 26 && indeks <= 30){
        return 3;
    }
    else if(indeks > 30){
        return 4;
    }
}