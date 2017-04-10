#include<stdio.h>
#define phi 3.14

float luas (float *a);
float juring (float *a, float *b);

int main()
{
    float r, sudut;
        printf("Jari - jari : ");
        scanf("%f", &r);
        printf("Sudut : ");
        scanf("%f", &sudut);
        printf("\nLuas lingkaran : %.2f\n", luas (&r));
        printf("Luas juring dengan sudut %.2f : %.2f", sudut, juring (&r, &sudut));
    return 0;
}

float luas (float *a)
{
    float luas;
    luas = phi * *a * *a;
return luas;
}

float juring (float *a, float *b)
{
    float luas;
    luas = (phi * *a * *a * *b)/360;
return luas;
}
