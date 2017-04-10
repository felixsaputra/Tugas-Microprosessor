#include<stdio.h>
int main()
{

    int a1(int*input2);
    int a2(int*input1);
    int m,n;

     printf("input1 :");
     scanf("%d",&m);
     printf("input2 :");
     scanf("%d",&n);

     printf("input1 adalah %d dan input2 adalah %d",m,n);
     printf("\ninput1 adalah %d dan input2 adalah %d", a1(&n),a2(&m));
     printf("\ninput 1 adalah %d dan input2 adalah %d", a1(&n),a2(&m));
     return 0;


}

int a1(int *input2)
{
int hasil;
hasil= *input2;
return hasil;

}
int a2(int *input1)
{
int hasil;
hasil=* input1;
return hasil;
}
