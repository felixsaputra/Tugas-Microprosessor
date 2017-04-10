#include <stdio.h>
#include <math.h>



int main ()

{
    int in1, tmbh1, kali1, kurng1, bagi1;
    printf("Input :");
    scanf("%d", &in1);

    printf("Hasil Penjumlahan : %d\n", penjumlahan(&in1,&tmbh1));
    printf("Hasil Pengurangan : %d\n", pengurangan(&in1,&kurng1));
    printf("Hasil Perkalian : %d\n", perkalian(&in1,&kali1));
    printf("Hasil Pembagian : %d\n", pembagian(&in1,&bagi1));

    return 0;
}

int penjumlahan(int *input)
{
    return *input+1;

}
int pengurangan(int *input)
{
    return *input-1;

}
int perkalian(int *input)
{
    return *input*1;

}
int pembagian(int *input)
{
    return *input/1;

}
