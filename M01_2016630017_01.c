#include <stdio.h>
#include <math.h>

float luaslingkaran(float jari_jari);
float juring(float sudut , float jari_jari);

int main()
{
    float r, s , llingkaran, ljuring;

    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan Sudut Juring : ");
    scanf("%f", &s);

    llingkaran = luaslingkaran(r);
    ljuring = juring(s,r);

    printf("\n\nLuas Lingkaran Dengan Jari Jari %7.2f adalah %7.2f", r, llingkaran);
    printf("\nLuas Juring Dengan Besar Sudut %7.2f adalah %7.2f", s, ljuring);
}

float luaslingkaran(float jari_jari)
{
    return ( M_PI * jari_jari * jari_jari);
}

float juring(float sudut, float jari_jari)
{
    return ( sudut/360 * M_PI * jari_jari * jari_jari);
}
