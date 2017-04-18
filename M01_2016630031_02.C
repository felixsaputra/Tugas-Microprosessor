#include <stdio.h>
int a(int *c);
int b(int *d);
int main()
{
int x,y;
printf("input 1 (angka / huruf): ");
scanf("%d",&x);
printf("input 2 (angka / huruf): ");
scanf("%d",&y);
printf("isi dari input 1 adalah %d dan input 2 adalah %d (sebelum swap)\n",x,y);
printf("isi dari input 1 adalah %d dan input 2 adalah %d \n",a(&y),b(&x));
printf("isi dari input 1 adalah %d dan input 2 adalah %d (sesudah swap )\n",a(&y),b(&x));

return 0;
}

    int a(int *c)
        {
        int nilai;
        nilai= *c;
        return nilai;
        }
    int b(int *d)
        {
        int nilai;
        nilai= *d;
        return nilai;
        }
