#include<stdio.h>

int plus(int *x , int*tambah);
int minus(int *x , int*kurang);
int kalii(int *x , int*kali);
int bagii(int *x , int*bagi);

int main()

{
int x,tambah,kurang,bagi,kali;

printf("masukkan bilangan: ");
scanf("%d",&x);

printf("masukkan angka operasi: ");
scanf("%d %d %d %d",&tambah,&kurang,&kali,&bagi);

printf("hasil penjumlahan: %d\n ",plus(&x,&tambah));
printf("hasil pengurangan: %d\n ",minus(&x,&kurang));
printf("hasil perkalian: %d\n ",kalii(&x,&kali));
printf("hasil pembagian: %d\n ",bagii(&x,&bagi));
return 0;

}

int plus(int*x, int*tambah);
int plus;
plus = *x + *tambah;
return plus;

int minus(int*x, int*kurang);
int minus;
plus = *x - *kurang;
return minus;

int kalii(int*x, int*kali);
int kalii;
plus = *x * *kali;
return kalii;

int bagii(int*x, int*bagi);
int bagii;
plus = *x / *bagi;
return bagii;


