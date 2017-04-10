#include <stdio.h>
#include <math.h>
#define MAKS 4


int main ()

{
    int i ;
    float total=0 , avrg ;
    float nilai_test [MAKS];
    char nama [50];

    printf("\n\t\t\t\tprogram mencari rata-rata");
    printf("\n\n Nama Saya :");
    gets(nama);

    for(i=0 ; i<MAKS ; i++)
    {
    printf("Nilai Mata Kuliah ke %d =", i+1);
    scanf("%f", &nilai_test[i]);
    total=total+nilai_test[i];
    }

    avrg =total/MAKS;

    printf("Nama Saya \t\t=%s\n", nama);
    printf("Rata rata Nilai\t.%g\n", avrg);

    if(avrg > 80)
    {
    printf("Mendapat Nilai A ");
    }
    else if(avrg > 70)
    {
    printf("Mendapat Nilai B ");
    }
    else if(avrg > 60)
    {
    printf("Mendapat Nilai C ");
    }
    else if(avrg > 50)
    {
    printf("Mendapat Nilai D ");
    }
    else
    {
    printf("Mendapat Nilai E ");
    }

    return 0;
}

