#include <stdio.h>


int main()
{
    int a, *b;
    printf("Masukkan Input : ");
    scanf("%d",&a);

    b = &a;


    printf("\n\nHasil dari input ke-n adalah %d", a);
    printf("\nAlamat Dari Input ke-n adalah %p", b );
    printf("\nIsi dari alamat input ke-n adalah %d", *b);
}
