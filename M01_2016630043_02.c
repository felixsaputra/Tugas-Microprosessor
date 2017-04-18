#include <stdio.h>

int main()
{
char a[10],b[10];
char *c , *d;
c=&a;
d=&b;

printf("Input 1 (angka / huruf = ");
scanf("%s" , a);
printf("Input 2 (angka / huruf = ");
scanf("%s" , b);

printf("Isi dari input 1 adalah %s dan input 2 adalah %s (Sebelum swap)\n" , a ,b);
printf("Isi dari input 1 adalah %s dan input 2 adalah %s (\n" , b , a);
printf("Isi dari input 1 adalah %s dan input 2 adalah %s (Swap menggunakan pointer)\n" , d , c);

return 0;
}
