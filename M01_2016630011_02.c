#include<stdio.h>

int main()
{
char a[50],b[50];
char *x,*y;
x=&a;
y=&b;

printf("input 1 : ");
scanf("%s",a);
printf("input 2 : ");
scanf("%s",b);

printf("isi dari input 1 adalah %s dan input 2 adalah %s(sebelum swap)\n",a,b);
printf("isi dari input 1 adalah %s dan input 2 adalah %s\n",b,a);
printf("isi dari input 1 adalah %s dan input 2 adalah %s(sesudah swap)\n",y,x);

return 0;
}
