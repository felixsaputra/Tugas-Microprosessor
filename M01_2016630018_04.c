#include<stdio.h>

int main()
{
float x;
float *x1;

printf("MASUKKAN INPUT :");
scanf("%f", &x);

printf("\nHASIL PENJUMLAHAN :%.2f", x+1);
printf("\nHASIL PENGURANGAN :%.2f", x-1);
printf("\nHASIL PERKALIAN   :%.2f", x*1);
printf("\nHASIL PEMBAGIAN   :%.2f", x/1);

return 0;
}
