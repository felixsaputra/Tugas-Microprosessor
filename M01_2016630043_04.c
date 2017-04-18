#include <stdio.h>

int main()
{
int a,n;
int *b , *c;

b=&a;
c=&n;

printf("Input angka :");
scanf("%d" , &a);

printf("Input angka yang di operasikan :");
scanf("%d" , &n);

printf("Hasil penjumlahan : %d\n" , tambah(b,c));
printf("Hasil pengurangan : %d\n" , kurang(b,c));
printf("Hasil perkalian   : %d\n" , kali(b,c));
printf("Hasil pembagian   : %d\n" , kurang(b,c));

return 0;
}

int tambah(int *b , int *c)
{
    return *b + *c;
}

int kurang(int *b , int *c)
{
    return *b - *c;
}

int kali(int *b , int *c)
{
    return *b * *c;
}

int bagi(int *b , int *c)
{
    return *b / *c;
}
