// Fa Destri Reynaldo 2015630018

#include <stdio.h> // header input output
#include <math.h> // header operasi matematika

int main () // main execution
{
int input1, tambah, kurang, kali, bagi; // state declaration integer

printf ("input             = "); // output to screen
scanf ("%d", &input1); // input from keybo0ard

printf ("hasil penjumlahan = %d \n", penjumlahan(&input1, &tambah)); // output penambahan
printf ("hasil pengurangan = %d \n", pengurangan(&input1, &kurang)); // output pengurangan
printf ("hasil perkalian   = %d \n", perkalian(&input1, &kali)); // output perkalian
printf ("hasil pembagian   = %d \n", pembagian(&input1, &bagi)); // output pembagian

return 0;
}

int penjumlahan ( int *input) // fungsi untuk penambahan (*input=pointer to integer)
{
return *input+1;
}
int pengurangan ( int *input) // fungsi untuk pengurangan (*input=pointer to integer)
{
return *input-1;
}
int perkalian ( int *input) // fungsi untuk perkalian (*input=pointer to integer)
{
return *input*1;
}
int pembagian ( int *input) // fungsi untuk pembagian (*input=pointer to integer)
{
return *input/1;
}


