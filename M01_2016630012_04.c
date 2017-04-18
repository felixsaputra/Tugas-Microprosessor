#include<stdio.h>

int main()
{
    int* a;
    int b;

    printf("Input = ");
    scanf("%d",&b);

    a=&b;

    printf("Hasil Penjumlahan\t= %d\n", (*a)+1);
    printf("Hasil Penngurangan\t= %d\n", (*a)-1);
    printf("Hasil Penkalian\t\t= %d\n", (*a)*1);
    printf("Hasil Penbagian\t\t= %d\n", (*a)/1);
}
