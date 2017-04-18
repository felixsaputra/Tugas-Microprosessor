#include<stdio.h>

int main()
{
    int a,b;
    int arr[100];

    printf("Masukkan banyaknya input angka yang diinginkan : ");
    scanf("%d", &a);
        for(b=0;b<a;b++)
        {
            printf("\nInput ke-n : ", b);
            scanf("%d", &arr[b]);
            printf("Hasil dari input ke-n : %d\n", arr[b]);
            printf("Alamat dari input ke-n : %p\n", arr[b]);
            printf("Hasil dari alamat input ke-n : %d\n", arr[b]);
        }

return 0;
}
