//NO 1

#include <stdio.h>

float normal(float jari){
    float luas;
    luas = 3.14*jari*jari;
return luas;
}

float juring(float luas, float sudut){
    float luasJuring;
    luasJuring = sudut*luas/360;
return luasJuring;
}

int main(){

    float sudut, jari, luas, luasJuring;

    printf("Masukan jari-jari lingkaran(satuan): ");
    scanf("%f", &jari);
    printf("Masukan sudut lingkaran(derajat): ");
    scanf("%f", &sudut);

luas = normal(jari);
luasJuring = juring(luas, sudut);

        printf("\n\nLuas lingkaran adalah %.2f satuan.\nJuring lingkaran dengan sudut %.2f derajat adalah %.2f satuan.\n", luas, sudut, luasJuring);

return 0;
}
