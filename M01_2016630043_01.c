#include <stdio.h>
#define v 3.14

float luas (float *x);
float juring (float *x,float *y);
int main()
{
    float jari,sudut;


    printf("Masukkan jari-jari :");
    scanf("%f" , &jari);
    printf("Masukkan sudut     :");
    scanf("%f" , &sudut);
    printf("Luas lingkaran adalah %.2f \n" , luas (&jari));
    printf("Luas juring dengan sudut %f adalah %.2f \n" , sudut , juring (&jari , &sudut));
    return 0;
}

float luas (float *x)
{
float luas;
luas = v * *x * *x;
return luas;
}
float juring(float *x , float *y)
{
float luas;
luas = (*y * v * *x * *x)/360;
return luas;
}
