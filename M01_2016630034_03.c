#include <stdio.h>
int main()
{

int array [100], x,y;
    printf("Masukkan Berapa Banyak Data : ");
    scanf("%d", &x);

    for(y=0;y<x;y++){
    printf("input ke-n : ");
    scanf("%d", &array[y]);
    printf("Hasil dari input ke-n adalah%d\n",array[y]);
    printf("Alamat dari input ke-n adalah %p\n",&array[y]);
    printf("Hasil dari alamat dari input ke-n adalah%d\n",array[y]);

    }


return 0;
}
