#include <stdio.h>

 float hesapla(float r); 

int main(){
    
    float yaricap;
    printf("Yaricapi giriniz:");
    scanf("%f", &yaricap);
    printf("%0.2f", hesapla(yaricap));
    return 0;
}

float hesapla(float r){
    float sonuc, pi;
    pi = 3.14;
    sonuc = pi * r * r;
    return sonuc;
}