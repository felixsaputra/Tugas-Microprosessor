#include<stdio.h>
int main()
{
int a,b;
int c,d[20];
printf("Masukkan jumlah input : ");
scanf("%d",&a);
    for(b=0;b<a;b++)
    {
    printf("Input ke n : ");
    scanf("%d",&d[b]);
    printf("Hasil dari input ke - n             : %d",d[b]);
    printf("\nAlamat dari input ke - n            : %p",&d[b]);
    printf("\nHasil dari alamat dari input ke - n : %d\n",d[b]);
    }

    return 0;

}
