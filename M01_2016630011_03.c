#include<stdio.h>

int main()
{
int x;
int *pointer;

pointer=&x;

printf("input ke-n : ");
scanf("%d",&x);

printf("hasil dari input ke-n : %d\n",x);
printf("alamat dari input ke-n : %p\n",&x);
printf("hasil dari alamat dari input ke-n : %d",x);

return 0;
}
