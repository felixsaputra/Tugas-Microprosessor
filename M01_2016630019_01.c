#include<stdio.h>
#include<math.h>


double luas(double jari);
double lusu(double jari,double sudut);

int main()
{
float r, l, s,ls;
printf("Masukan jari-jari Lingkaran  :");
scanf("%f",&r);
printf("Masukan Sudut Lingkaran      :");
scanf("%f",&s);

l=luas(r);
ls=lusu(s,r);

printf("Luas lingkaran adalah %.2f\n",l);
printf("Luas Juring adalah %.2f\n",ls);

return 0;
}

double luas(double jari)
{
 return (jari * jari * M_PI);
}

double lusu(double jari,double sudut)
{
   return (sudut/360 * jari * jari * M_PI);
}
