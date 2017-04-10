//Soal 3

#include <stdio.h>

void print(int* nilai, int n);

int main()
{
    int n, i;
    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &n);

    int nilai[n];
    for (i=0;i<n;i++)
    {
        printf("Input ke-%d : ", i+1);
        scanf("%d", &nilai[i]);
    }

    print(nilai, n);

return 0;
}

void print(int* nilai, int n)
{
    int a;
    for(a=0;a<n;a++)
    {
        printf("\nHasil dari Input ke-%d adalah %d", a+1, nilai[a]);
        printf("\nAlamat dari Input ke-%d adalah %d", a+1, &nilai[a]);
        printf("\nHasil dari alamat %d dari input ke-%d adalah %d\n\n", &nilai[a], a+1, nilai[a]);

    }
}
