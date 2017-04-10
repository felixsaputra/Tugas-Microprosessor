#include <stdio.h>

    float pi = 3.14;
    float ls(float jari);
    float js (float jari, float sudut);

    int main ()
    {
        float jari, sudut;
        float l,jl;

        printf("Masukan R (Jari-jari) :");
        scanf("%f", &jari);
        printf("\nMasukkan S (Sudut) :");
        scanf("%f", &sudut);

        jl=js(jari, sudut);
        l=ls(jari);

    }

    float js(float jari, float sudut)
    {
        float js2;
        js2=pi*jari*jari*(sudut/360);
        printf("HASIL LUAS JURING %5.2f", js2);
        }

    float ls(float jari)
    {
        float ls2;
        ls2=pi*jari*jari;
        printf("HASIL LUAS LINGKARAN %5.2f", ls2);

    return 0;
    }



