#include <stdio.h>
#include <math.h>



int main ()

{
    int a,*b;

    printf("Masukan Nilai Integer :");
    scanf("%d", &a);

    b=&a;

    printf("\n");
    printf("Alamat Input : %p\n",b);
    printf("Isi Input :%d\n ",a);
    printf("Hasil input yang ditujukan alamat : %d\n",a);
    printf("Nilai input :%d\n",a);

    return 0;

}
