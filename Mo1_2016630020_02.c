#include <stdio.h>
void tukar (int* x,int* y)
{
int z;
z=*x;
*x=*y;
*y=z;
}

int main ()
{
char x[10],y[10];

printf(" Input 1 (Angka / Huruf) = ");
scanf("%s",&x);
printf(" Input 2 (Angka / Huruf) = ");
scanf("%s",&y);

printf(" Isi Dari Input 1 adalah %s dan Input 2 adalah %s (Sebelum swap)\n",x,y);
printf(" Isi Dari Input 1 adalah %s dan Input 2 adalah %s \n",x,y);

tukar(&x,&y);

printf(" Isi Dari Input 1 adalah %s dan Input 2 adalah %s (swap menggunakan pointer)",x,y);

return 0;

}
