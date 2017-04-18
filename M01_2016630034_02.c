#include <stdio.h>
int main()
{
int loser1(int *input2);
int loser2(int *input1);
int x,y;

    printf("input 1 : ");
    scanf("%d", &x);
    printf("input 2 : ");
    scanf("%d", &y);

    printf("Isi dari input 1 adalah %d dan input 2 adalah %d\n",x,y);
    printf("Isi dari input 1 adalah %d dan input 2 adalah %d\n",loser1(&y),loser2(&x));
    printf("Isi dari input 1 adalah %d dan input 2 adalah %d\n",loser1(&y),loser2(&x));


return 0;
}
int loser1(int *input2)
{
int hasil;
hasil = *input2;

return hasil;
}

int loser2(int *input1)
{
int hasil;
hasil = *input1;

return hasil;
}
