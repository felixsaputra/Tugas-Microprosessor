#include<stdio.h>

int main()

{
int bil1(int *input2);
int bil2(int *input1);
int a,b;

    printf("input1 :");
    scanf("%d",&a);
    printf("input2 :");
    scanf("%d",&b);

    printf("Input 1 adalah %d dan Input 2 adalah %d\n",a,b);
    printf("Input 1 adalah %d dan Input 2 adalah %d\n",bil1(&b),bil2(&a));
    printf("Input 1 adalah %d dam Input 2 adalah %d\n",bil1(&b),bil2(&a));

    return 0;
}


int bil1(int *input2)
    {
    int hasil;
    hasil = *input2;
    return hasil;
    }

int bil2(int *input1)
    {
    int hasil;
    hasil= *input1;
    return hasil;
    }
