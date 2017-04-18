// Soal 4

#include <stdio.h>

void operasi(float* x, float* y);

int main ()
{
    float a, b;
    printf("Input bilangan 1 : ");
    scanf("%f", &a);
    printf("Input bilangan 2 : ");
    scanf("%f", &b);

    operasi(&a, &b);

return 0;
}

void operasi(float* x, float* y)
{
    printf("\nHasil Penjumlahan\t= %5.2f", *x + *y);
    printf("\nHasil Pengurangan\t= %5.2f", *x - *y);
    printf("\nHasil Perkalian\t\t= %5.2f", *x * *y);
    printf("\nHasil Pembagian\t\t= %5.2f\n\n", *x / *y);

}
