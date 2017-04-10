#include<stdio.h>

double jumlah(double input, double bil);
double kurang(double input,double bil);
double kali(double input,double bil);
double bagi(double input,double bil);

int main()
{
float data, bill, plus, min, perkalian, pembagian;
printf("Masukan bilangan  :");
scanf("%f",&data);
printf("Masukan bilangan yang akan di substitusi :");
scanf("%f",&bill);

plus=jumlah(data,bill);
min=kurang(data,bill);
perkalian=kali(data,bill);
pembagian=bagi(data,bill);

printf("Hasil Penjumlahan dengan %f adalah %.2f\n", bill, plus);
printf("Hasil Pengurangan dengan %f adalah %.2f\n", bill, min);
printf("Hasil Perkalian dengan %f adalah %.2f\n",bill, perkalian);
printf("Hasil Pembagian dengan %f adalah %.2f\n",bill, pembagian);

return 0;
}

double jumlah(double input,double bil)
{
    return input + bil;
}

double kurang(double input,double bil)
{
   return input - bil;
}

double kali(double input,double bil)
{
    return input * bil;
}

double bagi(double input,double bil)
{
    return input/bil;
}
