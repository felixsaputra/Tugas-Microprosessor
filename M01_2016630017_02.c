#include <stdio.h>

int swap(int *input1 );
int swap1(int *input2);

int main()
{
    int i1, i2 ,s, s1, *I1, *I2, *sw, *sw1;

    printf("Masukkan Input 1 (Angka) : ");
    scanf("%d",&i1);
    printf("Masukkan Input 2 (Angka): ");
    scanf("%d",&i2);

    I1 = &i1;
    I2 = &i2;

    printf("Isi Dari Input 1 adalah %d dan Input 2 adalah %d", *I1, *I2);
    printf("\nIsi Dari Input 1 adalah %d dan Input 2 adalah %d", *I2, *I1);

    return 0;
}
