#include <stdio.h>

int penambahan(int x, int y);
int pengurangan(int x, int y);
int perkalian(int x, int y);
int pembagian (int x, int y);

int main()
{
int a, b, hasil;

printf("bilangan 1 : ");
scanf("%d", &a);

printf("bilangan 2 : ");
scanf("%d", &b);

hasil=penambahan(a, b);//memanggil fungsi penambahan
printf("hasil penambahan : %d\n", hasil);

hasil=pengurangan(a,b);//memanggil fungsi pengurangan
printf("hasil pengurangan : %d\n", hasil);

hasil=perkalian(a,b);//memanggil fungsi perkalian
printf("hasil perkalian : %d\n", hasil);

hasil =pembagian(a,b);//memanggil fungsi pembagian
printf("hasil pembagian : %d", hasil);

return 0;
}
//fungsi penambahan
int penambahan (int x, int y)
{
    return x+y;
}
//fungsi pengurangan0
int pengurangan (int x, int y)
{
    return x-y;
}
//fungsi perkalian
int perkalian (int x, int y)
{
    return x*y;
}
//fungsi pembagian
int pembagian (int x, int y)
{
    return x/y;
}
