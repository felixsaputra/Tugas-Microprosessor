#include <stdio.h>
#define v 3.14

float luas (float *a);
float juring (float *a, float *b);
int main()
{
    float jari, sudut;

    printf("masukkan jari jari : ");
    scanf("%f", &jari);
    printf("masukkan sudut : ");
    scanf("%f", &sudut);
    printf("\nluas lingkaran adalah %.2f" , luas (&jari));
    printf("\nluas juring dengan sudut %f adalah %.2f" , sudut , juring (&jari , &sudut));
    return 0;


}

float luas (float *a)
{
float luas;
luas = v * *a * *a;
return luas;
}
float juring (float *a , float *b)
{
float luas;
luas = (*b * v * *a * *a)/360;
return luas;
}
