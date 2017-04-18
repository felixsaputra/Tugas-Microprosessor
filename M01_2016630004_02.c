#include <stdio.h>

void tukar (int *a, int *b);

int main()
{
int a, b;

printf("masukan angka 1 : ");
scanf("%d", &a);

printf("masukan angka 2 : ");
scanf("%d", &b);

printf("sebelum ditukar angka 1 adalah %d, angka 2 adalah %d\n", a, b);

tukar (&a, &b);//memanggil fungsi

printf("setelah ditukar angka 1 adalah %d, angka 2 adalah %d\n", a, b);//hasil setelah ditukar

return 0;
}
//fungsi untuk menukar
void tukar(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;

    return;
}
