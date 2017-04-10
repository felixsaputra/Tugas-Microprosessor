#include <stdio.h>

    float hasilpenjumlahan(float input,float inputO);
    float hasilpengurangan(float input,float inputO);
    float hasilperkalian(float input,float inputO);
    float hasilpembagian(float input,float inputO);

    int main()
    {
    float HP,HK,HX,HB,O,PO;

    printf("input angka awal");
    scanf("%f",&O);
    printf("input angka perhitungan");
    scanf("%f",&PO);

    HP = hasilpenjumlahan(O,PO);
    HK = hasilpengurangan(O,PO);
    HX = hasilperkalian (O,PO);
    HB = hasilpembagian(O,PO);

    printf("hasilpenjumlahan =%.2f",HP);
    printf("hasilpengurangan =%.2f",HK);
    printf("hasilperkalian =%.2f",HX);
    printf("hasilpembagian =%,2f",HB);

    return 0;
    }

    float hasilpenjumlahan(float input,float inputO)
    {
    return (input+inputO);
    }

    float hasilpengurangan(float input,float inputO)
    {
    return (input-inputO);
    }

    float hasilperkalian(float input,float inputO)
    {
    return (input*inputO);
    }

    float hasilpembagian(float input,float inputO)
    {
    return (input/inputO);
    }

