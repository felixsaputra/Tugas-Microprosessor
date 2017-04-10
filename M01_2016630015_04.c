#include<stdio.h>

int main()
{
    int a, jumlah, kurang, bagi, kali;

    printf("Masukkan angka yang ingin dioperasikan : ");
    scanf("%d", &a);
    printf("Hasil penjumlahan : %d\n", penjumlahan (&a, &jumlah));
    printf("Hasil pengurangan : %d\n", pengurangan (&a, &kurang));
    printf("Hasil pembagian : %d\n", pembagian (&a, &bagi));
    printf("Hasil perkalian : %d\n", perkalian (&a, &kali));
return 0;
}

int penjumlahan(int *a, int *jumlah)
{
    int penjumlahan;
    penjumlahan = *a + 1;
return penjumlahan;
}

int pengurangan(int *a, int *kurang)
{
    int pengurangan;
    pengurangan = *a - 1;
return pengurangan;
}

int pembagian(int *a, int *bagi)
{
    int pembagian;
    pembagian = *a / 1;
return pembagian;
}

int perkalian(int *a, int *kali)
{
    int perkalian;
    perkalian = *a * 1;
return perkalian;
}

