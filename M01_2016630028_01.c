#include <stdio.h>
#include <math.h>


    float luaslingkaran (float jari_jari);
    float juring (float sudut, float jari_jari);

    int main()
    {

    float w,q , llingkaran , ljuring;

    printf("input jari_jari lingkaran:");
    scanf("%f", &w);
    printf("input sudut juring:");
    scanf("%f", &q);

    llingkaran = luaslingkaran(w);
    ljuring = juring(q,w);

    printf("\n\nluas lingkaran %7.2f adalah %72f",w,llingkaran);
    printf("\nluas juring %7.2f adalah %7.2f", q, ljuring);


    float luaslingkaran(float jari_jari)
    {
     return (M_PI *jari_jari * jari_jari);
    }


     float juring(float sudut,float jari_jari)
     {
     return (sudut/360 * M_PI*jari_jari *jari_jari);
     }
    }
