#include <stdio.h>
int main()
{
int a,b;
int c,d[10];
printf("masukkan banyaknya bilangan : ");
scanf("%d",&a);
    for(b=0;b<a;b++)
        {
        printf("input ke-n : ");
        scanf("%d",&d[b]);
        printf("hasil dari input ke-n adalah %d\n",d[b]);
        printf("hasil dari input ke-n adalah %p\n",&d[b]);
        printf("hasil dari alamat dari input ke-n adalah %d\n",d[b]);
        }
return 0;
}
