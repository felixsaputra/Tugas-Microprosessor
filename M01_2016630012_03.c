#include <stdio.h>


int main()
{
    int n, *a;

    printf("Input ke-n = ");
    scanf("%d",&n);

    a=&n;

    printf("\nHasil dari input ke-n adalah %d\n",n);
    printf("Alamat dari input ke-n adalah %d\n",a);
    printf("Hasil dari alamat dari input ke-n adalah %d\n",*a);

return 0;
}
