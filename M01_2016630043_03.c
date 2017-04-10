#include <stdio.h>

int main()
{
int x , y;
int *pointer;

pointer = &x;

    printf("input ke-n adalah : " );
    scanf("%d" , &x);
    printf("Hasil dari input ke-n adalah         :  %d\n" , x);
    printf("Alamat dari input ke-n adalah        :  %p\n" , &x);
    printf("Hasil dari  alamat input ke-n adalah :  %d\n" , x);


    return 0;

}
