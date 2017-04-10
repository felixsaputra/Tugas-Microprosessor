/**
*
*  M01_2016630013_04.c
*
*  Created on : Apr 10, 2017
*  Author     : Ain Al Qudhat Ilahi Rifai-2016630013
*
*  @file M01_2016630013_04.c
*  @author Ain Al Qudhat Ilahi Rifai-2016630013
*  @brief program dapat melakukan operasi penjumlahan,pengurangan, perkalian dan pembagian
*
*/

#include <stdio.h>

int main()
{
    int a,n;
    int *b,*c;

    b=&a;
    c=&n;

    printf("Input angka utama: ");
    scanf("%d", &a);

    printf("Input angka operasi: ");
    scanf("%d", &n);

    printf("Hasil penjumlahan: %d\n", plus(b,c));
    printf("Hasil pengurangan: %d\n", minus(b,c));
    printf("Hasil perkalian:  %d\n", kali(b,c));
    printf("Hasil pembagian: %d\n", bagi(b,c));

    return 0;

}

// fungsi pertambahan //

int plus(int *b, int *c)
{
    return *b + *c;
}

// fungsi pengurangan //

int minus(int *b, int *c)
{
    return *b - *c;
}

// fubgsi kali //

int kali(int *b, int *c)
{
    return (*b) * (*c);
}

// fungsi bagi //

int bagi(int *b, int *c)
{
    return *b / *c;
}

