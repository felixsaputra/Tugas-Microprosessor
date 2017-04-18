#include<stdio.h>

int main()
{
int x,y,a,b,c,d;
int *p1,*p2,*p3,*p4;

printf("input angka : ");
scanf("%d",&x);
printf("nilai bilangan operasi : ");
scanf("%d",&y);

a=x+y;
b=x-y;
c=x*y;
d=x/y;

p1=&a;
p2=&b;
p3=&c;
p4=&d;

printf("hasil penjumlahan : %d\n",*p1);
printf("hasil pengurangan : %d\n",*p2);
printf("hasil perkalian : %d\n",*p3);
printf("hasil pembagian : %d\n",*p4);
}
