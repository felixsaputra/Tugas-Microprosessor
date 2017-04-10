#include <stdio.h>

int main()

{
    int b1(int *input2);
    int b2(int *input1);
    int x, y;

        printf("Masukkan input 1 :");
        scanf("%d", &x);
        printf("Masukkan input 2 :");
        scanf("%d", &y);

        printf("input 1 adalah %d dan input 2 adalah %d", x, y);
        printf("\ninput 1 adalah %d dan input 2 adalah %d", b1(&y), b2(&x));
        printf("\ninput 1 adalah %d dan input 2 adalah %d", b1(&y), b2(&x));

        return 0;
}

int b1(int *input2)
{
int hasil;
hasil = *input2;
return hasil;
}

int b2(int *input1)
{
int hasil;
hasil = *input1;
return hasil;
}



