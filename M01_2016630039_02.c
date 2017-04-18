#include <stdio.h>

int w(int *x);
int y(int *z);

int main()
{
int a,b;
printf("input 1 [angka/huruf]:");
scanf("%d",&a);
printf("input 2 [angka/huruf]:");
scanf("%d",&b);

printf("isi dari input 1 adalah %d dan input 2 adalah %d (sebelum swap)\n",a,b);
printf("isi dari input 1 adalah %d dan input 2 adalah %d \n",w(&b),y(&a));
printf("isi dari input 1 adalah %d dan input 2 adalah %d (sesudah swap)\n",w(&b),y(&a));
return 0;
}

int w(int *x){
int nilai;
nilai=*x;
return nilai;
}

int y(int *z){
int nilai;
nilai=*z;
return nilai;
}
