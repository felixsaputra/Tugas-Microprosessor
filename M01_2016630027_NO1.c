#include <stdio.h>
#define pi 3.14
float luas(float *r);
float luasjuring (float *r, float *s);
int main (){
float a,b;

    printf("R(jari-jari): ");
    scanf("%f", &a);

    printf("S(sudut): ");
    scanf("%f", &b);

    printf("Luas lingkaran adalah %.2f satuan", luas (&a));
    printf("Luas juring lingkaran dengan f derajat adalah %.2f satuan",a,luasjuring(&a,&b));

    return 0;
}

    float luas(float *r){
    float luas;
    luas = pi * *r * *r;
    return luas;
    }
    float luasjuring (float *r, float *s){
    float luas;
    luas = (pi* *r * *r * *s)/360;
    return luas;
    }


