#include <stdio.h>

int main()
{
char x[10],y[10];
char *a , *b;
a=&x;
b=&y;

printf("input 1 (angka / huruf) = ");
scanf("%s", x);
printf("input 2 (angka / huruf) = ");
scanf("%s", y);

printf("isi dari input 1 adalah %s dan input 2 adalah %s (sebelum swap)\n" , x , y);
printf("isi dari input 1 adalah %s dan input 2 adalah %s \n" , y , x);
printf("isi dari input 1 adalah %s dan input 2 adalah %s (setelah swap)\n" , b , a);

return 0;

}
