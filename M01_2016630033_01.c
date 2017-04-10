#include <stdio.h>
#include <math.h>

    float luas_lingkaran(float jarijari);
    float juring(float sudut, float jarijari);

int main()

{
    float J, S, LL, LJ;

    printf("Masukkan jari - jari lingkaran  :");
    scanf("%f", &J);
    printf("Masukkan sudut lingkaran        :");
    scanf("%f", &S);

    LL = luas_lingkaran(J);
    LJ = juring(S, J);

    printf("Luas lingkaran adalah %.2f satuan\n", LL);
    printf("Luas juring lingkaran dengan sudut %f adalah %.2f satuan\n",S, LJ);

    return 0;
}


    float luas_lingkaran(float jarijari)
    {
        return (M_PI)*(jarijari * jarijari);
    }

    float juring(float sudut, float jarijari)
    {
        return ((M_PI) * (jarijari * jarijari) * (sudut/360));
    }
