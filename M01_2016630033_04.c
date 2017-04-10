#include <stdio.h>

    float hasilpenjumlahan(float input, float inputx);
    float hasilpengurangan(float input, float inputx);
    float hasilperkalian(float input, float inputx);
    float hasilpembagian(float input, float inputx);

int main()
{
    float HJ, HK, HX, HB, X, XP;

    printf("masukkan angka awal         :");
    scanf("%f", &X);
    printf("masukkan angka perhitungan  :");
    scanf("%f", &XP);

    HJ = hasilpenjumlahan(X, XP);
    HK = hasilpengurangan(X, XP);
    HX = hasilperkalian(X, XP);
    HB = hasilpembagian(X, XP);

    printf("Hasil Penjumlahan   = %.1f", HJ);
    printf("\nHasil Pengurangan   = %.1f", HK);
    printf("\nHasil Perkalian     = %.1f", HX);
    printf("\nHasil Pembagian     = %.1f", HB);
    return 0;

}

    float hasilpenjumlahan(float input, float inputx)
    {
        return (input + inputx);
    }

    float hasilpengurangan(float input, float inputx)
    {
        return (input - inputx);
    }

    float hasilperkalian(float input, float inputx)
    {
        return (input * inputx);
    }

    float hasilpembagian(float input, float inputx)
    {
        return (input / inputx);
    }

